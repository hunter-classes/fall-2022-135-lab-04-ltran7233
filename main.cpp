#include <iostream>
#include "box.h"

int main()
{
	std::string box_1 = box(3,5);
	std::cout << "box(3,5):\n";
	std::cout << box_1;
	std::cout << "\n------------------\n"; // seperator 
	
	std::string box_2 = box(6,2);
	std::cout << "box(6,2):\n";
	std::cout << box_2;
	std::cout << "\n------------------\n"; // seperator 
}
