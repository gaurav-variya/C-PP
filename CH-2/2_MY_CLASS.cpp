#include<iostream>

using namespace std;

class Car
{
private:
    
    int id,year;
    string  C_name, color, model;

public:
    void setdata2()
    {
        Car c[4];
        int i;

        for(i=0;i<4;i++)
        {
             cout << "Enter Car- "<< i+1 <<" Id : ";
             cin >> c[i].id;
             cout << "Enter Car- "<< i+1 <<" Company Name : ";
             cin >> c[i].C_name;
             cout << "Enter Car- "<< i+1 <<" Color : ";
             cin >> c[i].color;
             cout << "Enter Car- "<< i+1 <<" Model : ";
             cin >> c[i].model;
             cout << "Enter Car- "<< i+1 <<" Release Year : ";
             cin >> c[i].year;
             cout << endl << endl << "";
        }

        cout << endl << endl << "--CAR DATA--"<< endl << endl ;
        getdata2(0,c);
    }

    void getdata2(int i,Car c[])
    {
        for(i=0;i<4;i++)
        {
            cout << "Car-"<< i+1 << "Id : "<< c[i].id << "" << endl ;
            cout << "Car-"<< i+1 << "Company Name : "<< c[i].C_name << "" << endl ;
            cout << "Car-"<< i+1 << "Color : "<< c[i].color << "" << endl ;
            cout << "Car-"<< i+1 << "Model : "<< c[i].model << "" << endl ;
            cout << "Car-"<< i+1 << "Release Year : "<< c[i].year << "" << endl << endl ;  
        }
    }
};
