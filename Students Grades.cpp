#include <stdio.h>
#include <conio.h> 
int main() 
{
   float grade;
   float students;
   float average;
   float total= 0;
   float gc= 1;
    printf("Enter The Number Of Students:\n",students);
    scanf("%f",&students);
while (gc <=students)
  {
  	printf ("\nEnter The Grade Of Students:\n");
  	scanf("%f", &grade);
  	total= total+grade;
  	gc++;
  if(grade==-1)
  break;
  }
  average=total/students;
  printf("\nClass Average is %f\n",average);
  return 0;
}
