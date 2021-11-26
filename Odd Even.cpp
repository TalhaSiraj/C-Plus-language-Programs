#include <stdio.h>
#include <conio.h>
int main()
{
    int a;
    printf("Enter Required Number:");
    scanf("%d", &a);
    if( a % 2 == 0)
{
    printf("%d Is Even.",a);
}
    else
{
    printf("%d Is Odd.",a);		
}
getch ();
return 0;
}

