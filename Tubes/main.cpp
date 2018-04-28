#include <iostream>
#include "gamename.h"
#include "gameprice.h"
#include "GameCatalogue.h"

using namespace std;

void menu(bool stat, NameList &N,PriceList &P, CatList &C){//Muhammad Naimullah - 1301160449, Gede B. Wiswa Pranata - 1301160413

int pil = 0;
    string x,y;
    infotypeC z;
    addressC W;
    address Q;
    addressP T;
    cout << "Menu :"<<endl;
    cout << "1.  Add a new Game Name"<<endl;//udah
    cout << "2.  Add a new Game Price"<<endl;//udah
    cout << "3.  Create Relation"<<endl;//udah
    cout << "4.  Delete Relation"<<endl;
    cout << "5.  Delete a Game Name"<<endl;//udah
    cout << "6.  Delete a Game Price"<<endl;//udah
    cout << "7.  Show Game Name Only"<<endl;
    cout << "8.  Show Game Price Only"<<endl;
    cout << "Pilih menu : ";
    cin >> pil;
    cin.ignore();
    switch(pil){
    case 1:
        cout<<"Enter Game Name:";
        getline(cin,x);
        AddGame(N,x);
        cout<<"Game Name added"<<endl;
        break;
    case 2:
        cout<<"Input Price:";
        getline(cin,y);
        addPrice(P,y);
        cout<<"Price Added"<<endl;
        break;
    case 3:
        cout<<"Create Relation";
        cout<<"Nama:";getline(cin,x);
        cout<<"Price:";getline(cin,y);
        Q = findElm(N,x);
        T = findElmP(P,y);
        info(W).name = Q;
        info(W).price = T;
        if (Q != NULL && T != NULL){
            insertFirstCat(C,W);
        }else{
            cout<<"No Element To Have Relation"<<endl;
        }
        cout<<"Relation Created"<<endl;
        break;
    case 4:
        cout<<"Delete Relation";

        break;
    case 5:
        break;
    case 7:
        cout<<"Game List:";
        showName(N);
        break;
    case 8:
        cout<<"Game Price:";
        showPrice(P);
        break;



    }
}
int main()
{
    NameList N;
    PriceList P;
    CatList C;
    createListName(N);
    createListPrice(P);
    createListCatalogue(C);
    bool stat = true;
    while(stat){
        menu(stat,N,P,C);
    }
    return 0;

}
