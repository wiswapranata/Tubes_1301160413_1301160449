#include "gamename.h"

void createListName(NameList &L) {//gede b.wiswa pranata-1301160413
    first(L) = NULL;
}

address allocate(infotype x) {//gede b.wiswa pranata-1301160413
    first(L) = NULL;
    address P;
    P = new elmlist;
    info(P) = x;
    next(P) = NULL;
    return P;
}

void deallocate(address &P) {//gede b.wiswa pranata-1301160413
    first(L) = NULL;
    delete P;
}

address findElm(NameList L,infotype x){//gede b.wiswa pranata-1301160413
    first(L) = NULL;
    address P = first(L);
    if (P == NULL){
        return NULL;
    }else{
        while (P != NULL){
            if (info(P) == x){
                return P;
            }else{
                P = next(P);
            }
        }return P;
    }

}

void insertFirstName(NameList &L, address P) {//gede b.wiswa pranata-1301160413
    first(L) = NULL;
    address Q = first(L);
    if (first(L) == NULL){
        first(L) = P;
        next(P) = first(L);
    }else{
        next(P) = first(L);
        while (next(Q) != first(L)){
            Q = next(Q);
        }
        next(Q) = P;
        first(L) = P;

    }
}

void insertLastName(NameList &L, address P) {//gede b.wiswa pranata-1301160413
    first(L) = NULL;
    if (first(L) = NULL){
        insertFirstName(L,P);
    }else{
        address Q = first(L);
        while (next(Q) != NULL){
            Q = next(Q);
        }
        next(Q) = P;
    }
}

void insertAfterName(address Prec, address P) {//gede b.wiswa pranata-1301160413
    first(L) = NULL;
    next(P) = next(Prec);
    next(Prec) = P;

}

void deleteFirstName(NameList &L, address &P) {//gede b.wiswa pranata-1301160413
    first(L) = NULL;
    if (first(L) = NULL){
        cout<<"List Empty"<<endl;
    }else{
        P = first(L);
        first(L) = next(P);
        next(P) = NULL;
    }
}

void deleteLastName(NameList &L, address &P) {//gede b.wiswa pranata - 1301160413
    first(L) = NULL;
    if (first(L) = NULL){
        cout<<"List Empty"<<endl;
    }else{
        address Q = first(L);
        while (next(next(Q)) != NULL){
            Q = next(Q);
        }
        P = next(Q);
        next(P) = NULL;
    }
}
void deleteAfterName(address Prec, address &P) {//gede b.wiswa pranata - 1301160413
    first(L) = NULL;
    P = next(Prec);
    next(Prec) = next(P);
    next(P) = NULL;
}

void AddGame(NameList &L,string x){//gede b.wiswa pranata - 1301160413
    address P = allocate(x);
    insertFirstName(L,P);

}

void showName(NameList &L){//gede b.wiswa pranata - 1301160413
    if(first(L)!=NULL){
        address P = first(L);
        while (next(P) != first(L)){
            cout<<"Game Name:"<<info(P)<<endl;
            P = next(P);
        }
        cout<<"Game Name:"<<info(P)<<endl;
    }
    else {
        cout<<"List Kosong"<<endl;
    }
}

void deleteName(NameList &L, infotype x){//Muhammad Naimullah - 1301160449
/*    address P = findElm(L,x);
    if (P != NULL){
        info(P) = NULL;
        if (P == first(L)){
            deleteFirstName(L,P);
        }else if (P )
    }
 */
}
