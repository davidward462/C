#include <stdio.h>
#include <stdbool.h>

struct
{
    int posX;
    int posY;
    int hp;
    bool isAlive;
} entity1 = {0, 0, 100, true};


int main()
{ 
    printf("(%d, %d) %dhp\n", entity1.posX, entity1.posY, entity1.hp);
    return 0;
}
