#ifndef H_H_INCLUDED
#define H_H_INCLUDED

#include <SDL.h>
#include<iostream>
using namespace std;

void it_square(SDL_Renderer *renderer, int x, int y, int r, int g, int b);
void it_zz(SDL_Renderer *renderer, int x, int y, int z, char c);
void it_apple(SDL_Renderer *renderer, int x, int y);
void it_ne_apple(SDL_Renderer *renderer, int x, int y);
void it_gor(SDL_Renderer *renderer, int x, int y, int x1, int r, int g, int b);
void it_vert(SDL_Renderer *renderer, int x, int y, int y1, int r, int g, int b);
void it_pr_pol (SDL_Renderer *renderer, int x, int y, int x1, int y1,int r, int g, int b);
void it_pr_zak (SDL_Renderer *renderer, int x, int y, int x1, int y1,int r, int g, int b);
void it_zapple(SDL_Renderer *renderer, int x, int y);
void it_nez_apple(SDL_Renderer *renderer, int x, int y);
void it_kar(SDL_Renderer *renderer, int x);
void it_karz(SDL_Renderer *renderer, int x);
int it_sl_ch(int a);
void it_serdce(SDL_Renderer *renderer, int x);
void it_serdcez(SDL_Renderer *renderer, int x);
void it_gameover(SDL_Renderer *renderer, int a, SDL_Texture *tex, SDL_Surface *bmp);
void it_ris(SDL_Renderer *renderer, int mass[30][3], double del, int bo);
void it_zak(SDL_Renderer *renderer, int mass[30][3], double del, int bo);


#endif // H_H_INCLUDED
