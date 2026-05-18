#include <stdio.h>
#include <SDL3/SDL.h>

#define TIME_DELAY 64

int main() {
     int cycle = 0;
     int loop = 1;
     while (loop)
     {
	  SDL_Event event;
	  while (SDL_PollEvent(&event))
	  {
	       switch (event.type)
	       {
	       case SDL_EVENT_QUIT:
                    loop = 0;
                    break;
	       case SDL_EVENT_KEY_DOWN:
                    break;
	       case SDL_EVENT_KEY_UP:
                    break;
	       default:
                    break;
	       }
	  }
	  printf("cycle %d\n", ++cycle);
	  SDL_Delay(TIME_DELAY);
     }
     return 0;
}
