#include <iostream>
#include <string>
#include "factu.h"
//<<<<<<< HEAD
#include "producto.h"
//=======
#include <iostream>
#include <string>
//#include "factu.h"
//#include "producto.h"
//>>>>>>> a113f3870ae809d1b2284e8bf295e890231060b5
#include "Almacen.h"
#include <conio.h>
#include <stdlib.h>
#include <fstream>
#include "almacenero.h"
using namespace std;

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
	
//<<<<<<< HEAD
//	producto Produc[2];
//=======
//	producto Produc[3];
	//Factura fact1;
//>>>>>>> a113f3870ae809d1b2284e8bf295e890231060b5
	Almacen A1;
	int i = 0;
	string nombre;
	producto Produc[3];
	do{
		Produc[i].ingre_datos();
		A1.agregar_Producto(&Produc[i]);
		system("cls");
		i++;	
	}while(i<2);
	almacenero a;
	A1.visualizarProductos();
	a.actualizar(&A1);
	A1.visualizarProductos();
	getch();
	
	//fact1.IngresarFactura();
	//A1.agregar_Factura(&fact1);
	
//<<<<<<< HEAD
//	A1.visualizarProductos(); 
/*	cout<<"\nIngrese el nombre del elemento a modificar: ";cin>>nombre;
	A1.modificar_precio(nombre);
	cout<<endl;
	A1.visualizarProductos(); 	
	
/*	ofstream archivo_Productos;
	archivo_Productos.open("d://CURSOS 4TO CICLO//Analisis de Sistemas//prueba 3//Archivo_Productos.txt",ios::out);
=======
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
>>>>>>> a113f3870ae809d1b2284e8bf295e890231060b5
	
	if(archivo_Productos.fail()){
		cout<<"No se pudo abrir archivo";
		exit(1);
	}
	
	archivo_Productos<<"Creando un archivo"<<endl;
	
	//archivo_Productos.close();*/
	
	return 0;
}	
