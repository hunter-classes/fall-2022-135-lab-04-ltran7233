#include <iostream>
#include "box.h"
#include "checkerboard.h"
#include "cross.h"
#include "lower.h"
#include "upper.h"
#include "trapezoid.h"
#include "checkerboard3x3.h"

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
	
	std::string upper_1 = upper(5);
	std::cout << "upper(5):\n";
	std::cout << upper_1;
	std::cout << "\n------------------\n"; // separator
	
	std::string upper_2 = upper(8);
	std::cout << "upper(8):\n";
	std::cout << upper_2;
	std::cout << "\n------------------\n"; // separator

	std::string trapezoid_1 = trapezoid(7,4);
	std::cout << "trapezoid(7,4):\n";
	std::cout << trapezoid_1;
	std::cout << "\n------------------\n"; // separator

	std::string trapezoid_2 = trapezoid(10,6);
	std::cout << "trapezoid(10,6):\n";
	std::cout << trapezoid_2;
	std::cout << "\n------------------\n"; // separator

	std::string checkerboard3x3_1 = checkerboard3x3(16,11);
	std::cout << "checkerboard3x3(16,11):\n";
	std::cout << checkerboard3x3_1;
	std::cout << "\n------------------\n"; // separator

	std::string checkerboard3x3_2 = checkerboard3x3(27,27);
	std::cout << "checkerboard3x3(27,27):\n";
	std::cout << checkerboard3x3_2;
	std::cout << "\n------------------\n"; // separator 
}
