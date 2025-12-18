#include <iostream>
#include "Mathem.h" 
using namespace std;
int main() 
{ 
	setlocale(LC_ALL, "rus");
	PV511::RandInit(); 
	std::cout << "Привет мир!!!\n" << PV511::RandInt(100); 
}