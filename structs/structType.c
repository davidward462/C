#include <stdio.h>
#define LABEL_LEN 32
typedef struct
{
    int x;
    int y;
    char label[LABEL_LEN+1];
} point;

int main()
{   point p0 = {0, 0, "zeta"};
    return 0;
}
