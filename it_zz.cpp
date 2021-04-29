#include"h.h"
void it_zz(SDL_Renderer *renderer, int x, int y, int z, char c)
{
    if(c == 'R')
    {
        for(int i = 0; i < z*2; i+=2)
        {
            it_square(renderer, x+i, y, 250, 50, 50);
        }
    }
    if(c == 'Y')
    {
        for(int i = 0; i < z*2; i+=2)
        {
            it_square(renderer, x+i, y, 250, 250, 50);
        }
    }
    if(c == 'B')
    {
        for(int i = 0; i < z*2; i+=2)
        {
            it_square(renderer, x+i, y, 0, 0, 0);
        }
    }
}
