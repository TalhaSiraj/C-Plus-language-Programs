#include<stdio.h>
int main()
{
    int a,n,largest,smallest,element;
    printf ("Enter Total number of elements \n");
    scanf ("%d", &element);
    printf ("Enter First number \n");
    scanf ("%d", &n);
    largest=n;
    smallest=n;
    for (a=1; a<= element-1 ; a++)
    {
        printf ("\nEnter Another number \n");
        scanf ("%d",&n);
        if (n>largest)
        largest=n;
        if (n<smallest)
        smallest=n;
    }
    printf ("\nThe largest number is %d",largest);
    printf ("\nThe smallest number is %d",smallest);
    
    return 0;
}
