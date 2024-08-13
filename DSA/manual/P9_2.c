// simple structure program using pointer.
#include <stdio.h>
#include <stdlib.h>

struct Point
{
    int x, y;
};

int main()
{
    struct Point point_1;
    struct Point point_2;

    struct Point *p1 = &point_1;
    struct Point *p2 = &point_2;

    printf("Enter x & y of point 1: ");
    scanf("%d,%d", &p1->x, &p1->y);
    printf("Enter x & y of point 2: ");
    scanf("%d,%d", &p2->x, &p2->y);

    printf("Point 1: ( %d , %d )\n", p1->x, p1->y);
    printf("Point 2: ( %d , %d )\n", p2->x, p2->y);

    return 0;
}