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
	
	Factura factura1(1551515,105,"Maximo Frutera","Av.San Jose.051","18/02/2021","(051)-982369541",152.05);
	Factura factura2(6198892,152,"Benito Caram","Av.Mayarco-095","21/02/2021","(051)-986486321",2579.84);
	Factura factura3(6198892,152,"Morales Cerezas","Asociacion Av.Numeral.502","14/02/2021","(051)-984362589",56.30);
	A1.agregar_Factura(&factura1);
	A1.agregar_Factura(&factura2);
	A1.agregar_Factura(&factura3);
	//A1.visualizarFacturas();
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
