#include <iostream>

using namespace std;

int main(){
	
int opc;
	
	
cout<<"ERRORES DE FACEBOOK\n";
cout<<"1-Nombre de usuario invalido\n";
cout<<"2-Contrase invalida\n";
cout<<"3-Direccion de correo invalido\n";
cout<<"4-No se pudo cargar la pagina\n";
cout<<"5-No existe\n";

cout<<"Ingresar numero de error: ";
cin>>opc;
	
switch(opc)
{
	case 1: 
		cout<<"ingrese un usuario valido";
		break;
	case 2:
		cout<<"su contraseña es incorrecta";
		break;
	case 3:
		cout<<"su correo es incorrecto";
		break;
	case 4:
		cout<<"algo ha pasado, cargue de nuevo la pagina";
		break;
	case 5:
		cout<<"lo que esta buscando no existe, regrese porfavor";
		break;
	
	default:
		cout<<"Ingrese una opcion valida: ";
		
		
	}
	
	return 0;
}
