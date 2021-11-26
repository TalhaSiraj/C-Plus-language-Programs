#include <stdio.h>
#include <conio.h> 
int main() 
{
   float grade;
   float average;
   float total= 0;
   float gc= 1;
while (gc <= 10)
  {
  	printf ("Enter The Grade Of Ten Students:\n");
  	scanf("%f", &grade);
  	total= total+grade;
  	gc++;
  if(grade==-1)
  break;
  }
  average=total/10;
  printf("\nClass Average is %f\n",average);
  return 0;
}
