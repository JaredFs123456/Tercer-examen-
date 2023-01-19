//Fonseca Sánchez Jorge Jared
#include <iostream>
using namespace std;
#include <cstring>
#include <String.h>

struct Sstring{
	char n[50];	
};

struct NODO{
	
	Sstring nombre;
	Sstring nacionalidad;
	Sstring medalla;
	
	NODO *izq;
	NODO *der;	
};

NODO *CREAR(Sstring name, Sstring nat, Sstring med)
{
	NODO *nuevo = new NODO();
	nuevo->nombre = name;
	nuevo->nacionalidad = nat;
	nuevo->medalla = med;
	nuevo->izq = NULL;
	nuevo->der = NULL;
	
	return nuevo;
}


void INSERTAR(NODO *arbol, Sstring name, Sstring nat, Sstring med)
{
	Sstring x = "";
	if(arbol == NULL)
	{
		NODO nuevo_nodo = CREAR(name, nat, med);
		arbol = nuevo_nodo;
	}
	else
	{
		x = arbol.nombre;
		
		if(name < x)
		INSERTAR(arbol->izq, name, nat, med)
		else
		INSERTAR(arbol->der, name, nat, med)				
	}
}

int BUSCAR(NODO *arbol, int a, Sstring name)
{
	Sstring x = "";
	if(medalla == NULL)
	{
		a = a+1;
		return a;
	}
	else
	{
		if(arbol->nombre == name)
		{
			MOSTRAR(arbol);
			
			return 0;
		}else
		{
			x = arbol.nombre;
		
			if(name < x)
			BUSCAR(arbol->izq, a);
			else
			BUSCAR(arbol->der, a);
		}
	}
}


void MENU(NODO *oro, NODO *plata, NODO *bronce)
{
	Sstring medalla = "";
	Sstring nombre = "";
	Sstring nacionalidad = "";
	int opc = 0, enco = 1, b = 0;
	
	do{
	cout << "MENU" << endl << endl;
	cout << "1. Insertar" << endl;
	cout << "2. Buscar" << endl;
	cout << "3. Salir" << endl;
	cin opc;
	
	switch(opc)
	{
		case 1:
			
				{ //INSERTAR
					cout << "Tipo de medalla: ";
					cin >> medalla;
					cout << endl;

					cout << "Nombre: ";
					cin >> nombre;
					cout << endl;
		
					cout << "Nacionalidad: ";
					cout >> nacionalidad;
					cout << endl;
		
					if(medalla == "oro")
					INSERTAR(oro);
					if(medalla == "plata")
					INSERTAR(plata);
					if(medalla == "bronce")
					INSERTAR(bronce);
		
				}
		break;
			
			case 2:
				{ //BUSCAR
					cout << "Buscar" << endl << endl;
					cout << "Inserte nombre de atleta: ";
					cin >> nombre;
					
					if(enco == 1)
					{
						b = BUSCAR(oro, nombre);
					}
					else
					
					if(enco == 2)
					{
						b = BUSCAR(plata, nombre);
					}
					else
					
					if(enco == 3)
					{
						b = BUSCAR(bronce, nombre);
					}
					else
					if(b == 0)
					cout << "Nombre no encontrado" << endl;				
				}
				break;
				
				case 3:
					cout << "ADIOS" << endl;
					break;
	}
	
	while(a < 3);
}

int main()
{
	NODO *oro;
	NODO *plata;
	NODO *bronce;
	
	MENU(oro, plata, bronce);
	
	
	return 0;
}
