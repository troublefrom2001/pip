#include"h.h"

void it_serdce(SDL_Renderer *renderer, int x){
int y=75;
    it_zz(renderer, x+2, y ,3, 'R');
    it_zz(renderer, x+14, y ,3, 'R');
    it_zz(renderer, x, y+2 ,5, 'R');
    it_zz(renderer, x+12, y+2 ,5, 'R');
    for(int i =0; i <3; i++){     it_zz(renderer, x, y+4+(i*2) ,11, 'R'); }
    it_zz(renderer, x+2, y+10 ,9, 'R');
    it_zz(renderer, x+4, y+12 ,7, 'R');
    it_zz(renderer, x+6, y+14 ,5, 'R');
    it_zz(renderer, x+8, y+16 ,3, 'R');
    it_square(renderer, x+10, y+18 ,255, 50, 50);
}


void it_serdcez(SDL_Renderer *renderer, int x){
int y=75;
    it_zz(renderer, x+2, y ,3, 'B');
    it_zz(renderer, x+14, y ,3, 'B');
    it_zz(renderer, x, y+2 ,5, 'B');
    it_zz(renderer, x+12, y+2 ,5, 'B');
    for(int i =0; i <3; i++){     it_zz(renderer, x, y+4+(i*2) ,11, 'B'); }
    it_zz(renderer, x+2, y+10 ,9, 'B');
    it_zz(renderer, x+4, y+12 ,7, 'B');
    it_zz(renderer, x+6, y+14 ,5, 'B');
    it_zz(renderer, x+8, y+16 ,3, 'B');
    it_square(renderer, x+10, y+18 ,0, 0, 0);
}
