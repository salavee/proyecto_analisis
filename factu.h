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
		Factura(int,int,string,string,string,string,float);
		
		int getRUC()	{  return RUC;  }		
		int getNumFactura()	{  return NumFactura;  }	
		string getNombreE()	{  return NombreE;  }	
		string getDireccionE()	{  return DireccionE;  }	
		string getfecha()	{  return fecha;  }	
		string gettelefono(){  return telefono;  }	
		float getsaldo()	{  return saldo;  }
		
		void MostrarFactura();	
};

Factura::Factura(int _ruc,int _NumFactura,string _NombreE,string _DireccionE,string _fecha,string _telefono,float _saldo){
	RUC = _ruc;
	NumFactura = _NumFactura;
	NombreE = _NombreE;
	DireccionE = _DireccionE;
	fecha = _fecha;
	telefono = _telefono;
	saldo = _saldo;
}

void Factura::MostrarFactura(){
	cout<<"RUC: "<<RUC;
	cout<<"\nNumero Factura: "<<NumFactura;
	cout<<"\nNombre de Empresa: "<<NombreE;
	cout<<"\nDirrecion de Empresa: "<<DireccionE;
	cout<<"\nFecha: "<<fecha;
	cout<<"\nTelefono: "<<telefono;
	cout<<"\nSaldo: "<<saldo;
}

