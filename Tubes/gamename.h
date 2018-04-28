#ifndef GAMENAME_H_INCLUDED
#define GAMENAME_H_INCLUDED
#include <iostream>

#define first(L) L.first
#define next(P) P->next
#define info(P) P->info

using namespace std;

typedef string infotype;
typedef struct elmlist *address;

struct elmlist{
    infotype info;
    address next;
};

struct NameList{
    address first;
};

void createListName(NameList &L);
address allocate(infotype x);
void deallocate(address &P);
address findElm(NameList L, infotype x);
void insertFirstName(NameList &L, address P);
void insertLastName(NameList &L, address P);
void deleteFirstName(NameList &L, address &P);
void deleteLastName(NameList &L, address &P);
void insertAfterName(address Prec, address P);
void deleteAfterName(address Prec, address &P);
void AddGame(NameList &L, infotype x);
void showName(NameList &L);
void deleteName(NameList &L, infotype x);
void TotalGame(NameList &L);





#endif // GAMENAME_H_INCLUDED
