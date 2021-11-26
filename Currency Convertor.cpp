#include<stdio.h>
#include<conio.h>
int main()
{
	float in;
	char cur,con;
	printf("Enter Your Value=\n");
	scanf("%f",&in);
	printf("Enter Currency You Have Given Output In=\n");
	getchar();
	scanf("%c",&cur);
	printf("Enter Currency You Want To Convert In=\n");
	getchar();
	scanf("%c",&con);	
	cur=='P' && con=='I' ? printf("\nYour rate after conversion is %.2f",in*1.72) : printf("");
	cur=='P' && con=='D' ? printf("\nYour rate after conversion is %.2f",in*110.59) : printf(""); 
	cur=='P' && con=='E' ? printf("\nyour rate after conversion is %.2f",in*135) : printf("");
	cur=='P' && con=='R' ? printf("\nYour rate after conversion is %.2f",in*29.45) : printf("");
	cur=='P' && con=='U' ? printf("\nYour rate after conversion is %.2f",in*30) : printf("");
	cur=='P' && con=='K' ? printf("\nYour rate after conversion is %.2f",in*368) : printf("");
	cur=='I' && con=='P' ? printf("\nYour rate after conversion is %.2f",in/1.72) : printf("");
	cur=='I' && con=='D' ? printf("\nYour rate after conversion is %.2f",(in*1.72)/110.59) : printf("");
	cur=='I' && con=='E' ? printf("\nYour rate after conversion is %.2f",(in*1.72)/135) : printf(""); 
	cur=='I' && con=='R' ? printf("\nYour rate after conversion is %.2f",(in*1.72)/29.45) : printf("");
	cur=='I' && con=='U' ? printf("\nYour rate after conversion is %.2f",(in*1.72)/30) : printf("");
	cur=='I' && con=='K' ? printf("\nYour rate after conversion is %.2f",(in*1.72)/368) : printf("");
	cur=='D' && con=='P' ? printf("\nYour rate after conversion is %.2f",in/110.59) : printf("");
	cur=='D' && con=='I' ? printf("\nYour rate after conversion is %.2f",(in*110.59)/1.72) : printf("");
	cur=='D' && con=='E' ? printf("\nYour rate after conversion is %.2f",(in*110.59)/135) : printf("");
	cur=='D' && con=='R' ? printf("\nYour rate after conversion is %.2f",(in*110.59)/29.45) : printf("");
	cur=='D' && con=='U' ? printf("\nYour rate after conversion is %.2f",(in*110.59)/30) : printf("");
	cur=='D' && con=='K' ? printf("\nYour rate after conversion is %.2f",(in*110.59)/368) : printf("");
	cur=='E' && con=='P' ? printf("\nYour rate after conversion is %.2f",in/135) : printf("");
	cur=='E' && con=='I' ? printf("\nYour rate after conversion is %.2f",(in*135)/1.72) : printf("");
	cur=='E' && con=='D' ? printf("\nYour rate after conversion is %.2f",(in*135)/110.35) : printf("");
	cur=='E' && con=='R' ? printf("\nYour rate after conversion is %.2f",(in*135)/29.45) : printf("");
	cur=='E' && con=='U' ? printf("\nYour rate after conversion is %.2f",(in*135)/30) : printf("");
	cur=='E' && con=='K' ? printf("\nYour rate after conversion is %.2f",(in*135)/368) : printf("");
    cur=='R' && con=='P' ? printf("\nYour rate after conversion is%.2f",in/29.45) : printf("");
	cur=='R' && con=='I' ? printf("\nYour rate after conversion is%.2f",(in*29.45)/1.72) : printf("");
	cur=='R' && con=='D' ? printf("\nYour rate after conversion is%.2f",(in*29.45)/110.35) : printf("");
	cur=='R' && con=='E' ? printf("\nYour rate after conversion is%.2f",(in*29.45)/135) : printf("");
	cur=='R' && con=='U' ? printf("\nYour rate after conversion is%.2f",(in*29.45)/30) : printf("");
	cur=='R' && con=='K' ? printf("\nYour rate after conversion is%.2f",(in*29.45)/368) : printf("");
    cur=='U' && con=='P' ? printf("\nYour rate after conversion is%.2f",in/30) : printf("");
	cur=='U' && con=='I' ? printf("\nYour rate after conversion is%.2f",(in*30)/1.72) : printf("");
	cur=='U' && con=='D' ? printf("\nYour rate after conversion is%.2f",(in*30)/110.35) : printf("");
	cur=='U' && con=='E' ? printf("\nYour rate after conversion is%.2f",(in*30)/135) : printf("");
	cur=='U' && con=='R' ? printf("\nYour rate after conversion is%.2f",(in*30)/29.45) : printf("");
	cur=='U' && con=='K' ? printf("\nYour rate after conversion is%.2f",(in*30)/368) : printf("");
	cur=='K' && con=='P' ? printf("\nYour rate after conversion is%.2f",in/368) : printf(""); 
	cur=='K' && con=='I' ? printf("\nYour rate after conversion is%.2f",(in*368)/1.72) : printf("");
	cur=='K' && con=='D' ? printf("\nYour rate after conversion is%.2f",(in*368)/110.35) : printf("");
	cur=='K' && con=='E' ? printf("\nYour rate after conversion is%.2f",(in*368)/135) : printf("");
	cur=='K' && con=='R' ? printf("\nYour rate after conversion is%.2f",(in*368)/29.45) : printf("");
	cur=='K' && con=='U' ? printf("\nYour rate after conversion is%.2f",(in*368)/30) : printf("");
	getch();
    return 0;
}
