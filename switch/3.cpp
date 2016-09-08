#include <iostream>

using namespace std;

int main (){
    int a ;
    a=0;
    while(a!=11){
    cout<<"ingrese un numero para saber el codigo ascii"<<endl;
    cout<<"0."<<endl;
    cout<<"1. "<<endl;
    cout<<"2. "<<endl;
    cout<<"3. "<<endl;
    cout<<"4."<<endl;
    cout<<"5."<<endl;
    cout<<"6. "<<endl;
    cout<<"7. "<<endl;
    cout<<"8. "<<endl;
    cout<<"9."<<endl;
    cout<<"10."<<endl;
    cin>>a;
        switch(a){
        case 0:
            cout<<"el codigo ascii de 0 es alt 48"<<endl;

        case 1:
            cout<<"el codigo ascii de 1 es alt 49"<<endl;
            break;
        case 2:
            cout<<"el codigo ascii de 2 es alt 50"<<endl;
            break;
        case 3:
            cout<<"el codigo ascii de 3 es alt 51"<<endl;
            break;
        case 4:
            cout<<"el codigo ascii de 4 es alt 52"<<endl;
            break;
        case 5:
            cout<<"el codigo ascii de 5 es alt 53"<<endl;
            break;
        case 6:
            cout<<"el codigo ascii de 6 es alt 54"<<endl;
            break;
        case 7:
            cout<<"el codigo ascii de 7 es alt 55"<<endl;
            break;
        case 8:
            cout<<"el codigo ascii de 8 es alt 56"<<endl;
            break;
        case 9:
            cout<<"el codigo ascii de 9 es alt 57"<<endl;
            break;

        default:
            cout<<"no corresponde a lo pedido"<<endl;
        }
        }
    return 0;

}

