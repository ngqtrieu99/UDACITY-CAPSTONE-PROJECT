#ifndef BACKGROUND_H_
#define BACKGROUND_H_

#include "BaseObject.h"
#include <stdlib.h>
#include <time.h>
#include <iostream>


class Background : public BaseObject {
public:
    Background(SDL_Renderer* renderer);
    ~Background();

    // We won't need this since the background is only loaded once when the game start.
    //void Update(float delta); 
    void Render(float delta);

private:
    SDL_Texture* BGtexture;
};

#endif
