#include<iostream>

using namespace std;

class RBI
{
protected:
		  double rate = 6.5;

public:
	   void grtRoi()
	   {
	   		cout  << endl << endl << "Bank : RBI " << endl
	   		     << "Rate Of Interrest : "  << rate  << "%" ;
	   }
};


class SBI : public RBI
{
public:
	   void grtRoi()
	   {
	   		cout << endl << endl << "Bank : SBI " << endl
	   		     << "Rate Of Interrest : "  << rate + 1  << "%" ;
	   }
};


class BOI : public RBI
{
public:
	   void grtRoi()
	   {
	   		cout << endl << endl << "Bank : BOI " << endl
	   		     << "Rate Of Interrest : "  << rate + 1.25  << "%" ;
	   }
};

class ICICI : public RBI
{
public:
	   void grtRoi()
	   {
	   		cout << endl << endl << "Bank : ICICI " << endl
	   		     << "Rate Of Interrest : "  << rate + 1.75  << "%" ;
	   }
};

