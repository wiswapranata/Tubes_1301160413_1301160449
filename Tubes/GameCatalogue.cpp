#include "GameCatalogue.h"

void createListCatalogue(CatList &L){//Gede B. Wiswa Pranata - 1301160413
    first(L) = NULL;
    last(L) = NULL;
}
addressC allocateC(infotypeC x){//Gede B. Wiswa Pranata - 1301160413
    addressC P = new CatElmList;
    info(P).name = x.name;
    info(P).price = x.price;
    next(P) = NULL;
    prev(P) = NULL;
    return P;
}
addressC deallocate(addressC &P){//Gede B. Wiswa Pranata - 1301160413
    delete P;
}
addressC CatfindElm(CatList L, infotypeC x){//Muhammad Naimullah - 1301160449
    addressC P = first(L);
    if (P == NULL){
        return NULL;
    }else{
        bool found = false;
        while (info(P).name != x.name &&info(P).price != x.price && found == false){
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
void insertFirstCat(CatList &L, addressC P){//Muhammad Naimullah - 1301160449
    if ((first(L) == NULL) && (last(L) == NULL)){
        first(L) = P;
        last(L) = P;
    }else{
        next(P) = first(L);
        prev(first(L)) = P;
        first(L) = P;
    }
}
void deleteFirstCat(CatList &L, addressC &P){//Muhammad Naimullah - 1301160449
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

void deleteLastCat(CatList &L, addressC &P){//Muhammad Naimullah - 1301160449
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
void deleteAfterCat(CatList &L, addressC &P, addressC Prec){//Muhammad Naimullah - 1301160449
    if (Prec == NULL || Prec == last(L)){
        cout<<"Empty Element"<<endl;
    }else if(next(Prec) == last(L)){
        deleteLastCat(L,P);
    }else{
        P = next(Prec);
        next(Prec) = next(P);
        prev(next(P)) = Prec;
        prev(P) = NULL;
        next(P) = NULL;
    }
}
void deleteCat(CatList &L, addressC &P){//Muhammad Naimullah - 1301160449
    infotypeC x;
    x.name = info(P).name;
    x.price = info(P).price;
    P = CatfindElm(L,x);
    if(P != NULL){
        info(P).name = NULL;
        info(P).price = NULL;
        if (P == first(L)){
            deleteFirstCat(L,P);
        }else if (P == last(L)){
            deleteLastCat(L,P);
        }else{
            deleteAfterCat(L,P,prev(P));
        }
    }
}


