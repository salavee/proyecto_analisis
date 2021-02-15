#include <iostream>
#include <string>
#include <vector>
using namespace std;

class producto;

class Almacen{
	private:
		producto *Producto;
		vector<producto*> ListaProductos;
//		vector<Factura*> ListaFacturas;
	public:
		Almacen();
		producto* getProducto();
		void visualizarProductos();
//		void visualizarFacturas();
//		void visualizarProveedor(producto*);
		void agregar_Producto(producto*);
//		void agregar_Factura(Factura*);
		void buscar_Producto(producto*);
		void eliminar_Producto(string);
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
/*	void Almacen::visualizarFacturas(){
		
		if(ListaFacturas.size()>0){		
			for(int i=0;i<ListaFacturas.size();i++){
				ListaFacturas[i] -> MostrarFactura();
			}		
		}
		else{
			cout<<"Aun no hay Facturas registradas"<<endl;
		}
	}*/
	void Almacen::eliminar_Producto(string _nombre)
	{
		int c=0;
		if(ListaProductos.size()<0)
		{
			cout<<"No hay PRODUCTO";
		}
		else 
		{
			for(int i=0;i<ListaProductos.size();i++)
			{
				if(ListaProductos[i]->getnombre()==_nombre)
				{
					if(i==ListaProductos.size()-1)
					{
						ListaProductos.pop_back();
					}
					else
					{
						swap(ListaProductos[i],ListaProductos[i+1]);
					}
				}
				
			}	
		}
	}
	void Almacen::agregar_Producto(producto *product){
		ListaProductos.push_back(product);
	}

/*	void Almacen::agregar_Factura(producto *factu){
		ListaFacturas.push_back(factu);
	}*/	
	
//	void Almacen::buscar_Producto(producto *nombre){
	/*	vector<producto*>::iterator p = ListaProductos.begin();
		
		while( p != ListaProductos.end() ){
			if( p -> getProducto() == nombre){
				
			}
		}*/
/*		for(int i=0;i<ListaProductos.size();i++){
			if(ListaProductos[i] -> getProducto() == nombre){
				cout<<ListaProductos[i] -> getProducto() <<endl;
				cout<<"Ingrese precio: ";cin>>precio;
				ListaProductos[i] -> setcost_unt() = precio;
				cout<<"Precio Registrado";
			}
		}
		return -1;
	}*/ 
	
