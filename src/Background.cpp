#include "Background.h"

Background::Background(SDL_Renderer* renderer) : BaseObject(renderer)
{
    SDL_Surface* surface = IMG_Load("obj/background.png");
    if(surface == NULL)
    {
        std::cerr <<"Fail to load the background" << std::endl;
    }
    BGtexture = SDL_CreateTextureFromSurface(renderer, surface);
    SDL_FreeSurface(surface);
    /*x = 16;
    y = 0;
    width = 768;
    height = 600;*/
}

//void Background::Update(float delta)
//{
//    //Do nothing
//}

Background::~Background() {
    // Clean resources
    SDL_DestroyTexture(BGtexture);
}

void Background::Render(float delta)
{
    SDL_RenderCopy(renderer, BGtexture, NULL, NULL);
}

