#include<iostream>
#include<cmath>
#include<string>
#include"labs2.h"
using namespace std;

int main ()
{
    ExampleInputOutput( );

    int x=5 , y=8;
    cout <<"The value of x = " << x << " and y = " << y << "\n"<< endl;
    swap_1(x,y); cout << "Let's call the function by passing values of x & y." <<endl;
    cout <<"Now, the value of x = " << x << " and y = " << y << "\n" << endl;

    swap_2(x,y); cout << "Let's call the function by passing references of x & y." <<endl;
    cout <<"See, the value of x = " << x << " and y = " << y << "\n" << endl;

    //Now we have x=8 and y=5

    int* addr_x = &x ; int* addr_y = &y;
    swap_3(addr_x,addr_y); cout << "Let's call the function by using pointers" <<endl;
    cout <<"The value of x = " << x << " and y = " << y << "\n" << endl;

    double p,o ;
    int a,b;
    cout << "Let's solve a complex number z, such that z = a + ib" << endl;
    cout << "Please enter any number for a " << endl;
    cin >> a ;
    cout << "Please enter any number for b  " << endl;
    cin >> b ;
    CartesianToPolar(a,b,p,o);
    cout << "For the complex number z, the modulus p = " << p << " and an angle Ø = " << o << "\n" << endl ;

    IsMultipleOf(10); //Calling the function without giving 2nd input paramater
    IsMultipleOf(10,3);

    cout << "Enter the number to be checked \n";
    int n_pr; cin >> n_pr;
    int result_pr=Prime(n_pr,n_pr-1);
    if(result_pr==1)
        cout<<"It's a prime number\n" << endl;
    else
        cout<<"It's not a prime number\n" << endl;

    ArraysExample1();

    cout<< "Enter the no of rows for pascal's triangle" << endl;
    int n; cin >> n;
    int Tab2[n][n];     //Static array
    int** Tab3 = new int*[n]; // Dynamic-array : These are our rows
    for(int i = 0; i < n; ++i)
        *(Tab3+i) = new int[n]; // and these are our columns. This makes our Tab3 a dynamically allocated nxn array

    //Set the first element for the first row to 1 and rest all to 0
    Tab2[0][0]=1;
    **Tab3=1;
    for (int i=1;i<n;i++)
    {
        Tab2[0][i]=0;
        *(*(Tab3+0)+i)=0;
    }

    for (int i=1;i<n;i++)
    {
        //Let's set all the values of first column to 1
        Tab2[i][0]=1;
        *(*(Tab3+i)+0)=1;
        //Put in the formula of every next element of Pascal-s traingle
        for (int j=1;j<n;j++)
        {
            Tab2[i][j]=Tab2[i-1][j]+Tab2[i-1][j-1];
            *(*(Tab3+i)+j)=*(*(Tab3+(i-1))+j)+*(*(Tab3+(i-1))+(j-1));
        }
    }

    //Let's print these arrays one by one
    cout << "Result from statically allocated array"<<endl;
    for (int i=0;i<n;i++)
    {
        for (int j=0; j<n;j++)
        {
            cout << Tab2[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Result from dynamically allocated array"<<endl;
    for (int i=0;i<n;i++)
    {
        for (int j=0; j<n;j++)
        {
            cout << *(*(Tab3+i)+j) << " ";
        }
        cout << endl;
    }

    //Randomly entered some values of A & B matrices
    int A[3][3]={{1,4,6},{3,4,5},{3,8,9}};
    int B[3][3]={{9,2,11},{12,19,10},{12,1,6}};
    //Set the values of all elements of C to 0
    int C[3][3];
    for(int i=0; i<3; i++)
            for(int j=0; j<3; j++)
            {
                C[i][j]=0;
            }
   MultMatrix(A,B,C); //Let's call the function
    // Let's print the contents of Matrix C now
   cout <<"The result of multiplication of two 3x3 matrcies is :" <<endl ;
   for(int i=0; i<3; i++)
   {
       for(int j=0; j<3; j++)
       {
           cout << "\t" << C[i][j];
       }
       cout << endl;
   }
    return 0;
}
