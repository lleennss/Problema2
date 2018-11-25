#include <iostream>
#include "StudentAC.h"
#include <vector>
#include <algorithm>
#include <string>

void afisareVector(std::vector<StudentAC> vec,int i)
{
	std::vector<StudentAC>::iterator a;
	for (a = vec.begin(); a < vec.end(); a++)
	{
		a->afisare();
	}
}
std::vector<StudentAC> toVec(StudentAC *vectorClasic, int i )
{
	std::vector<StudentAC> vec;
	for (int j = 0; j < i; j++)
	{
		vec.push_back(vectorClasic[j]);
	}
	return vec;
}

int main()
{
	int i = 3;
	//prima parte cu functia de afisare vector
	/*std::vector<StudentAC> vec(i);
	afisareVector(vec, i);*/


	//transformare din vector clasic in vector c++
	//StudentAC *vectorClasic = new StudentAC[i];
	//toVec(vectorClasic, i);
	//afisareVector(toVec(vectorClasic, i), i);
	
	//sortare
	std::vector<StudentAC> vec2(i);
	std::sort(vec2.begin(), vec2.end());
	afisareVector(vec2,i);
	

	//delete[] vectorClasic;
	system("pause");
	return  0;
}