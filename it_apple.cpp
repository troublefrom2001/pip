#include"h.h"
void it_apple(SDL_Renderer *renderer, int x, int y)
{
    it_square(renderer, x+14, y+0 ,100, 50, 0);
    it_square(renderer, x+14, y+2 ,100, 50, 0);
    it_square(renderer, x+12, y+2 ,100, 50, 0);
    it_square(renderer, x+12, y+4 ,100, 50, 0);
    it_zz(renderer, x+8, y+6 ,4, 'R');
    it_zz(renderer, x+4, y+8 ,8, 'R');
    it_zz(renderer, x+2, y+10 ,10, 'R');
    it_zz(renderer, x+2, y+12 ,10, 'R');
    it_zz(renderer, x+0, y+14 ,12, 'R');
    it_zz(renderer, x+0, y+16 ,12, 'R');
    it_zz(renderer, x+0, y+18 ,12, 'R');
    it_zz(renderer, x+0, y+20 ,12, 'R');
    it_zz(renderer, x+2, y+22 ,10, 'R');
    it_zz(renderer, x+2, y+24 ,10, 'R');
    it_zz(renderer, x+4, y+26 ,8, 'R');
    it_square(renderer, x+6, y+28 ,250, 50, 50);
    it_square(renderer, x+8, y+28 ,250, 50, 50);
    it_square(renderer, x+14, y+28 ,250, 50, 50);
    it_square(renderer, x+16, y+28 ,250, 50, 50);

}
#include"h.h"
void it_zapple(SDL_Renderer *renderer, int x, int y)
{
    it_square(renderer, x+14, y+0 ,0, 0, 0);
    it_square(renderer, x+14, y+2 ,0, 0, 0);
    it_square(renderer, x+12, y+2 ,0, 0, 0);
    it_square(renderer, x+12, y+4 ,0, 0, 0);
    it_zz(renderer, x+8, y+6 ,4, 'B');
    it_zz(renderer, x+4, y+8 ,8, 'B');
    it_zz(renderer, x+2, y+10 ,10, 'B');
    it_zz(renderer, x+2, y+12 ,10, 'B');
    it_zz(renderer, x+0, y+14 ,12, 'B');
    it_zz(renderer, x+0, y+16 ,12, 'B');
    it_zz(renderer, x+0, y+18 ,12, 'B');
    it_zz(renderer, x+0, y+20 ,12, 'B');
    it_zz(renderer, x+2, y+22 ,10, 'B');
    it_zz(renderer, x+2, y+24 ,10, 'B');
    it_zz(renderer, x+4, y+26 ,8, 'B');
    it_square(renderer, x+6, y+28 ,0, 0, 0);
    it_square(renderer, x+8, y+28 ,0, 0, 0);
    it_square(renderer, x+14, y+28 ,0, 0,0);
    it_square(renderer, x+16, y+28 ,0, 0,0);

}
