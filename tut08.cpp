#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    /**********CONSTANTS IN C++ ************/
    int a = 10;
    cout<<"Here the value of variable a is : " <<a <<endl;
    a = 020;        //re-assigning value for variable a.
    cout<< "The value of variable a is changed into : " <<a <<endl;

    //we can use const to make it constant so that it cannot be changed:
    const int b = 22;
    const float pi = 3.14;

    cout<<"Here the value of variable b is : " <<b <<endl;    //here we cannot re-assign any value for int b, it will throw an error if we will try.
    cout<<"Here the value of pi is : " <<pi <<endl;

    cout<<endl;

    /***********MANIPULATORS IN C++ --> included from iomanip**********/
    
    int l=11, m=120, n=4021;
    cout<< "The value of l without setw is : " <<l <<endl;
    cout<< "The value of m without setw is : " <<m <<endl;
    cout<< "The value of n without setw is : " <<n <<endl;

    //we will use setw() to set width or right alignment of 5 digits. 
    cout<< "The value of l is : " <<setw(5) <<l <<endl;
    cout<< "The value of m is : " <<setw(5) <<m <<endl;
    cout<< "The value of n is : " <<setw(5) <<n <<endl;


    /*******OPERATOR PRECEDENCE*********/
    // for more information we can visit en.cppreference.com

    int x= 21, y=11;
    int z = x*5+y;
    cout<<z <<endl;

    return 0;
}
