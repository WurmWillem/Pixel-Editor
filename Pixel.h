#pragma once
#include "raylib.h"

class Pixel
{
public:
	Pixel(float X, float Y, float Width, float Height, Color _color);
	
	Rectangle rect;

	Color color;

private:
	float x, y, width, height;
};