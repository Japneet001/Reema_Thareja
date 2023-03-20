//Write a program to determine the character entered by the user.
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c",&ch);
    if((ch>'A'&&ch<'Z')||(ch>'a'&&ch<'z')){
        printf("%c is an alphabet",ch);
    }
    else if(ch>'0'&&ch<'9'){
        printf("%c is a numerical value",ch);
    }
    else{
        printf("%c is a special character",ch);
    }
    return 0;
}
