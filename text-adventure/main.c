#include <stdio.h>
#include <string.h>

enum locationType
{
    tree = 0,
};

struct location
{
    enum locationType type;
};

struct player
{
    struct location currentLocation;      
};

int main()
{
    

    return 0;
}
