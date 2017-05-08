#include "Pila.h"

int main()
{
	Pila p = Pila();
	std::cout<< " "<< std::endl;	
	p.InsertarPila(6);
	p.InsertarPila(4);
	p.InsertarPila(4);
	p.InsertarPila(5);
	p.InsertarPila(3);
	p.Show();
	std::cout<< " "<< std::endl;
	p.VaciarPila();
	p.InsertarPila(3);
	p.InsertarPila(2);
	p.InsertarPila(1);
	p.Show();
	std::cout<< " "<< std::endl;
	p.BorrarPila();
	p.Show();
	
	return 0;
}
