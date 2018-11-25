#include <iostream>
#include "StudentAC.h"
#include <vector>
#include <algorithm>
#include <string>

StudentAC::StudentAC()
{
	std::cout << "Introduceti numele  ";
	std::cin >> this->nume;
	std::cout << std::endl;
	std::cout << "Introduceti nota: ";
	std::cin >> this->nota;
	std::cout << std::endl;

}

StudentAC::~StudentAC()
{

}
StudentAC::StudentAC(std::string nume, int nota)
{
	this->nume = nume;
	this->nota = nota;
}
void StudentAC::afisare()
{
	std::cout <<std::endl<< "Numele elevului este: "<< this->nume<<std::endl;

	std::cout << "Nota este " << this->nota << std::endl;;

}
void StudentAC::modificareNota(int nouaNota)
{
	this->nota = nouaNota;
}
bool StudentAC::operator<(StudentAC a)
{
	if (a.nota < this->nota)
		return false;
	else
		return true;
}