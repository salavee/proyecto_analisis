#ifndef ALMACEN_H
#define ALMACEN_H
#include <iostream>
#include <string>
#include <vector>
#include "producto.h"
#include "factu.h"
using namespace std;
class Almacen{
	private:
		vector<producto*> ListaProductos;
	//	vector<Factura*> ListaFacturas;
	public:
		Almacen();
		//producto* getProducto();
		void visualizarProductos();
		void visualizarFacturas();
//		void agregar_Factura(Factura*);
		//void visualizarFacturas();
//		void visualizarProveedor(producto*);
		void agregar_Producto(producto*);
		//void agregar_Factura(Factura*);
		//void modificar_precio(string);
		//void agregar_Factura(Factura*);
		//void modificar_precio(string);
		//void agregar_Factura(Factura*);
		void buscar_Producto(string);
		void eliminar_Producto(string);
	//	void busqueda_telefono(string);
};

void Almacen::visualizarFacturas(){
		
		if(ListaFacturas.size()>0){		
			for(int i=0;i<ListaFacturas.size();i++){
				cout<<"Factura ["<<i+1<<"]"<<endl<<endl;
				ListaFacturas[i] -> MostrarFactura();
				cout<<endl<<endl;
			}		
		}
		else{
			cout<<"Aun no hay Facturas registradas"<<endl;
		}
	}
	
	void Almacen::agregar_Factura(Factura *factu){
		ListaFacturas.push_back(factu);
	}
/*	void Almacen::agregar_Factura(Factura *factu){
		ListaFacturas.push_back(factu);
	}*/
	
	/*void Almacen::modificar_precio(string nombre){
		vector<producto*>::iterator p = ListaProductos.begin();
		
		int i=0,band=0;
		float precio_new;
		
		while( p != ListaProductos.end() ){			
			if( ListaProductos[i]-> getnombre() == nombre){
				
				cout<<endl<<ListaProductos[i] -> getnombre()<<endl;
				cout<<"Ingrese nuevo precio: ";cin>>precio_new;
				
				ListaProductos[i] -> setprecio_venta(precio_new);
				
				cout<<"\nModificacion guardada"<<endl;
				band = 1;
				break;
			} 
			i++;
			p++;
		}
		if(band == 0){
			cout<<"\nNo existe Producto"<<endl;
		}
	}*/
	/*	void Almacen::visualizarFacturas(){
>>>>>>> 424501090c461a636a09b8e7bc937b20502e7721
		
		if(ListaFacturas.size()>0){		
			for(int i=0;i<ListaFacturas.size();i++){
				ListaFacturas[i] -> MostrarFactura();
			}		
		}
		else{
			cout<<"Aun no hay Facturas registradas"<<endl;
		}

	}
			else
					{
						swap(ListaProductos[i],ListaProducto[i+1]);
					}
					
					cout<<endl<<"proveedor exitente";
					ListaProveedor[i]->mostrar_proveedores();
				}
				else 
				{
					c=0;
				}
				 	
			}	
			
			if(c==0)
			{
					cout<<endl<<"proveedor no existe"<<endl;
					k.ingresar_proveedores();//registro de proveedores
					ListaProveedor.push_back(&k);
					cout<<endl<<endl<<"cantidad de proveedores: "<<ListaProveedor.size();
				//	ListaProveedor[ListaProveedor.size()-1]->mostrar_proveedores();
				//k.mostrar_proveedores();
				cout<<endl<<endl;
				
				for(int i=0;i<ListaProveedor.size();i++)
				{
				ListaProveedor[i] -> mostrar_proveedores();
				}		
				
			}
		}
	}

}
*/
#endif
