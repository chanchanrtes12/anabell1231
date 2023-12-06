#pragma once

#include "defs.h"

int CheckCollisionWall(Entity *object);

int CheckCollisionSide(Entity *object);

int CheckCollisionObjects(Entity *object_a, Entity *object_b);

int CheckCollisionObject(Entity *object_a, Item *object_b);
