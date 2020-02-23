#include <iostream>
using namespace std;

int c = 987654321;  //it is a global variable since it is out of the main syntax.

int main()
{

    /***********************BUILD IN DATA TYPES********************************/

    int a, b, c;        // here all a, b and c are local variables.
    cout<<"Enter the value of a : "<<endl;
    cin>>a;

    cout<<"Enter the value of b : "<<endl;
    cin>>b;

    c = a+b;

    cout<< "Sum of given numbers is : "<<c <<endl;

    cout<<endl;
    
    // but if we want to use global variable we can use scope resolution operator just before the variable name --> ::
    cout<< "The value of global variable c is : "<<::c<<endl;

    cout<<endl;


    /*******************FLOAT, DOUBLE AND LONG DOUBLE LITERALS********************/

    float d = 34.4f;     //we used letter f after the value just to tell that it is a float value.
    long double e = 34.4l;    //we used letter l after the value just to tell that it is a long double value. 

    cout<< "The value of d is : "<<d<<", which is a float value."<<endl<<"The value of e is also : "<<e<< " but its a long double value."<<endl;
    cout<<endl;
    
    //sizeof keyword to check the difference among all values:
    cout<<"The size of 34.4 is : "<<sizeof(34.4)<<endl;        //it will be considered double value automatically.
    cout<<"The size of 34.4l is : "<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4L is : "<<sizeof(34.4L)<<endl;
    cout<<"The size of 34.4f is : "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4F is : "<<sizeof(34.4F)<<endl;
    
    cout<<endl;

    /**********REFERENCE VARIABLES--> same value in two variables***************/
    float x = 918;
    float & y = x;

    cout<<x<<endl;
    cout<<y<<endl;
    cout<<endl;

    /*******************TYPECASTING-->changes the variable types****************/
    int j = 9;
    float k = 8.98;
    cout<<"The value of j is : "<<j<<endl;
    cout<<"The value of j is : "<<(float)j<<endl;
    cout<<"The value of j is : "<<float(j)<<endl;

    cout<<"The value of k is : "<<k<<endl;
    cout<<"The value of k is : "<<(int)k<<endl;     //it wil convet k into integer
    cout<<"The value of k is : "<<int(k)<<endl;     //it wil convet k into integer
    int l= int(k);      //it's also a valid situation.

    cout<<endl;

    cout<<"The expression is "<<j + k <<endl; 
    cout<<"The expression is "<<j +(int) k <<endl;  //it wil convet k into integer
    cout<<"The expression is "<<j + int(k) <<endl;  //it wil convet k into integer

    return 0;
}
