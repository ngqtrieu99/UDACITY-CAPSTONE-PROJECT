
#include "BaseObject.h"

BaseObject::BaseObject(SDL_Renderer* renderer) {
    this->renderer = renderer;

    x = 0;
    y = 0;
    width = 1;
    height = 1;
}

BaseObject::~BaseObject() {
}

void BaseObject::Update(float delta) {
}

void BaseObject::Render(float delta) {
}

bool BaseObject::Collides(BaseObject* other) {
    if (x + width > other->x && x < other->x + other->width &&
        y + height > other->y && y < other->y + other->height) {
        return true;
    }
    return false;
}
