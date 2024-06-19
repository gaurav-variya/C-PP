#include<iostream>

using namespace std;

class shape 
{
protected:
	      double h,w;
	    
public:
	   shape()
	   {
	   		cout << "Enter Height Of Shape : ";
	   		cin >> h;
	   		cout << "Enter Width Of Shape : ";
	   		cin >> w;
	   }
};

class Triangle : public shape
{
public: 
       void area()
       {
       		cout << "Area Of Triangle : " << (h * w) / 2 << endl;
	   }
       
};

class Rectangle : public shape
{
	
	
	
public: 
       void area()
       {
       		cout << "Area Of Rectangle : " << h * w << endl ;
	   }
       
};


