#ifndef GAMECATALOGUE_H_INCLUDED
#define GAMECATALOGUE_H_INCLUDED
#include "gamename.h"
#include "gameprice.h"
#include <iostream>

#define first(L) L.first
#define last(L) L.last
#define next(P) P->next
#define prev(P) P->prev
#define info(P) P->info

using namespace std;


typedef struct infotypeC{
    address name;
    addressP price;
};

typedef struct CatElmList *addressC;

struct CatElmList{
    infotypeC info;
    addressC next;
    addressC prev;
};

struct CatList{
    addressC first;
    addressC last;
};

void createListCatalogue(CatList &L);
addressC allocateC(infotypeC x);
addressC deallocate(addressC &P);
addressC CatfindElm(CatList L, infotypeC x);
void insertFirstCat(CatList &L, addressC P);
void deleteCat(CatList &L, addressP &P);
void deleteFirstCat(CatList &L, addressC &P);
void deleteLastCat(CatList &L, addressC &P);
void deleteAfterCat(CatList &L, addressC &P);



#endif // GAMECATALOGUE_H_INCLUDED
