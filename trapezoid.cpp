#include <iostream>
#include "trapezoid.h"

std::string trapezoid(int width, int height)
{
	std::string shape = "";
	int end = 0;
	if (width%2==0)
	{
		if (width/2 >= height)
		{
			for (int row=0; row<height; row++)
			{
				end = (width - row) - 1;
				for (int col=0; col<width; col++)
				{
					if ((col>=row) && (col<=end))
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
		else
		{
			return "Impossible Shape!";
		}
	}
	else
	{
		if ((width+1)/2 >= height)
		{
			for (int row=0; row<height; row++)
			{
				end = (width - row) - 1;
				for (int col=0; col<width; col++)
				{
					if ((col>=row) && (col<=end))
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
		else
		{
			return "Impossible Shape!";
		}
	}
}
