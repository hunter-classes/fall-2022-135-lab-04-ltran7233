#include <iostream>
#include "cross.h"

std::string cross(int size)
{
	std::string shape = "";
	int end = 0;
	for (int row=0; row<size; row++)
	{
		end = (size - row) - 1;
		for (int col=0; col<size; col++)
		{
			if ((col==row) || (col==end))
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
