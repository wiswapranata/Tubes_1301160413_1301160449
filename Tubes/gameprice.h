#ifndef GAMEPRICE_H_INCLUDED
#define GAMEPRICE_H_INCLUDED
#include <iostream>

#define first(L) L.first
#define last(L) L.last
#define next(P) P->next
#define prev(P) P->prev
#define info(P) P->info

using namespace std;

typedef string infotype;
typedef struct PriceElmList *addressP;

struct PriceElmList{
    infotype info;
    addressP next;
    addressP prev;
};

struct PriceList{
    addressP first;
    addressP last;
};

void createListPrice(PriceList &L);
addressP allocateP(infotype x);
void deallocateP(addressP &P);
addressP findElmP(PriceList L, infotype x);
void insertFirstPrice(PriceList &L, addressP P);
void insertLastPrice(PriceList &L, addressP P);
void deleteFirstPrice(PriceList &L, addressP &P);
void deleteLastPrice(PriceList &L, addressP &P);
void insertAfterPrice(PriceList &L, addressP Prec, addressP P);
void deleteAfterPrice(PriceList &L, addressP Prec, addressP &P);
void addPrice(PriceList &L, string x);
void showPrice(PriceList L);
void deletePrice(PriceList &L, infotype x);





#endif // GAMEPRICE_H_INCLUDED
