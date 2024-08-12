// simple structure program using pointer.
#include <stdio.h>
#include <stdlib.h>

struct Point
{
    int x, y;
};

int main()
{
    struct Point *p1;
    struct Point *p2;

    p1 = (struct Point *)malloc(sizeof(struct Point));
    p2 = (struct Point *)malloc(sizeof(struct Point));

    printf("Enter x & y of point 1: ");
    scanf("%d,%d", &p1->x, &p1->y);
    printf("Enter x & y of point 2: ");
    scanf("%d,%d", &p2->x, &p2->y);

    printf("Point 1: ( %d , %d )\n", p1->x, p1->y);
    printf("Point 2: ( %d , %d )\n", p2->x, p2->y);

    return 0;
}