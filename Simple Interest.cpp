#include<stdio.h>
#include<conio.h>
int main ()
{
int P,R,T,SI;
    printf("\t\t\t\t\t*****The Simple Intrest*****\n\n");
    printf("FOR The Required Value Use 0\n");
	printf("The value of P=\n");
	scanf("%d",&P);
	printf("The value of R=\n");
	scanf("%d",&R);
	printf("The value of T=\n");
	scanf("%d",&T);
	printf("The value of SI=\n");
	scanf("%d",&SI);
	
	if (SI==0)
	{
	printf("The S.I is=%d",P*R/100*T);
}
else if (T==0)
{
		printf("The T is=%d",SI/(P*R/100));
}
else if (R==0)
{
		printf("The R is=%d",(100/(P/SI)*T));
}
else if (P==0)
{
		printf("The P is=%d",((100/R)*T)*30);
}
else 
{
		printf("Invaled Information");
}
getch ();
return 0;
}
