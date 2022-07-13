#include "Editor.h"

void Editor::Setup()
{
	grid.Create();
	pallete.Create();
}

void Editor::Update()
{
	grid.Update(user);
	grid.Draw();

	pallete.CheckCollision(user);
	pallete.Draw();

}


