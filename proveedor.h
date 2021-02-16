#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;

class proveedor{
	private:
		char nombre_completo[40];
		char telefono[12];
		char nombre_de_la_empresa[30];
		char categoria[15];
	public:
		proveedor();
		ingresar_proveedores();
		mostrar_proveedores();
}; 


