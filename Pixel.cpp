#include "Pixel.h"

Pixel::Pixel(float X, float Y, float Width, float Height, Color _color)
{
	x = X;
	y = Y;
	width = Width;
	height = Height;

	rect = { X, Y, Width, Height };

	color = _color;
}
