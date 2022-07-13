#pragma once
#include "raylib.h"
#include <vector>
#include "Pixel.h"
#include "User.h"
using namespace std;

class Pallete
{
public:
	void Create();
	void Draw();
	void CheckCollision(User &user);
	bool PixelIsClicked(int i);

private:
	vector<Pixel> pallete;
};
