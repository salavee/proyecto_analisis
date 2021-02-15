#include <iostream>
#include <string>
#include <vector>
using namespace std;

class producto;

class Almacen{
	private:
		producto *Producto;
		vector<producto*> ListaProductos;
		vector<Factura*> ListaFacturas;
	public:
		Almacen();
		producto* getProducto();
		void visualizarProductos();
		void visualizarFacturas();
//		void visualizarProveedor(producto*);
		void agregar_Producto(producto*);
		void agregar_Factura(Factura*);
		void modificar_precio(string);
		
};

	producto* Almacen::getProducto(){
		return Producto;
	}
	
	void Almacen::visualizarProductos(){
		
		if(ListaProductos.size()>0){		
			for(int i=0;i<ListaProductos.size();i++){
			ListaProductos[i] -> mostrar_datos();
			}		
		}
		else{
			cout<<"Aun no hay Productos registrados"<<endl;
		}

	}
	
	Almacen::Almacen(){		
	}
	
	void Almacen::visualizarFacturas(){
		
		if(ListaFacturas.size()>0){		
			for(int i=0;i<ListaFacturas.size();i++){
				ListaFacturas[i] -> MostrarFactura();
			}		
		}
		else{
			cout<<"Aun no hay Facturas registradas"<<endl;
		}
	}
	
	void Almacen::agregar_Producto(producto *product){
		ListaProductos.push_back(product);
	}

	void Almacen::agregar_Factura(Factura *factu){
		ListaFacturas.push_back(factu);
	}
	
	void Almacen::modificar_precio(string nombre){
		vector<producto*>::iterator p = ListaProductos.begin();
		
		int i=0;
		float precio_new;
		while( p != ListaProductos.end() ){
			if( ListaProductos[i]-> getnombre() == nombre){
				cout<<endl<<ListaProductos[i] -> getnombre()<<endl;
				cout<<"Ingrese nuevo precio: ";cin>>precio_new;
				
				ListaProductos[i] -> setprecio_venta(precio_new);
				
				cout<<"\nModificacion guardada"<<endl;
				break;
			} 
			i++;
		}
	}
	
