#include "PERSONA.cpp"
#include <iostream>
using namespace std;

class Estudiante : Persona {
	
	private : string codigo;
	
	public : 
	Estudiante(){
	}
	
	Estudiante(string nom,string ape,string dir, string tel, string co) : Persona(nom,ape){
		codigo = co;
	}
	//set
	void setCodigo(string co){codigo = co;}
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dir){direccion = dir;}
	void setTelefono(string tel){telefono = tel;}

	//get
	string getCodigo(){return codigo;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	string getTelefono(){return telefono;}			
	//
	void mostrar (){
		cout<<"_____________Datos Del Estudiante__________________"<<endl;
		cout<<"Codigo: "<<codigo<<",  Nombre: "<<nombres<<",  Apellido: "<<apellidos<<",  Direccion: "<<direccion",  Telefono: "<<telefono<<<<endl;
		
	}
};
