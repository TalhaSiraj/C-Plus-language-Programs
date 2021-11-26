#include<stdio.h>
#include<conio.h>
int main ()
{
	char name,fucal,gender;
	int bp,hr,ca,sa,tc,ita;
	float gross,taxable,taxline,taxed,incometax,gp,bf,gi;
	printf("*****Salary Calculation*****\n");
	printf("Enter The Name=");
	scanf("%s",&name);
	printf("\nFaculty for computer select C,For teacher select T,For other select O=");
	getchar();
	scanf("%c",&fucal);
	printf("\nFor male select M,For female select F=");
	getchar();
	scanf("%c",&gender);
	printf("\nBasic Pay=");
	scanf("%d",&bp);
	printf("\nHouse Rent=");
	scanf("%d",&hr);
	printf("\nConvenience Allownce=");
	scanf("%d",&ca);
	printf("\nSummer Allownce=");
	scanf("%d",&sa);
if(fucal=='C')
{
	printf("\nIT Allownce=");
	scanf("%d",&ita);
}
else if(fucal=='T')
{
	printf("\nTeacher Allownce=");
	scanf("%d",&tc);
}
else if(fucal=='O')
{
}
else
{
	printf("\nInvalid Fucality");
}

 taxable=bp+ca+sa+ita+tc;
 taxline=taxable*12;
 
    if(taxline  >= 100000&&taxline <= 200000)
    {
        gross  = taxline * 0.03;
    }
    else if(taxline  >= 200000&&taxline <= 300000)
    {
        gross  = taxline * 0.05;
    }
    else if(taxline  >= 300000&&taxline <= 400000)
    {
        gross  = taxline * 0.075;
    }
    else if(taxline  >= 400000&&taxline <= 600000)
    {
        gross  = taxline * 0.085;
    }
    else if(taxline  >= 600000&&taxline <= 1000000)
    {
        gross  = taxline * 0.103;
    }
     else if(taxline >= 1000000)
    {
        gross  = taxline * 0.15;
    }
    else
    {
    	printf("");
	}
printf("\nSALARY=");
printf("\nBasic Pay=%d",bp);
printf("\nHouse Rent=%d",hr);
printf("\nconvenience Allownce=%d",ca);
printf("\nSummer Allownce=%d",sa);
if(fucal=='C')
{
	printf("\nIT Allownce=%d",ita);
}
else if(fucal=='T')
{
	printf("\nTeacher Allownce=%d",tc);
}
else
{
	printf("");
}
printf("\nGross Salary=%d",bp+hr+ca+sa+ita+tc);
printf("\nDEDECTION=");
printf("\nG.P Fund=%f",gp=bp*0.04);
printf("\nB.F Fund=%f",bf=bp*0.02);
printf("\nG.Ins Fund=%f",gi=bp*0.03);
if(gender=='F')
{
	if(gender=='F'&&fucal=='T')
	{
   printf("\nIncome Tax=%f",incometax=0);
    }
    else
    {
    printf("\nIncome Tax=%f",incometax=(gross/12)*0.75);	
    }
}
else if(fucal=='T')
{
printf("\nIncome Tax=%f",incometax=(gross/12)*0.25);	
}
else
{
printf("\nIncome Tax=%f",incometax=gross/12);	
}

printf("\nTOTAL INCOME=");
printf("\nTotal Salary This Month=%f",((taxable-incometax)+hr)-(gp+gi+bf));
getch ();
return 0;
	
	
	
	
}

