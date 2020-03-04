// Headers and operators

/*
There are two types of header files :
1. System header files: It comes with the compiler.
2. User defined deader files: It is written by the programmer.
*/

#include<iostream>
using namespace std;

int main()
{
    int a=4, b=5;
    cout<<"Operators in C++"<<endl;
    cout<<"Following are the types of oprators in C++"<<endl;

    // Arithmetic operators
    cout<<"The value of a + b is "<< a+b<<endl;
    cout<<"The value of a - b is "<< a-b<<endl;
    cout<<"The value of a * b is "<< a*b<<endl;
    cout<<"The value of a / b is "<< a/b<<endl;
    cout<<"The value of a % b is "<< a%b<<endl;
    cout<<"The value of a++ is "<< a++<<endl;
    cout<<"The value of a-- is "<< a--<<endl;
    cout<<"The value of ++ais "<< ++a<<endl;
    cout<<"The value of --a is "<< --a<<endl;
    cout<<endl;

    /*  Assignment operators --> are used to assign values to the variables such as
    int a = 3, b =5; "OR" char x = 'U';
    */



    // Comparison operators --> it will show true or false in binary form such as 0 ot 1:
    cout<<"Following are comparison oprators in C++"<<endl;
    cout<<"The value of a == b is "<<(a == b)<<endl;
    cout<<"The value of a != b is "<<(a != b)<<endl;
    cout<<"The value of a >= b is "<<(a >= b)<<endl;
    cout<<"The value of a <= b is "<<(a <= b)<<endl;
    cout<<"The value of a < b is "<<(a < b)<<endl;
    cout<<"The value of a > b is "<<(a > b)<<endl;
    cout<< endl;


    // Logical Operators -->it will show true or false in binary form such as 0 ot 1 for the given task:
    cout<<"Following are logical oprators in C++"<<endl;
    cout<< "The value of this logical 'and' operator ((a==b) && (a<b)) is : " <<((a==b) && (a<b))<<endl;
    cout<< "The value of this logical 'or' operator ((a==b) || (a<b)) is : " <<((a==b) || (a<b))<<endl;
    cout<< "The value of this logical 'not' operator (!(a==b)) is : " <<(!(a==b))<<endl;

    return 0;
}