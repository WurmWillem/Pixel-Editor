#include "Pallete.h"

void Pallete::Create()
{
	Pixel grey(600, 100, 20, 20, LIGHTGRAY);
	Pixel red(630, 100, 20, 20, RED);
	Pixel blue(660, 100, 20, 20, BLUE);
	Pixel green(690, 100, 20, 20, GREEN);

	Pixel purple(600, 130, 20, 20, PURPLE);
	Pixel orange(630, 130, 20, 20, ORANGE);
	Pixel yellow(660, 130, 20, 20, YELLOW);
	Pixel black(690, 130, 20, 20, BLACK);

	
	pallete.push_back(grey);
	pallete.push_back(red);
	pallete.push_back(blue);
	pallete.push_back(green);

	pallete.push_back(purple);
	pallete.push_back(orange);
	pallete.push_back(yellow);
	pallete.push_back(black);
}

void Pallete::Draw()
{
	for (int i = 0; i < pallete.size(); i++)
	{
		DrawRectangleRec(pallete[i].rect, pallete[i].color);
	}
}

void Pallete::CheckCollision(User &user)
{
	for (int i = 0; i < pallete.size(); i++)
	{
		if (PixelIsClicked(i))
		{
			user.color = pallete[i].color;
		}
	}
}

bool Pallete::PixelIsClicked(int i)
{
	if (CheckCollisionPointRec({ (float)GetMouseX(), (float)GetMouseY() }, pallete[i].rect) && IsMouseButtonDown(MOUSE_BUTTON_LEFT))
	{
		return true;
	}
	return false;
}
