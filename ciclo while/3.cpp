#include <iostream>

using namespace std;

int main(){

    int acum =0;
    int cont =0;

        while(cont<50){
            acum=acum+cont;
            cont=cont+2;
            cout<<acum<<" + "<<cont<<" = "<<acum+cont<<endl;
        }
    return 0;

}
