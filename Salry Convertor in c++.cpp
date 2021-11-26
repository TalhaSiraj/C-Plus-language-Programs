
#include<iostream>   
#include<conio.h>          
using namespace std;
int  main ()           //Void command
{
	
	char name[20],gender,faculity;           //Character Command
	char M,F;                            //male and Femlae
	char T,C,O;                          //Teacer,Computer,Other  
	

	float BP;            //Basic pay
	float HR;            //House rent
	float CA;            //Convence allowence
	float TA;            //Teaching allowence
	float COMA;          //Computer allowance
	float SA;            //Summer allowance
	float OT;            //Other faculity
	float TX;            //Tax
	float GA;            //Gross amount
	float TL;            //TaxLine
	float AS;            //Annual Salary
	float taxable;       //taxable amount
	float it;            //Income tax
	float GP;            //GP fund
	float BF;            //BasicFund
	float GI;            //GroupInsurence 
	float tax;           //tax 
	
	
	cout<<"\n\n========Total Salary Calculation from Zeus Company===========\n\n";     //print Command
	
	cout<<"name : "<<endl;
	getchar();
	cin>>name;
	          //Scan Command
	
	cout<<"\nChoose gender from Male, From Female :"<<endl;
	getchar();
	cin>>gender;
	
	
	cout<<"\nchoose faculity of Computer,of Teaching, of Other :"<<endl;
	getchar();
	cin>>faculity;
	
		
	switch (faculity)          //Faculity Condition
	{
	case 'T':
	cout<<"\nEnter y our teaching allowance";
	cin>>TA;
		
	cout<<"\nbasic pay : ";
	cin>>BP;
	
	cout<<"\nHouse rent : ";
	cin>>HR;
	
	cout<<"\nConvence allowance : ";
	cin>>CA;
	
	cout<<"\nTeaching allowance : ";
	cin>>TA;
	
	cout<<"\nSummer allowance : ";
	cin>>SA;
	break ;
		
	case 'C' :         //Else statement
	
	cout<<"\n\t\tbasic pay : ";
	cin>>BP;
	
	cout<<"\n\t\tHouse rent : ";
	cin>>HR;
	
	cout<<"\n\t\tConvence allowance : ";
	cin>>CA;
	
	cout<<"\n\t\tComputer allowance : ";
	cin>>COMA;
	
	cout<<"\n\t\tSummer allowance : ";
	cin>>SA;
	break;	
	
	case 'O' :              //Other Faculity
	
	cout<<"\n\t\tEnter your Other faculity ";
	cin>>OT;
		
	cout<<"\n\t\tbasic pay : ";
	cin>>BP;
	
	cout<<"\n\t\tHouse rent : ";
	cin>>HR;
	
	cout<<"\n\t\tConvence allowance : ";
	cin>>CA;
	
	cout<<"\n\t\tSummer allowance : ";
	cin>>SA;
	break;
	default:
	
		cout<<"Statement Not Valid/Wrong Statement";         //Inavlid statement
}
	GA= BP+CA+TA+COMA+SA;          //Gross/AnualSalary
	taxable= GA*12;                        //Formula for tax
	
	if (taxable>=100000 && taxable<=200000)                     //Less then and greater than 
	{
		it= (taxable*0.03);              //Formula for income tax 
	}
	else if (taxable>=200001 && taxable<=300000)
	{
		it= (taxable*0.05);		
	}
	else if (taxable>=300001 && taxable<=400000)
	{
		it=(taxable*0.075);	
	}
    else if (taxable>=400001 && taxable<=600000)
    {
    	it= (taxable*0.085);
	}
	else if (taxable>=600001 && taxable<=1000000)
	{
		it= (taxable*0.103);
	}
	else if (taxable>=1000000)
	{
		it= (taxable*0.15);
	}
	else 
	{
		cout<<"Statement not valid/Wrong Statement";
	}
	GP=BP*0.04;
    cout<<"\n\t\tGP fund will be "<<GP ;
	BF=BP*0.02 ;   
	cout<<"\n\t\tBF fund will be "<< BF ; 
	 GI=BP*0.03 ;  //BFFund
	cout<<"\n\t\tGI fund will be "<< GI ;     //GroupInsurance
	
	if (gender=='F')
	{
		if(gender=='F' && faculity=='T')
		{
			tax=0;
		   cout<<"\n\t\tIncome tax will be "<<tax;
		}
		else
		{
			tax=(it/12)*0.25 ;
			cout<<"\n\t\tIncome tax will be "<<tax ;
		}
	}
	else if (faculity=='T')
	{
	tax=(it/12)*0.75;
		cout<<"\n\t\tincome tax will be "<<tax;
	}
	else
	{
		tax=(it/12)*0.25 ;
		cout<<"\n\t\tIncome tax will be "<<tax;
	}
	
	if (faculity=='C')
	{
		cout<<"\n\t\tMonthly Income will be "<< (GA+HR)-(tax+GP+BF+GI) ; 
	}
	else if(faculity=='T')
	{
		cout<<"\n\t\tMonthly Income will be "<<(GA+HR)-(tax+GP+BF+GI) ; 
	}
	else if(faculity=='O')
	{
		cout<<"\n\t\tMonthly Income will be "<< (GA+HR)-(tax+GP+BF+GI) ; 
	}
	else
	{
	}
      
	
	
	
	
	return 0;
	
}
