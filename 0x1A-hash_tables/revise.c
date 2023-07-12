#include <stdio.h>
#include <stdlib.h>

struct Point
{
   int x, y;
};
 
int main()
{
//    struct Point p1 = {0,1};
//    //accessing members of point p1
//    p1.x = 20;
//    printf("x = %d, y = %d", p1.x, p1.y);
//    struct Point p1 = {.y = 0, .x =20};
//    struct Point p2 = {.y = 21, .x =22};
//    printf ("x = %d, y = %d\n", p1.x, p1.y);
//    printf ("x = %d", p2.x);
    struct Point p1 ={3, 4};
    struct Point *p2 = &p1;

    //accessing the structure members using structure pointers
    printf("%d %d", p2->x, p2->y); 
    

   return 0;
}