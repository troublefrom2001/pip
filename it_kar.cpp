#include"h.h"
void it_kar(SDL_Renderer *renderer, int x){

    for(int i=800; i>730;i-=15){
        it_gor(renderer,x, i, x+108,100,100,0);
        it_gor(renderer,x, i-1, x+108,130,130,0);
        it_gor(renderer,x, i-2, x+108,160,160,0);
        it_gor(renderer,x, i-3, x+108,200,200,0);}
    for(int i=x;i<=x+110;i+=15){
            for(int j=0;j<4;j++){it_vert(renderer,i+j,740,800,130,130,0);}
    }
    it_vert(renderer,x,700,800,130,130,0);
    it_vert(renderer,x+108,700,800,130,130,0);
    it_gor(renderer,x, 700, x+108,100,100,0);
    it_gor(renderer,x, 699, x+108,130,130,0);
    it_gor(renderer,x, 698, x+108,160,160,0);
    it_gor(renderer,x, 697, x+108,200,200,0);

}

void it_karz(SDL_Renderer *renderer, int x){

    for(int i=800; i>730;i-=15){
        it_gor(renderer,x, i, x+108,0,0,0);
        it_gor(renderer,x, i-1, x+108,0,0,0);
        it_gor(renderer,x, i-2, x+108,0,0,0);
        it_gor(renderer,x, i-3, x+108,0,0,0);}
    for(int i=x;i<=x+110;i+=15){
            for(int j=0;j<4;j++){it_vert(renderer,i+j,740,800,0,0,0);}
    }
    it_vert(renderer,x,700,800,0,0,0);
    it_vert(renderer,x+108,700,800,0,0,0);
    it_gor(renderer,x, 700, x+108,0,0,0);
    it_gor(renderer,x, 699, x+108,0,0,0);
    it_gor(renderer,x, 698, x+108,0,0,0);
    it_gor(renderer,x, 697, x+108,0,0,0);

}
