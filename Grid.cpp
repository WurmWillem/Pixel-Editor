#include "Grid.h"

void Grid::Create()
{
	for (int i = 0; i < gridSize; i++)
	{
		vector<Pixel> row; //Horizontal row pixels

		for (int j = 0; j < gridSize; j++)
		{
			Pixel pixel(j * 21 + 20, i * 21 + 10, 20, 20, defaultColor);
			
			row.push_back(pixel);
		}
		grid.push_back(row);
	}
}

void Grid::Draw()
{
	for (int i = 0; i < grid.size(); i++)
	{
		for (int j = 0; j < grid.size(); j++)
		{
			DrawRectangleRec(grid[i][j].rect, grid[i][j].color);
		}
	}
}

void Grid::Update(User& user)
{
	for (int i = 0; i < grid.size(); i++)
	{
		for (int j = 0; j < grid.size(); j++)
		{
			if (PixelIsClicked(i, j))
			{
				grid[i][j].color = user.color;
			}
		}
	}

	CheckClear();
}

void Grid::CheckClear()
{
	DrawText("clear", 600, 160, 50, BLACK);
	
	if (ButtonIsClicked(clear))
	{
		for (int i = 0; i < grid.size(); i++)
		{
			for (int j = 0; j < grid.size(); j++)
			{
				grid[i][j].color = defaultColor;	
			}
		}
	}
}

bool Grid::ButtonIsClicked(Rectangle rect)
{
	if (CheckCollisionPointRec(Vector2{ (float)GetMouseX(), (float)GetMouseY() }, rect) && IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
	{
		return true;
	}
	return false;
}

bool Grid::PixelIsClicked(int i, int j)
{
	if (CheckCollisionPointRec({ (float)GetMouseX(), (float)GetMouseY() }, grid[i][j].rect) && IsMouseButtonDown(MOUSE_BUTTON_LEFT))
	{
		return true;
	}
	return false;
}
