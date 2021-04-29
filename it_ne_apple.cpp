#include"h.h"
void it_ne_apple(SDL_Renderer *renderer, int x, int y)
{
    it_square(renderer, x+12, y+0 ,100, 50, 0); it_square(renderer, x+14, y+0 ,100, 50, 0); it_square(renderer, x+16, y+0 ,100, 50, 0);
    it_square(renderer, x+12, y+2 ,100, 50, 0); it_square(renderer, x+12, y+4 ,100, 50, 0);
    it_square(renderer, x+10, y+4 ,100, 50, 0); it_square(renderer, x+10, y+6 ,100, 50, 0);
    it_square(renderer, x+10, y+8 ,100, 50, 0); it_square(renderer, x+10, y+10 ,100, 50, 0);
    it_square(renderer, x+10, y+12 ,100, 50, 0);
    it_zz(renderer, x+2, y+10 , 3, 'R'); it_zz(renderer, x+14, y+10 , 3, 'R');
    it_zz(renderer, x+0, y+12 , 2, 'R'); it_zz(renderer, x+4, y+12 , 2, 'Y');
    it_square(renderer, x+8, y+12 ,250, 50, 50); it_zz(renderer, x+12, y+12 , 2, 'R');
    it_zz(renderer, x+16, y+12 , 3, 'Y'); it_zz(renderer, x+6, y+14 , 2, 'Y');
    it_square(renderer, x+10, y+14 ,250, 250, 50); it_zz(renderer, x+12, y+14 , 3, 'Y');
    it_zz(renderer, x+8, y+16 , 4, 'Y'); it_zz(renderer, x+8, y+18 , 4, 'Y');
    it_zz(renderer, x+8, y+20 , 4, 'Y'); it_square(renderer, x+8, y+22 ,250, 250, 50);
    it_zz(renderer, x+12, y+22 , 2, 'Y'); it_zz(renderer,x+8, y+24 , 2, 'Y');
    it_square(renderer, x+14, y+24 ,250, 250, 50);
    it_zz(renderer,x+8, y+26 , 4, 'Y'); it_zz(renderer,x+6, y+28 , 6, 'Y');
    it_zz(renderer,x+4, y+30 , 8, 'Y'); it_zz(renderer,x+0, y+32 , 3, 'R');
    it_zz(renderer,x+6, y+32 , 8, 'Y'); it_zz(renderer,x+2, y+34 , 4, 'R');
    it_zz(renderer,x+12, y+34 , 5, 'R');

}
void it_nez_apple(SDL_Renderer *renderer, int x, int y)
{
    it_square(renderer, x+12, y+0 ,0, 0, 0); it_square(renderer, x+14, y+0 ,0, 0, 0); it_square(renderer, x+16, y+0 ,0, 0, 0);
    it_square(renderer, x+12, y+2 ,0, 0, 0); it_square(renderer, x+12, y+4 ,0, 0, 0);
    it_square(renderer, x+10, y+4 ,0, 0, 0); it_square(renderer, x+10, y+6 ,0, 0, 0);
    it_square(renderer, x+10, y+8 ,0, 0, 0); it_square(renderer, x+10, y+10 ,0, 0, 0);
    it_square(renderer, x+10, y+12 ,0, 0, 0);
    it_zz(renderer, x+2, y+10 , 3, 'B'); it_zz(renderer, x+14, y+10 , 3, 'B');
    it_zz(renderer, x+0, y+12 , 2, 'B'); it_zz(renderer, x+4, y+12 , 2, 'B');
    it_square(renderer, x+8, y+12 ,0, 0, 0); it_zz(renderer, x+12, y+12 , 2, 'B');
    it_zz(renderer, x+16, y+12 , 3, 'B'); it_zz(renderer, x+6, y+14 , 2, 'B');
    it_square(renderer, x+10, y+14 ,0, 0, 0); it_zz(renderer, x+12, y+14 , 3, 'B');
    it_zz(renderer, x+8, y+16 , 4, 'B'); it_zz(renderer, x+8, y+18 , 4, 'B');
    it_zz(renderer, x+8, y+20 , 4, 'B'); it_square(renderer, x+8, y+22 ,0, 0, 0);
    it_zz(renderer, x+12, y+22 , 2, 'B'); it_zz(renderer,x+8, y+24 , 2, 'B');
    it_square(renderer, x+14, y+24 ,0, 0, 0);
    it_zz(renderer,x+8, y+26 , 4, 'B'); it_zz(renderer,x+6, y+28 , 6, 'B');
    it_zz(renderer,x+4, y+30 , 8, 'B'); it_zz(renderer,x+0, y+32 , 3, 'B');
    it_zz(renderer,x+6, y+32 , 8, 'B'); it_zz(renderer,x+2, y+34 , 4, 'B');
    it_zz(renderer,x+12, y+34 , 5, 'B');

}

