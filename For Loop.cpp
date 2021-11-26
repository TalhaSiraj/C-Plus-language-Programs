#include<stdio.h>
int main ()
{	
	int init_value,end_value,a;
	
	printf("Enter value of A\n");
	scanf("%d", &init_value);
	printf("Enter value of B\n");
	scanf("%d", &end_value);
	
	for(a=init_value; a<=end_value; a++)
{
	printf("%d\n",a);
}
return 0;
}
	
	
