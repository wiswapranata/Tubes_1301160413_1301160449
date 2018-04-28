#include "gameprice.h"

void createListPrice(PriceList &L) {//Muhammad Naimullah - 1301160449
    first(L) = NULL;
    last(L) = NULL;
}

addressP allocateP(infotype x) {//Muhammad Naimullah - 1301160449
    addressP P;
    P = new PriceElmList;
    info(P)=x;
    prev(P)=NULL;
    next(P)=NULL;
    return P;
}

void deallocateP(addressP &P) {//Muhammad Naimullah - 1301160449
    delete P;
}

void insertFirstPrice(PriceList &L, addressP P) {//Muhammad Naimullah - 1301160449
    if ((first(L) == NULL) && (last(L) == NULL)){
        first(L) = P;
        last(L) = P;
    }else{
        next(P) = first(L);
        prev(first(L)) = P;
        first(L) = P;
    }
}

void insertLastPrice(PriceList &L, addressP P) {//Muhammad Naimullah - 1301160449
    if ((first(L) == NULL) && (last(L) == NULL)){
        insertFirstPrice(L,P);
    }else{
        prev(P) = last(L);
        next(prev(P)) = P;
        last(L) = P;
        next(P) = NULL;
    }
}

addressP findElmP(PriceList L, infotype x) {//Muhammad Naimullah - 1301160449
    addressP P;
    P = first(L);
    if(first(L)!=NULL){
        return NULL;
    }else{
        bool found = false;
        while (info(P) != x && found == false){
            if (next(P) == NULL){
                found = true;
            }else{
                P = next(P);
            }
        }if (found){
            return NULL;
        }else{
            return P;
        }
    }

}

void deleteFirstPrice(PriceList &L, addressP &P) {//Muhammad Naimullah - 1301160449
    if ((first(L) == NULL) && (last(L) == NULL)){
        cout<<"Empty List"<<endl;
    }else if (first(L) == last(L)){
        first(L) = NULL;
        last(L) = NULL;
    }else{
        P = first(L);
        first(L) = next(P);
        next(P) = NULL;
        prev(first(L)) = NULL;
    }
}

void deleteLastPrice(PriceList &L, addressP &P) {//Muhammad Naimullah - 1301160449
    if ((first(L) == NULL) && (last(L) == NULL)){
        cout<<"Empty List"<<endl;
    }else if (first(L) == last(L)){
        first(L) = NULL;
        last(L) = NULL;
    }else{
        P = last(L);
        last(L) = prev(P);
        prev(P) = NULL;
        next(last(L)) = NULL;
    }
}

void insertAfterPrice(PriceList &L, addressP Prec, addressP P) {//Muhammad Naimullah - 1301160449
    if (Prec == NULL){
        cout<<"Empty Element"<<endl;
    }else if (Prec == last(L)){
        insertLastPrice(L,P);
    }else{
        next(P) = next(Prec);
        prev(P) = Prec;
        prev(next(Prec)) = P;
        next(Prec) = P;
    }

}
void deleteAfterPrice(PriceList &L, addressP Prec, addressP &P) {//Muhammad Naimullah - 1301160449
    if (Prec == NULL || Prec == last(L)){
        cout<<"Empty Element"<<endl;
    }else if(next(Prec) == last(L)){
        deleteLastPrice(L,P);
    }else{
        P = next(Prec);
        next(Prec) = next(P);
        prev(next(P)) = Prec;
        prev(P) = NULL;
        next(P) = NULL;
    }
}

void addPrice(PriceList &L,string x){//Muhammad Naimullah - 1301160449
    addressP P = allocateP(x);
    insertFirstPrice(L,P);
}
void showPrice(PriceList L){
    if(first(L)!=NULL){
        addressP P = first(L);
        while (P != NULL){
            cout<<info(P)<<endl;
            P = next(P);
        }
    }
    else {
        cout<<"List Kosong"<<endl;
    }
}
