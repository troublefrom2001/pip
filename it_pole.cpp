#include"h.h"

void it_gor (SDL_Renderer *renderer, int x, int y, int x1,int r, int g, int b  ){
    while(x<=x1){
    SDL_SetRenderDrawColor(renderer, r,g,b,255);
    SDL_RenderDrawPoint(renderer, x, y);
    x++;
    }
}
void it_vert (SDL_Renderer *renderer, int x, int y, int y1,int r, int g, int b  ){
    while(y<=y1){
    SDL_SetRenderDrawColor(renderer, r,g,b,255);
    SDL_RenderDrawPoint(renderer, x, y);
    y++;
    }
}

void it_pr_pol (SDL_Renderer *renderer, int x, int y, int x1, int y1,int r, int g, int b ){
    it_gor(renderer,x,y,x1,r,g,b);
    it_gor(renderer,x,y1,x1,r,g,b);
    it_vert(renderer,x,y,y1,r,g,b);
    it_vert(renderer,x1,y,y1,r,g,b);
}

void it_pr_zak (SDL_Renderer *renderer, int x, int y, int x1, int y1,int r, int g, int b){
    for(int i=y;i<=y1;i++){
        it_gor(renderer,x,i,x1,r,g,b);
    }
}
