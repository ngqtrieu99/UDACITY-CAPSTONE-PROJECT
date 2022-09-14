#include "Player.h"


static TTF_Font* font = NULL;
Player::Player(SDL_Renderer* renderer) : BaseObject(renderer)
{
	
	if (!font)
	{
		font = TTF_OpenFont("obj/Roboto.ttf", 30);
	}
	if (font == NULL)
	{
		std::cerr << "Failed the load the font!\n";
		std::cerr << "SDL_TTF Error: " << TTF_GetError() << "\n";
	}
	SDL_Color fg = { 255, 255, 255, 0 };
	std::string number = "Life" + std::to_string(PLAYER_LIFE);
	SDL_Surface* surface =  TTF_RenderText_Blended(font, number.c_str(), fg);
	textureFont = SDL_CreateTextureFromSurface(renderer, surface);
	SDL_FreeSurface(surface);
	//End

}

Player::~Player()
{
	SDL_DestroyTexture(textureFont);
}



void Player::Render(float delta)
{
	// Render for number
	SDL_Rect srcRest;
	SDL_Rect desRect;
	TTF_SizeText(font, number.c_str(), &srcRest.w, &srcRest.h);
	srcRest.x = 0;
	srcRest.y = 0;
	desRect.x = 100;
	desRect.y = 100;
	desRect.w = srcRest.w;
	desRect.h = srcRest.h;
	SDL_RenderCopy(renderer, textureFont, &srcRest, &desRect);


}
