#include"myfunctions.cpp"

using namespace std;

#include"myfunctions.cpp"

class Divide
{
private:
    int x,y;
public:
    Divide()
    {
        cout << "Enter First Number : " ;
        x  = getint();
        cout << "Enter Second Number : " ;
        y  = getint();
        
        try
        {
            if(y == 0)
            {
                throw y;
            }
            else
            {
                cout << "Result : " << x/y << endl;
            }
        }
        catch(...)
        {
            cout << endl << "Cannot Divided By Zero !" << endl << endl;
        }
    }
};

class Vote
{
private:
    int age;
public:
    Vote()
    {
        cout << "Enter Your Age : " ;
        age = getint();

        try
        {
            if(age < 18)
            {
                throw 0;
            }
            else
            {
                cout << endl << "You Are Eligible To Vote!" << endl;
            }
        }
        catch(int n)
        {
            cout << endl << " You Are Not Eligible To Vote !! " << 18 - age << " Years "<< endl << endl;
        }
    }
};
