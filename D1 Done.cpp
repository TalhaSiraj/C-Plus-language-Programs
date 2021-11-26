#include<iostream>
using namespace std;
int main()
{
int a,b,c;
    a=4;
    while(a>=1)
    {
    	b=4;
    	while(b>=a)
		{
			cout<<" ";
			b--;
		}
			c=1;
			while(c<=2*a-1)
		{	
			cout<<"*";
			c++;
		}
	cout<<"\n";
	a--;
	}
return 0;
}
