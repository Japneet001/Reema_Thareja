//write a program to calculate the distance between two points.
#include <stdio.h>
int main()
{
    int x1,x2,y1,y2;
    float D;
    printf("Enter co-ordinates of first point: ");
    scanf("%d %d",&x1,&y1);
    printf("Enter co-ordinates of second point: ");
    scanf("%d %d",&x2,&y2);
    D=pow((pow((x1-x2),2)+pow((y1-y2),2)),0.5);
    printf("Distace between (%d,%d) and (%d,%d) is %.2f",x1,y1,x2,y2,D);
    return 0;
}
