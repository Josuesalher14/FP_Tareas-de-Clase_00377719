#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int num, fact=1;
	
	cout<<"Bienvenido!"<<endl;
	
	system("pause");
	
	cout<<"Por favor, Ingrese un numero "<<endl;
	cin>> num;
	
	for(int i=1;i<=num;i++){
		fact = fact*i;
		}
	
	cout<<"El factorial de este numero es: "<<fact<<endl;
	
	system("pause");
	
	cout<<"Hasta pronto.";
	
	return 0;
}
