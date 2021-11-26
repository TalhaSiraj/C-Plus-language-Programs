#include<iostream>
#include<string>
using namespace std;
class Truck{
private:	
string companyname;
string modelnumber;
double price;
public:
void setdata(string company, string model,double pri){
companyname=company;
modelnumber=model;
price=pri;	
}
void displaydata()
{
	cout<<"Name :"<<companyname<<endl;
	cout<<"Model :"<<modelnumber<<endl;
	cout<<"Price :"<<price <<endl;
	}	
};
int main()
{
	Truck obj;
	obj.setdata("Tesla","KGT1006",13450.87);
	obj.displaydata();
	
	return 0;	
}

