#pragma once
#include <vector>
#include <algorithm>
#include <string>

class StudentAC
{
public:
	StudentAC();
	~StudentAC();
	StudentAC(std::string nume, int nota);
	void afisare();
	void modificareNota(int nouaNota);
	bool operator<(StudentAC a);
private:
	std::string nume;
	int nota;

};