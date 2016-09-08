#include <iostream>
#define L 5

using namespace std;
int main (){

    int i=0;
    int arreglo[i];


    for(int i=0;i<L;i++){
        cout<<"Ingrese un numero para la posicion"<<i<<endl;
        cin>>arreglo[i];
    }
        for(int i=0;i<L;i++){
        cout<<"los valores ingresado en la posicion" << i << "es" << arreglo[i] <<endl;
        }



    return 0;
}
