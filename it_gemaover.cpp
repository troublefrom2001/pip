#include"h.h"

void it_gameover(SDL_Renderer *renderer, int a, SDL_Texture *tex, SDL_Surface *bmp   ){
    if(a<=1){       it_serdcez(renderer, 100);
                    cout<<"GAME OVER"<<endl;
                    SDL_FreeSurface(bmp);
                    SDL_RenderCopy(renderer, tex, NULL, NULL);
                    SDL_RenderPresent(renderer);
                    SDL_Delay (500);
                    it_serdce(renderer, 100); it_serdce(renderer, 125); it_serdce(renderer, 150);}
    else if (a==3) it_serdcez(renderer, 150);
    else it_serdcez(renderer, 125);

}


void it_ris(SDL_Renderer *renderer, int mass[30][3], double del, int bo){
                for(int i=0;i<30;i++){
                        if(mass[i][0]!=0){
                                if(mass[i][2]>0){
                                    it_apple(renderer,mass[i][0],mass[i][1]+100);
                                }
                                else{
                                    it_ne_apple(renderer,mass[i][0],mass[i][1]+100);
                                }
                        } //проверка массива и прорисовка яблок
                }
                SDL_RenderPresent(renderer);
                SDL_Delay(del);
}

void it_zak(SDL_Renderer *renderer, int mass[30][3], double del, int bo){
                for(int i=0;i<30;i++){
                        if(mass[i][0]!=0){
                                if(mass[i][2]>0){
                                    it_zapple(renderer,mass[i][0],mass[i][1]+100);
                                }
                                else{
                                    it_nez_apple(renderer,mass[i][0],mass[i][1]+100);
                                }
                        } //проверка массива и прорисовка яблок

                        if(mass[i][0]!=0){
                                mass[i][1]=mass[i][1]+1;
                        }

                }
}
