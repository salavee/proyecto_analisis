#include<iostream>
#include<stdlib.h>
#include<string>
#include "proveedor.h"
#include "almacen.h"

Proveedor::Proveedor(/*string _nombre_completo, string _telefono, string _nombre_de_la_empresa, string _categoria*/)
{
//	nombre_completo = _nombre_completo;
//	telefono = _telefono;
//	nombre_de_la_empresa = _nombre_de_la_empresa;
//	categoria = _categoria;
}
proveedor::ingresar_proveedores()
{
	cout<<"ingresar el nombre completo: ";
	cin>>nombre_completo;
	
	cout<<endl<<"ingresar el telefono: ";
	cin>>telefono;
	
	cout<<"ingresar el nombre de la empresa del proveedor: ";
	cin>>nombre_de_la_empresa;
	
	cout<<"ingresar la categoria del proveedor: ";
	cin>>categoria;
}
proveedor::mostrar_proveedores()
{
	cout<<endl<<"nombre completo: "<<nombre_completo;
	cout<<endl<<"ingresar el telefono: "<<telefono;
	cout<<endl<<"nombre de la empresa del proveedor: "<<nombre_de_la_empresa;
	cout<<endl<<"ingresar la categoria del proveedor: "<<categoria;
}


	











