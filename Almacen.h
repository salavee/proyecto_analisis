#include <iostream>
#include <string>
#include <vector>
using namespace std;

class producto;
class Almacen{
	private:
		vector<producto*> ListaProductos;
	//	vector<Factura*> ListaFacturas;
	public:
		Almacen();
		producto* getProducto();
		void visualizarProductos();
		//void visualizarFacturas();
//		void visualizarProveedor(producto*);
		void agregar_Producto(producto*);
//<<<<<<< HEAD
//<<<<<<< HEAD
		//void agregar_Factura(Factura*);
		void modificar_precio(string);
		
//=======
//=======
		//void agregar_Factura(Factura*);
		void modificar_precio(string);
		
//>>>>>>> 424501090c461a636a09b8e7bc937b20502e7721
//		void agregar_Factura(Factura*);
		void buscar_Producto(string);
		void eliminar_Producto(string);
<<<<<<< HEAD
//<<<<<<< HEAD
=======
		
		void busqueda_telefono(string);
<<<<<<< HEAD
>>>>>>> 682a0b3297e186ee2c5bb7cd8dcb62578c0946e9
//>>>>>>> a113f3870ae809d1b2284e8bf295e890231060b5
///=======
//>>>>>>> 424501090c461a636a09b8e7bc937b20502e7721
};
	
	Almacen::Almacen(){		
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
//<<<<<<< HEAD
		
//	void Almacen::visualizarFacturas(){
//=======
	
	Almacen::Almacen(){		
	}
	
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
<<<<<<< HEAD
//<<<<<<< HEAD
	}
			else
					{
						swap(ListaProductos[i],ListaProducto[i+1]);
					}*/
					
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
//=======
//	}*/
//=======
}//*/
//>>>>>>> 424501090c461a636a09b8e7bc937b20502e7721
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
///<<<<<<< HEAD
//>>>>>>> a113f3870ae809d1b2284e8bf295e890231060b5
//=======
//>>>>>>> 424501090c461a636a09b8e7bc937b20502e7721
	void Almacen::agregar_Producto(producto *product){
		ListaProductos.push_back(product);
	}

/*	void Almacen::agregar_Factura(Factura *factu){
		ListaFacturas.push_back(factu);
	}*/
	
	void Almacen::modificar_precio(string nombre){
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
	
