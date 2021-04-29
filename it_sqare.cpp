#include"h.h"
void it_square(SDL_Renderer *renderer, int x, int y, int r, int g, int b)
{

        SDL_SetRenderDrawColor(renderer, r, g, b, 255);
        SDL_RenderDrawPoint(renderer, x , y);
        SDL_RenderDrawPoint(renderer, x+1 , y );
        SDL_RenderDrawPoint(renderer, x , y + 1);
        SDL_RenderDrawPoint(renderer, x + 1 , y + 1);

}
