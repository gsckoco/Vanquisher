#include "video.h"

void newWindow(int resX, int resY, int fullscr) {
	if (window!=NULL) {
		SDL_DestroyWindow(window);
	}
	window = SDL_CreateWindow("Vanquisher",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,resX,resY,0);
	if (window==NULL) {
		SDL_Quit();
		return;
	}
}

void newRender(Uint32 flags) {
	if (window==NULL) {
		printf("Window not initialized.");
		SDL_Quit();
		return;
	}
	render = SDL_CreateRenderer(window,-1, flags);
	if (render == NULL) {
		SDL_DestroyWindow(window);
		printf("Renderer failed to start, error: %s", SDL_GetError());
		return;
	}
	
}
