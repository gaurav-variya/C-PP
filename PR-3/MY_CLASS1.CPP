#include<iostream>

using namespace std;

class A
{
protected:
		  int id,exp;
		  double salary;
		  string name,role,con,cmp,add,email;

public:
	   void seta()
	   {
	   		cout << "Enter Employee ID : ";
	   		cin >> id;
	   		cout << "Enter Employee NAME  : ";
	   		cin >> name;
	   		cout << "Enter Employee ROLE : ";
	   		cin >> role;
	   }
};

class B : public A
{
public:
	   void setb()
	   {
	   		cout << "Enter Employee SALARY : ";
	   		cin >> salary;
	   		cout << "Enter Employee  EXPERIENCE [yera] : ";
	   		cin >> exp;
	   }
	
};
class C : public B
{
public:
	   void setc()
	   {
	   		cout << "Enter Employee COMPANY NAME  : ";
	   		cin >> cmp;
	   		cout << "Enter Employee  ADDRESS : ";
	   		cin >> add;
	   }
	   
	   void getc()
	   {
	   	 cout << "Employee NAME : " << name << endl
	   	      << "Employee ROLE : " << role << endl
	   	      << "Employee SALARY : " << salary << endl ;
	   }
	
};

class D : public C
{
public:
	   void setd()
	   {
	   		cout << "Enter Employee EMAIL  : ";
	   		cin >> email;
	   		cout << "Enter Employee  CONTACT NO  : ";
	   		cin >> con;
	   }
	   
	   void getd()
	   {
	   	 cout << "Employee ID : " << id << endl
	   	      << "Employee NAME  : " << name  << endl
	   	      << "Employee ROLE : " << role  << endl 
	   	      << "Employee SALARY : " << role  << endl
			  << "Employee COMPANY NAME : " << role  << endl 
			  << "Employee EXPERIENCE [yera] : " << role  << endl 
			  << "Employee ADDRESS: " << role  << endl 
			  << "Employee EMAIL : " << role  << endl 
			  << "Employee CONTACT NO  : " << role  << endl ; 
	   }
	
};
