#include "main.hpp"

constexpr int wWindow{ 1280 };
constexpr int hWindow{ 720 };

SDL_Window* main_window {nullptr};

int main()
{


	if (!SDL_Init(SDL_INIT_VIDEO))
		SDL_Log("Error loading Window!\n");
	else
	{
		
	}

}