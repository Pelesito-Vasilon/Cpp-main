#include <iostream>
using namespace std;

bool meSirve (int numMax, int numMin, int num){
	return (numMin < num && num < numMax)
}

void imprimeBool (bool b){
	if (b == 0){
		cout << "False";
	}	else{
		cout << "True";
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

	/*// Jugamos con palabra
	palabra = "perro";
	cout << palabra << endl;
	palabra = "casa";
	cout << palabra << endl;
	*/
	/*palabra1= "perro";
	cout<< palabra1<<endl;
	palabra2= "verde";
	cout<<palabra2<<endl;
	cout<< palabra1+" "+palabra2<<endl;
	cout<< palabra1<<" "<< palabra2 <<endl;
	palabra1.append(palabra2);
	cout<<palabra1<<endl;

    suma = 0;
    for (int i = 1 ; i <= 100 ; i++){
        suma += i;
    }
    cout << "La suma de los 100 primeros números es: " << suma << endl;

suma = 0;
for (int i = 1 ; i <= 500 ; i++){
	if (i%2 == 0){
		suma +i;
	}
}
cout << "La suma de los 100 primeros numeros es " << suma << endl;

int arr[] = [10,20,30,40];
for (int i : arr){
	cout << i << endl
}
*/


	/*//Jugamos con número
	cout << numero1 << endl;
	cout << numero2 << endl << numero3 << endl;
	numero2 = 6;
	cout << numero2 << endl;
	numero3 = 5.4;
	cout << numero3 << endl;

	decimal = 5.4;
	cout << decimal << endl;
	decimal = 5;
	cout << decimal << endl;*/

	/*//Jugamos con letra
	letra = 'A';
	cout << letra << endl;
	//letra = "A";
	//letra = A;
	cout << letra << endl;
	numero1 = letra;
	cout << numero1 << endl;
	numero1 = 90;
	letra = numero1;
	cout << letra << endl;
	char letraExtra = 65;
	cout << letraExtra << endl;
	//letraExtra = 355;
	//cout << letraExtra << endl;
	*/

	/*//Jugamos con booleano
	booleano = true;
	cout << booleano << endl;
	booleano = false;
	cout << booleano << endl;
	booleano = 1;
	cout << booleano << endl;
	numero1 = booleano;
	cout << numero1 << endl;
	booleano = 8;
	cout << booleano << endl;
	booleano = -2;
	cout << booleano << endl;
	*/

	//Jugar con operadores:
	/*numero1 = 4 + 5;
	cout << numero1 << endl;
	numero1 = 4 - 5;
	cout << numero1 << endl;
	numero1 = 4 * 5;
	cout << numero1 << endl;
	numero1 = 4 / 5;
	cout << numero1 << endl;
	decimal = 4 / 5;
	cout << decimal << endl;
	numero1 = 4 % 5;
	cout << numero1 << endl;
	//numero1 = 4 ** 5;
	//cout << numero1 << endl;
	numero1 += numero1;
	cout << numero1 << endl;
	numero1 -= numero1;
	cout << numero1 << endl;
	numero1 = 2;
	numero1 *= numero1;
	cout << numero1 << endl;
	numero1 /= numero1;
	cout << numero1 << endl;
	//Incremento / Decremento
	numero1++;
	cout << numero1 << endl;
	numero1--;
	cout << numero1 << endl;
	++numero1;
	cout << numero1 << endl;
	--numero1;
	cout << numero1 << endl;
*/

numM = 30;
numm = 10;
cout << "Introduce un número: ";
cin >> num;
ok = mSirve (numM,numm,num);
imprimeBool(ok);

	return 0;
}
