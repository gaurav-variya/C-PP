#include <iostream>

using namespace std;

int main()
{
    int fy, ey,n=0,i;

    cout << "ENTER FIRST YEAR  :";
    cin >> fy;

    cout << "ENTER LAST YEAR  :";
    cin >> ey;
    
    int a[100];

    
    for(i=fy;i<ey;i++)
    {
        if (i % 4 == 0)
        {	
            a[n] = i;
            n++;
        }
    }
    
    cout <<"LEEP YEAR : ";
    for(i=0;i<n;i++)
    {
    	cout << a[i] << ",";
	}

    return 0;
}
