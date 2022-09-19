#include <iostream>
#include "upper.h"

std::string upper(int length)
{
	std::string shape = "";
	for (int row=0; row<length; row++)
	{
		for (int col=0; col<length; col++)
		{
			if (col>=row)
			{
				shape += "*";
			}
			else
			{
				shape += " ";
			}
		}
		shape += "\n";
	}
	return shape;
}
