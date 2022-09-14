
#ifndef BASEOBJECT_H_
#define BASEOBJECT_H_

#include "SDL.h"
#include "SDL_image.h"

class BaseObject {
public:
    BaseObject(SDL_Renderer* renderer);
    virtual ~BaseObject();

    float x, y, width, height;

    virtual void Update(float delta);
    virtual void Render(float delta);

    bool Collides(BaseObject* other);
protected:
    SDL_Renderer* renderer;

};

#endif
