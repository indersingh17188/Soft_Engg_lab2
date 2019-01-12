#include<iostream>
#include<cmath>
#include<string>
#include"labs2.h"
using namespace std;

void ExampleInputOutput( )
{
    string user_name;
    cout <<"Enter your name : " << endl;
    getline (cin, user_name);
    cout <<"Welcome, " << user_name << endl;
}

void swap_1(int n1, int n2)
{
   int n_temp;
   n_temp=n1; n1=n2; n2=n_temp;
}

void swap_2(int &n1, int &n2)
{
    int n_temp;
    n_temp=n1; n1=n2; n2=n_temp;
}

void swap_3(int* n1, int* n2)
{
    int n_temp;
    n_temp=*n1; *n1=*n2; *n2=n_temp;
}

void CartesianToPolar(int a, int b, double &p, double &o)
{
    cout << " z = " << a << "+ i" << b << endl;
    p = sqrt( (a * a) + (b * b) );
    o = atan2( b , a);
}

void IsMultipleOf (int p, int q)
{
    if (p%q == 0) cout << p << " is a multiple of " << q << endl;
    else cout << p << " is not a multiple of " << q << endl;
}

bool Prime(int x,int y)
{
    if(x%y==0&&y!=1)
        return false;
    else{
        if(y==1)
            return true;
        else
            return Prime(x,y-1); //Recursive function, will run until we find out until x has any diviser other than 1
        }
}

void ArraysExample1()
{
    int s_array[10]; //Declared a static array
    int* d_array = new int [10]; //Declared a dynamic array
    cout << "The contents of static array are : " <<endl;
    for (int i=0;i<10;i++)
    {
       s_array[i]=i; //Storing the value i at every i index of the array
        cout << s_array[i] << "\t";
    }
    cout << "\n" ;
    cout << "The contents of dynamic array are : " <<endl;
    for (int i=0;i<10;i++)
    {
       *(d_array+i)=i;
        cout << *(d_array+i) << "\t";
    }
    cout << "\n" ;
    delete [] d_array;
}


void MultMatrix(int a[][3], int b[][3], int c[][3])
{
    for(int i = 0; i < 3; ++i)
            for(int j = 0; j < 3; ++j)
                for(int k = 0; k < 3; ++k)
                {
                    c[i][j] += a[i][k] * b[k][j];
                }
}
