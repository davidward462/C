#include <stdio.h>
#include <string.h>
#define LABEL_LEN 32

typedef struct
{
    int x;
    int y;
    char label[LABEL_LEN+1];
} point;

point CreatePoint(int x, int y, char label[LABEL_LEN+1])
{
    point p;
    p.x = x;
    p.y = y;
    strcpy(p.label, label);

    return p;
}

void PrintPoint (point p)
{
    printf("(%d, %d) %s\n", p.x, p.y, p.label);
}

int main()
{   
    point p = CreatePoint(0, 0, "omega");
    PrintPoint(p);

    return 0;
}
