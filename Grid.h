#pragma once
#include <iostream>
#include <vector>
#include "Pixel.h"
#include "raylib.h"
#include "User.h"
using namespace std;


class Grid
{
public:
	void Create();
	void Draw();
	void Update(User &user);
	void CheckClear();
	
	bool ButtonIsClicked(Rectangle rect);
	bool PixelIsClicked(int i, int j);
	
	const int gridSize = 24;

private:
	vector< vector<Pixel> > grid;

	Color defaultColor = LIGHTGRAY;

	Rectangle clear = { 570, 170, 130, 30 };
};
