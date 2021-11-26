#include<stdio.h>
int main ()
{
	
	int a,b,c;
	
	printf("Enter value of A =");
	scanf("%d", &a);
	printf("\nEnter value of B =");
	scanf("%d", &b);
	printf("\nEnter value of C =");
	scanf("%d", &c);
	
if(a>b&&a>c)
{
printf("\nA is the Greatest =%d",a);
}
else if(b>a&&b>c)
{
printf("\nB is the Greatest =%d",b);
}
else if(c>a&&c>b)
{
printf("\nC is the Greatest =%d",c);
}
else
{}	
return 0;
}
