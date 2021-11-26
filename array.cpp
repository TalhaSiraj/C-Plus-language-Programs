#include <iostream>
using namespace std;
int main()
{
  int a[2][2],b[2][2],c[2][2],d,e,f;
  	for(d=0;d<2;d++)
  	{
    	for(e=0;e<2;e++)
    	{
      	cout<<"\nThe Values Of 1st Matrix=";
      	cin>>a[d][e];
    	}
  	}
  	for(d=0;d<2;d++)
  	{
    	for(e=0;e<2;e++)
    	{
      	cout<<"\nThe Values of 2nd Matrix=";
      	cin>>b[d][e];
    	}
  	}
  	for(d=0;d<2;d++)
  	{
    	for(f=0;f<2;f++)
    	{
      		if(d==0&&f==0)
      		{
        	c[0][0]=a[0][0]*b[0][0]+a[0][1]*b[1][0];
      		}
      		if(d==0&&f==1)
      		{
        	c[0][1]=a[0][0]*b[0][1]+a[0][1]*b[1][1];
      		}
      		if(d==1&&f==0)
      		{
        	c[1][0]=a[1][0]*b[0][0]+a[1][1]*b[1][0];
      		}
      		if(d==1&&f==1)
      		{
        	c[1][1]=a[1][0]*b[0][1]+a[1][1]*b[1][1];
      		} 
    	}
  	}	 
  	for(d=0;d<2;d++)
  	{
    	for(e=0;e<2;e++)
    	{
      	cout<<"\nThe Values of Are Matrix="<<c[d][e];
    	}
  	}
	return 0;
}  	
