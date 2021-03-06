#include "Pila.h"

//Creación de una pila vacía
Pila::Pila()
{
	this->Tope = NULL;
}

//Pila con un elemento, tope apuntado a auxiliar
Pila::Pila(int Dato)
{
	Nodo *aux = new Nodo(Dato);
	this->Tope = aux;
}

//Insertar elemento en pila
void Pila::InsertarPila(int Dato)
{
	Nodo *aux = new Nodo(Dato,this->Tope);
	this->Tope = aux;
}

//Se elimina el contenido del tope y éste último se re-asigna
int Pila::BorrarPila()
{
	if(IsVacio())
	{
		std::cout<<"La Pila está vacía."<<std::endl;
	}
	else
	{
		int x = this->Tope->getDato();
		this->Tope = this->Tope->getSig();
		return x;
	}
}

//Verificar si la pila está vacía
bool Pila::IsVacio()
{
	if (this->Tope == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}

//Limpiar la pila
void Pila::VaciarPila()
{ 
	this->Tope = NULL;
}

//Mostrar Pila
void Pila::Show()
{
	if(IsVacio())
	{
		std::cout<<"La pila está vacía."<<std::endl;
		return;
	}
	Nodo *aux = this->Tope;
	while(aux != NULL)
	{
		std::cout<<aux->getDato()<<std::endl;
		aux = aux->getSig();
	}
}
