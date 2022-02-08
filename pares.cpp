#include <iostream>

using namespace std;

bool messirve(int nummin, int nummax, int num){
        return (nummin <= num && num <= nummax);
    }


void printbool (bool b){
    if(b == 1)cout << "True";
}

int main(){

int nummax, nummin, num;

nummax=30;
nummin=10;
cout << "Introduce un numero";
cin >> num;
ok = messirve(nummax,nummin,num);
printbool(ok);
}
