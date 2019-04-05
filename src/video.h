#ifndef _VIDEO_H_
#define _VIDEO_H_

#include <stdio.h>
#include "SDL2/SDL.h"

SDL_Window* window = NULL;
SDL_Renderer *render = NULL;

void newWindow(int resX,int resY ,int fullscreen);
void newRender(Uint32 flags);
#endif
