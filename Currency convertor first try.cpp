#include<stdio.h>
#include<conio.h>
void main()
{
	float in;
	char cur,con;
	printf("Enter your value:\n");
	scanf("%f",&in);
	printf("Enter your currency:\n");
	getchar();
	scanf("%c",&cur);
	printf("Enter currency for conversion:\n");
	getchar();
	scanf("%c",&con);	
	if(cur=='P' && con=='I')
	{printf("\nYour rate after conversion is %.2f",in*1.72);}
	else if(cur=='P' && con=='D')
	{printf("\nYour rate after conversion is %.2f",in/110.59);}
	else if(cur=='P' && con=='E')
	{printf("\nyour rate after conversion is %.2f",in/135);}
	else if(cur=='P' && con=='R')
	{printf("\nYour rate after conversion is %.2f",in/29.45);}
	else if(cur=='P' && con=='U')
	{printf("\nYour rate after conversion is %.2f",in/30);}
	else if(cur=='P' && con=='K')
	{printf("\nYour rate after conversion is %.2f",in/368);}
	else if(cur=='I' && con=='P')
	{printf("\nYour rate after conversion is %.2f",in*1.72);}
	else if(cur=='I' && con=='D')
	{printf("\nYour rate after conversion is %.2f",in/110.59);}
	else if(cur=='I' && con=='E')
	{printf("\nYour rate after conversion is %.2f",in/135);}
	else if(cur=='I' && con=='R')
	{printf("\nYour rate after conversion is %.2f",in/29.45);}
	else if(cur=='I' && con=='U')
	{printf("\nYour rate after conversion is %.2f",in/30);}
	else if(cur=='I' && con=='K')
	{printf("\nYour rate after conversion is %.2f",in/368);}
	else if(cur=='D' && con=='P')
	{printf("\nYour rate after conversion is %.2f",in*110.59);}
	else if(cur=='D' && con=='I')
	{printf("\nYour rate after conversion is %.2f",in*110.59);}
	else if(cur=='D' && con=='E')
	{printf("\nYour rate after conversion is %.2f",in/135);}
	else if(cur=='D' && con=='R')
	{printf("\nYour rate after conversion is %.2f",in*29.45);}
	else if(cur=='D' && con=='U')
	{printf("\nYour rate after conversion is %.2f",in*30);}
	else if(cur=='D' && con=='K')
	{printf("\nYour rate after conversion is %.2f",in/368);}
	else if(cur=='E' && con=='P')
	{printf("\nYour rate after conversion is %.2f",in*135);}
	else if(cur=='E' && con=='I')
	{printf("\nYour rate after conversion is %.2f",in*135);}
	else if(cur=='E' && con=='D')
	{printf("\nYour rate after conversion is %.2f",in*110.59);}
	else if(cur=='E' && con=='R')
	{printf("\nYour rate after conversion is%.2f",in*29.45);}
	else if(cur=='E' && con=='d')
	{printf("\nYour rate after conversion is%.2f",in*30);}
	else if(cur=='E' && con=='K')
	{printf("\nYour rate after conversion is%.2f",in/368);}
	else if(cur=='R' && con=='P')
	{printf("\nYour rate after conversion is%.2f",in*29.45);}
	else if(cur=='R' && con=='I')
	{printf("\nYour rate after conversion is%.2f",in*29.45);}
	else if(cur=='R' && con=='D')
	{printf("\nYour rate after conversion is%.2f",in/110.59);}
	else if(cur=='R' && con=='E')
	{printf("\nYour rate after conversion is%.2f",in*135);}
	else if(cur=='R' && con=='U')
	{printf("\nYour rate after conversion is%.2f",in/30);}
	else if(cur=='R' && con=='K')
	{printf("\nYour rate after conversion is%.2f",in*368);}
	else if(cur=='U' && con=='P')
	{printf("\nYour rate after conversion is%.2f",in*30);}
	else if(cur=='U' && con=='I')
	{printf("\nYour rate after conversion is%.2f",in*30);}
	else if(cur=='U' && con=='E')
    {printf("\nYour rate after conversion is%.2f",in/135);}
	else if(cur=='U' && con=='R')
	{printf("\nYour rate after conversion is%.2f",in*29.45);}
	else if(cur=='U' && con=='K')
	{printf("\nYour rate after conversion is%.2f",in/368);}
	else if(cur=='K' && con=='P')
	{printf("\nYour rate after conversion is%.2f",in*368);}
	else if(cur=='K' && con=='I')
	{printf("\nYour rate after conversion is%.2f",in*368);}
	else if(cur=='K' && con=='D')
	{printf("\nYour rate after conversion is%.2f",in*368);}
	else if(cur=='K' && con=='E')
	{printf("\nYour rate after conversion is%.2f",in*368);}
	else if(cur=='K' && con=='R')
	{printf("\nYour rate after conversion is%.2f",in*368);}
	else if(cur=='K' && con=='U')
	{printf("\nYour rate after conversion is%.2f",in*368);}
	else
	{printf("\nInvalid conversion");}
getch ();
return 0;
}
