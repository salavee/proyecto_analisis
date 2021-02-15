#include <iostream>
#include <string>
#include "factu.h"
#include <iostream>
#include <string>
//#include "factu.h"
#include "producto.h"
#include "Almacen.h"
#include <conio.h>
#include <stdlib.h>
#include <fstream>
using namespace std;

void archi();

int main()
{
//	Factura f1;
// Ingresar Producto
/*	producto p1;
	Almacen A1;
		
	p1.ingre_datos();
	A1.agregar_Producto(&p1);
	cout<<endl;
	A1.visualizarProductos();*/
	
	producto Produc[3];
	//Factura fact1;
	Almacen A1;
	int i = 0;
	
	do{
		Produc[i].ingre_datos();
		A1.agregar_Producto(&Produc[i]);
		system("cls");
		i++;	
	}while(i<3);
	
	//fact1.IngresarFactura();
	//A1.agregar_Factura(&fact1);
	
	cout<<endl;
	A1.visualizarProductos();
	getch();
	system("CLS");
	string nombre;
	cin>>nombre;
	A1.eliminar_Producto(nombre);
	A1.visualizarProductos(); 	
//	A1.visualizarFacturas();
	
	//return 0;
}	

/*void archi(){
		
	ofstream archiProd;
	archiProd.open("Archivo_Productos.txt",ios::out);
	
	if(archiProd.fail()){
		cout<<"No se pudo abrir archivo";
		exit(1);
	}
	
	archiProd<<"nanogetline"<<endl;
	archiProd.close();

}*/
