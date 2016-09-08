#include <iostream>

using namespace std;

int main (){
    int a ;
    a=0;
    while(a!=6){
    cout<<"ingrese un vocal para saber el codigo ascii"<<endl;
    cout<<"1. a"<<endl;
    cout<<"2. e"<<endl;
    cout<<"3. i"<<endl;
    cout<<"4. o"<<endl;
    cout<<"5. u"<<endl;
    cin>>a;
        switch(a){
        case 1:
            cout<<"el codigo ascii de a es alt 96"<<endl;
            break;
        case 2:
            cout<<"el codigo ascii de e es alt 101"<<endl;
            break;
        case 3:
            cout<<"el codigo ascii de i es alt 105"<<endl;
            break;
        case 4:
            cout<<"el codigo ascii de o es alt 111"<<endl;
            break;
        case 5:
            cout<<"el codigo ascii de u es alt 117"<<endl;
            break;
        default:
            cout<<"no corresponde a lo pedido"<<endl;
        }
        }
    return 0;

}
