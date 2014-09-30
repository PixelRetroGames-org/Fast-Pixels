#include<cstdio>
#include "SDL/SDL.h"
#include "SDL/SDL_ttf.h"
#include "SDL/SDL_mixer.h"
#include<windows.h>
#include "alex.h"
#include<ctime>
// 1280x800
SDL_Surface *screen,*background,*image[5][5];
void apply_surface( int x, int y, SDL_Surface* source, SDL_Surface* destination )
{
 SDL_Rect offset;
 offset.x=x;
 offset.y=y;
 SDL_BlitSurface(source,NULL,destination,&offset);
}
int main(int argc,char *args[])
{
 SDL_Init(SDL_INIT_EVERYTHING);
 screen=SDL_SetVideoMode(1280,800,32,SDL_SWSURFACE);
 background=SDL_LoadBMP("a.bmp");
 apply_surface(0,0,background,screen);
 SDL_Flip(screen);
 while(getkey(VK_SPACE)==0);
 image[1][1]=SDL_LoadBMP("Single Player.bmp");
 image[1][2]=SDL_LoadBMP("Single Player_bold.bmp");
 image[1][3]=SDL_LoadBMP("Single Player_click.bmp");
 image[2][1]=SDL_LoadBMP("Two Players.bmp");
 image[2][2]=SDL_LoadBMP("Two Players_bold.bmp");
 image[2][3]=SDL_LoadBMP("Two Players_click.bmp");

}
