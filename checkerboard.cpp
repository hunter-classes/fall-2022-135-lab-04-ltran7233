#include <iostream>
#include "checkerboard.h"

std::string checkerboard(int width, int height)
{
	std::string shape = "";
	for (int h=0; h<height; h++)
	{
		for (int w=0; w<width; w++)
		{
			if (h%2)
			{
				if (w%2==0)
				{
					shape += " ";
				}
				else
				{
					shape += "*";
				}
			}
			else
			{
				if (w%2==0)
				{
					shape += "*";
				}
				else
				{
					shape += " ";
				}
			}
		}
		shape += "\n";
	}
	return shape;
}
