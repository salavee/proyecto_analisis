#include<iostream>
#include<string.h>
using namespace std;

class Factura{
	private:
		int RUC;
		int NumFactura;
		string NombreE;
		string DireccionE;
		string fecha;
		string telefono;
		float saldo;
	
	public:
		Factura();
		
		//Establecer atributos
/*		void setFactura(int _RUC, int _NumFactura, string _NombreE, string _DireccionE, string _fecha, string _telefono, float _saldo){
			RUC = _RUC;
			NumFactura = _NumFactura;
			NombreE = _NombreE;
			DireccionE = _DireccionE;
			fecha = _fecha;
			telefono = _telefono;
			saldo = _saldo;
		}	*/
		
		//Obtener atributos
		int getRUC()	{  return RUC;  }		
		int getNumFactura()	{  return NumFactura;  }	
		string getNombreE()	{  return NombreE;  }	
		string getDireccionE()	{  return DireccionE;  }	
		string getfecha()	{  return fecha;  }	
		string gettelefono(){  return telefono;  }	
		float getsaldo()	{  return saldo;  }
		
		void MostrarFactura();	
		void IngresarFactura();
};

Factura::Factura(){
}

void Factura::IngresarFactura(){
	cout<<"\tIngresar Facturas";
	cout<<"\nRUC: ";cin>>RUC;
	cout<<"Numero Factura: ";cin>>NumFactura;
	cout<<"Nombre de Empresa: ";cin>>NombreE;
	fflush(stdin);
	cout<<"Dirrecion de Empresa: ";cin>>DireccionE;
	fflush(stdin);
	cout<<"Fecha: ";cin>>fecha;
	cout<<"Telefono: ";cin>>telefono;
	cout<<"Saldo: ";cin>>saldo;
}

void Factura::MostrarFactura(){
	cout<<"\n\tRegistro de Facturas"<<endl;
	cout<<"\nRUC: "<<RUC;
	cout<<"\nNumero Factura: "<<NumFactura;
	cout<<"\nNombre de Empresa: "<<NombreE;
	cout<<"\nDirrecion de Empresa: "<<DireccionE;
	cout<<"\nFecha: "<<fecha;
	cout<<"\nTelefono: "<<telefono;
	cout<<"\nSaldo: "<<saldo;
}
