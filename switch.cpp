#include<stdio.h>
int main ()
{	
	int a,b,c;
	char op;
	
	printf("Enter Value Of A\n");
	scanf("%d", &a);
	
	printf("Enter Value Of B\n");
	scanf("%d", &b);
	
	printf("Enter The Character\n");
	getchar();
	scanf("%c",&op);
	
	
switch (op)
{
	case '+':
	c=a+b;
	break;
	
	case '-':
    c=a-b;
    break;
    
    case '*':
    c=a*b;
    break;
    
    case '/':
    c=a/b;
    break;
}
printf("\nAnswer=%d",c);
	return 0;
}
