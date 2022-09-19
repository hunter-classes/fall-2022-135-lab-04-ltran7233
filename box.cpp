#include <iostream>
#include "box.h"

std::string box(int width, int height)
{
	std::string shape = "";
	std::cout << "Shape:\n";
	for (int h=0; h<height; h++)
	{
		for (int w=0; w<width; w++)
		{
			shape += "*";
		}
		shape += "\n";
	}
	return shape;
}
