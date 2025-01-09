#include "World.h"

bool World::readIsAvailable(Point& point)
{
    // int x = point.x;
    // int y = point.y;
    // if(x < 0 || x>=width || y<0 || y>=height) return false;
    // return pointSet[x][y]->isAvailable();
}

void World::write(const Object* object, Point& point)
{
    // int x = point.x;
    // int y = point.y;
    // if(x < 0 || x>=width || y<0 || y>=height) return;
    // pointSet[x][y] = object;
}

int main()
{
    World world(10, 10);
    Point point(0, 0);
    world.readIsAvailable(point);
    world.write(new Object(), point);
    return 0;
}
