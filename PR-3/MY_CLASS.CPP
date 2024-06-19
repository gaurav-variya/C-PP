#include<iostream>

using namespace std;


class num
{
protected:
	
	      int n;
public:
	   void setNum()
	   {
			cout << "Enter Any Number : " ;
			cin >> n;	   	
	   }
};

class Square : public num
{
public:
	   void getsquare()
	   {
	   	 cout << "Square of " << n << " Is : " << n*n << endl ;
	   }
};

class Cube : public num
{
public:
	   void getcube()
	   {
	   	 cout << "cube of " << n << " Is  : " << n*n*n << endl ;
	   }
};
