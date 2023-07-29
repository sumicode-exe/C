#include <stdio.h>
#include <stdlib.h>

int MAX_HEIGHT = 41;

struct box
{
    int length, width, height;
};

typedef struct box box;

int get_volume(box b)
{
    return (b.length * b.width * b.height);
}

int is_lower_than_max_height(box b)
{
    return ((MAX_HEIGHT > b.height) ? 1 : 0);
}

