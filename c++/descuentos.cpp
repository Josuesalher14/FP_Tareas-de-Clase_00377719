#include <iostream> //CALCULADORA DE DESCUENTOS DE SALARIOS
#include <bits/stdc++.h>

using namespace std;

int main(){
	float res, salario=0, isss=0.03, afp=0.0725; //SE DECLARAN LOS VALORES DEL ISSS Y DE AFP
	
	cout<<"ingrese el salario: $"; //SE SOLICITA EL SALARIO A CALCULAR
	cin>>salario;
	
	cout<<fixed<<setprecision(2);
	cout<<"ISSS: $"<<(salario*isss)<<endl;
	
	cout<<"AFP: $"<<(salario*afp)<<endl;
	
		
		if(salario<=472.00){
		
		cout<<"ISR: $0"<<endl;
		}
		
		else if(salario>=472){
		
		cout<<"ISR: $"<<salario*afp + salario*isss - ((salario-472)*0.1)+17.67<<endl;
		}
		
		else{cout<<"ISR: $"<<salario*afp + salario*isss - ((salario-895.24)*0.2)+60.00;
		}
		
	cout<<"horas extras: $"<<((salario/30)/8)*2 *10;
		
	
	return 0;
}
