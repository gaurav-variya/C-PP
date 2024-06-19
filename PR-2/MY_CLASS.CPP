#include<iostream>

using namespace std;

class Train
{
private:
	int t_num,i,num;
	string name,source,destination,time;
	
public:
	
	void setdata(int n)
	{
		Train a[n];
		for(i=0;i<n;i++)
		{
			cout << endl << endl << "Enter Train Number : " ;
			cin >>a[i].t_num ;
			cout << "Enter Train Name : " ;
			cin >>a[i].name ;
			fflush(stdin);
			cout << "Enter Train Source : " ;
			cin >>a[i].source ;
			fflush(stdin);
			cout << "Enter Train Destination : " ;
			cin >>a[i].destination ;
			fflush(stdin);
			cout << "Enter Train Time : " ;
			cin >>a[i].time ;
		}
		getdata(a,n);
	}
	
	void getdata(Train a[],int n)
	{
		cout << endl << endl << "Train Details " << endl << endl ;
		for(i=0;i<n;i++)
		{
			cout << "Train Number : " <<a[i].t_num << endl ;
			cout << "Train Name : " <<a[i].name << endl ;
			cout << "Train Source : " <<a[i].source << endl ;
			cout << "Train Destination : " <<a[i].destination << endl ;
			cout << "Train Time : " <<a[i].time << endl ;
		}
		
		getdata2(a,n);
	}
	
	void getdata2(Train a[],int n)
	{
		cout << endl << endl << "Enter Any Train Number : " ;
		cin >> num ;
		
		for(i=0;i<n;i++)
		{
			if(a[i].t_num == num)
			{
				cout << endl << "Train Number : " <<a[i].t_num << endl ;
				cout << "Train Name : " <<a[i].name << endl ;
				cout << "Train Source : " <<a[i].source << endl ;
				cout << "Train Destination : " <<a[i].destination << endl ;
				cout << "Train Time : " <<a[i].time << endl ;
			}
		}	
	}
};
