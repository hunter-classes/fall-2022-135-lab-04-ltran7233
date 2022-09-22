#include <iostream>
#include "checkerboard3x3.h"

std::string checkerboard3x3(int width, int height)
{
	std::string shape = "";
	int row_counter = 0;
	int col_counter = 0;
	for (int row=0; row<height; row++)
	{
		if (row_counter < 3)
		{
			for (int col=0; col<width; col++)
			{
				if (col_counter < 3)
				{
					shape += "*";
					col_counter++;
				}
				else
				{
					shape += " ";
					col_counter++;
					if (col_counter == 6)
					{
						col_counter = 0;
					}
				}
			}
			row_counter++;
			shape += "\n";
		}
		else
		{
			for (int col=0; col<width; col++)
			{
				if (col_counter < 3)
				{
					shape += " ";
					col_counter++;
				}
				else
				{
					shape += "*";
					col_counter++;
					if (col_counter == 6)
					{
						col_counter = 0;
					}
				}
			}
			row_counter++;
			shape += "\n";
			if (row_counter == 6)
			{
				row_counter = 0;
			}			
		}
		col_counter = 0;
	}
	return shape;
}
