#include <iostream>
#include <string>
#include <vector>
using namespace std;

class producto;
class Almacen{
	private:
		producto *Producto;
		vector<producto*> ListaProductos;
	//	vector<Factura*> ListaFacturas;
	public:
		Almacen();
		producto* getProducto();
		void visualizarProductos();
		void visualizarFacturas();
//		void visualizarProveedor(producto*);
		void agregar_Producto(producto*);
	//	void agregar_Factura(Factura*);
		void modificar_precio(string);
		
//		void agregar_Factura(Factura*);
		void buscar_Producto(string);
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

/*	void Almacen::agregar_Factura(Factura *factu){
		ListaFacturas.push_back(factu);
	}*/
	
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
	void Almacen::buscar_Producto(string nombre)
	{
		int i=0,c=0;
		producto *a;
		while (i!=ListaProductos.size()-1)
		{
			if(ListaProductos[i]->getnombre()==nombre)
			{
				cout<<"\nProducto encontrado ";
				c=1;
				break;
			}
			else
			{
				i++;
			}
		}
		if(c==1)
		{
			int cantidad;
			cout<<"ingrese el stock:";cin>>cantidad;
			ListaProductos[i]->setstock(cantidad);
		}
		else
		{
			cout<<"\nSe va agregar un nuevo producto";
			a->ingre_datos();
			ListaProductos.push_back(a);
		}
		
	}
	
