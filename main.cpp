#include"h.h"

bool it_prov(int mass[30][3], int a, int i){
        if(mass[i][2]<0){
            if(mass[i][0]>a&&mass[i][0]<a+100) return 1;
            else return 0;
        }
        if(mass[i][2]>0){
            if(mass[i][0]<a||mass[i][0]>a+100) return 1;
            else return 0;
        }


}
int it_sl_ch(int a, int z){
    a=a*(z+123)*1234/6789+321-764+1111;
    if(a<0){a=a*(-1);}
    a=a*84637%29;

    return a;
}


int main(int argc, char* args[]){
    SDL_Window *window;  SDL_Renderer *renderer;   SDL_Event event; SDL_CreateWindowAndRenderer(1100, 900, 0, &window, &renderer);
    SDL_Surface *bmp = SDL_LoadBMP("D:\m.bmp");  SDL_Texture *tex = SDL_CreateTextureFromSurface(renderer, bmp);
    int x=67, a=400,mass[30][3],s=0,z=0,sch=3,bo=-1; //x - координата яблока по х, а- координата корзины по х, mass - 1-е изм - кол-во "вакантных" мест для яблок, 2-е изм - координаты х,у
    double del=6; it_kar(renderer, a);
    while (1){   if(SDL_PollEvent(&event)==true){
         switch (event.key.keysym.sym){
               case SDL_KEYDOWN:
                case SDLK_UP: {  z=1;  sch=3;       s=0;   del=7;
                    it_pr_zak(renderer, 0,0,1100,900,0,0,0);    it_pr_pol(renderer, 99,99,1001,801,100,100,100);
                    it_serdce(renderer, 100); it_serdce(renderer, 125); it_serdce(renderer, 150);
                    for(int i=0;i<30;i++){     for(int j=0;j<3;j++){  mass[i][j]=0;}    }          }}}
        if(z==1){   bo=bo*(-1);    x=it_sl_ch(x,a+x);  //генерация случайной координаты по х
            if(mass[x][0]==0&&s<7){mass[x][0]=x*30+100;mass[x][1]==110; mass[x][2]=bo; s++;} //добавление яблока
            for(int l=0;l<130;l++){   it_ris(renderer, mass, del, bo);
                    if(SDL_PollEvent(&event)==true){    it_karz(renderer,a);
                        switch (event.key.keysym.sym){
                            case SDL_KEYDOWN:
                            case SDLK_LEFT:  a-=20; if(a<100)a=100;  it_kar(renderer,a); break;
                            case SDLK_RIGHT: a+=20;if(a>880) a=880;  it_kar(renderer,a); break;       }  }
                    it_zak(renderer, mass,del,bo);
                    for(int p=0;p<30;p++){  if(mass[p][1]>600){ if(it_prov(mass,a,p)==1){ it_gameover(renderer,sch, tex, bmp);if(sch<=1){ sch=3; z=0; del=5; break;} else sch--;   }
                            mass[p][1]=0;   mass[p][0]=0;    s--;   }  }
                    it_kar(renderer,a);  }      del=del-0.05; }
                    else{ SDL_FreeSurface(bmp);  SDL_RenderCopy(renderer, tex, NULL, NULL);  SDL_RenderPresent(renderer);}}   return 0;}
