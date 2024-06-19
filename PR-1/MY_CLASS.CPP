#include<iostream>

using namespace std;

class Time
{
public:
    int second;

    void set_get2()
    {
        Time t;
        int h=0,m=0,s=0;

        cout << "Enter Secons : " ;
        cin >> t.second ;

        h = t.second / 3600 ;
        m = (t.second % 3600) / 60 ;
        s = ((t.second % 3600) % 60);

        cout << "Time => "<< h << ":" << m << ":"<< s << "";
    }
};
