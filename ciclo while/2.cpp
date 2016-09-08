#include <iostream>

using namespace std;

int main(){

    int acum =0;
    int cont =1;

        while(cont<100){
            acum=acum+cont;
            cont=cont+1;
            cout<<acum<<" + "<<cont<<" = "<<acum+cont<<endl;
        }
    return 0;

}
