#include <iostream>
using namespace std;


bool meSirve (int numMax, int numMin, int num){
	return (numMin < num && num < numMax);
}

void imprimeBool (bool b){
	if (b == 0){
		cout << "False";
	}	else{
		cout << "True";
	}
}

int main(){

	int numero1 = 1;
	int numero2 = 2, numero3 = 3;
	const int NUMERO = 0;
	double decimal;
	char letra;
	bool booleano;
	string palabra1, palabra2, palabra;
    int suma;
	bool ok;
	int numMax, numMin, num

    numMa = 30;
    numMi = 10;
    cout << "Introduce un número: ";
    cin >> num;
    ok = meSirve (numMa,numMi,num);
    imprimeBool(ok);

	ret
