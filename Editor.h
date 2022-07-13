#pragma once
#include "raylib.h"
#include "Grid.h"
#include "Pallete.h"

class Editor
{
public:
	void Update();
	void Setup();

private:
	Grid grid;
	Pallete pallete;
	User user;
};