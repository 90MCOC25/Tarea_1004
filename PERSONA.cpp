#include <iostream>
using namespace std;
class Persona{
	protected : string nombres, apellidos, direccion, telefono;
	protected :
			Persona(){
			}
			Persona(string nom,string ape, string dir, string tel){
				nombres = nom;
				apellidos = ape;
				direccion = dir;
				telefono = tel;
				
			}
	void mostrar();
		 
};

