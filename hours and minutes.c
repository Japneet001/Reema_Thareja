//write a program to find the number of hours and minutes, if user inputs some minutes.
#include <stdio.h>
int main()
{
    int min,minutes,hours;
    printf("Enter minutes: ");
    scanf("%d",&min);
    hours=min/60;
    minutes=min%60;
    printf("%d minutes= %d hrs and %d minutes",min,hours,minutes);
    return 0;
}
