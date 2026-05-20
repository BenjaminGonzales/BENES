#include <stdio.h>
#include <SDL3/SDL.h>

#define MY_DELAY 4000

int main()
{
     SDL_Init(SDL_INIT_VIDEO);
     SDL_Window *window = NULL;
     window = SDL_CreateWindow("BENES!", 320, 240, SDL_WINDOW_RESIZABLE);

     SDL_Delay(MY_DELAY);

     SDL_DestroyWindow(window);

     SDL_Quit();
     
     return 0;
}

 
