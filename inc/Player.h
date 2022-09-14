#ifndef PLAYER_H_
#define PLAYER_H_
#include <SDL_ttf.h>
#include <SDL_image.h>
#include <iostream>
#include <string>
#include "BaseObject.h"


static std::string life;
static std::string number;

static unsigned int PLAYER_LIFE = 3;

class Player : public BaseObject
{
	public:
		enum TextColor
		{
			RED_TEXT = 0,
			WHITE_TEXT = 1,
			GREEN_TEXT = 2
		};
		Player(SDL_Renderer* renderer);
		~Player();
		//void Update(float delta);
		void Render(float delta);
	private:
		SDL_Texture* textureFont;
};
#endif 
