#include <iostream>
#include "box.h"
#include "checkerboard.h"
#include "cross.h"
#include "lower.h"

int main()
{
	std::string box_1 = box(3,5);
	std::cout << "box(3,5):\n";
	std::cout << box_1;
	std::cout << "\n------------------\n"; // separator 
	
	std::string box_2 = box(6,2);
	std::cout << "box(6,2):\n";
	std::cout << box_2;
	std::cout << "\n------------------\n"; // separator 
	
	std::string board_1 = checkerboard(8,8);
	std::cout << "checkerboard(8,8):\n";
	std::cout << board_1;
	std::cout << "\n------------------\n"; // separator 
	
	std::string board_2 = checkerboard(11,6);
	std::cout << "checkerboard(11,6):\n";
	std::cout << board_2;
	std::cout << "\n------------------\n"; // separator 
	
	std::string cross_1 = cross(8);
	std::cout << "cross(8):\n";
	std::cout << cross_1;
	std::cout << "\n------------------\n"; // separator
	
	std::string cross_2 = cross(5);
	std::cout << "cross(5):\n";
	std::cout << cross_2;
	std::cout << "\n------------------\n"; // separator
	
	std::string lower_1 = lower(3);
	std::cout << "lower(3):\n";
	std::cout << lower_1;
	std::cout << "\n------------------\n"; // separator
	
	std::string lower_2 = lower(6);
	std::cout << "lower(6):\n";
	std::cout << lower_2;
	std::cout << "\n------------------\n"; // separator
}
