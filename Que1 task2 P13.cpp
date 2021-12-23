/*  Practical 13 
    Que 1 : Create a base class and overlaod a add method with two argument and create a derived class
    Override a add method.
    Version 2 : Call base class function with using 'Using' keyword 
    With using USING keyword
*/ 

#include <iostream>

using namespace std;
class Base
{
    public :
        int add(int a,int b)
        {
            return (a+b) ;
        }
        float add(float a,float b) // overloading
        {
            return (a+b) ;
        }
};
class Child : public Base
{
    public :
        using Base :: add ;  // now all the overlaoded functions will be Accessed except Overridden Method
        int add(int a,int b) // Override 
        {
            return (a+b+1) ;
        }
};
int main()
{
    cout<<"\t\t Akash Yadav 200111076 A "<<endl ;
    Child c ;
    cout<<"c.add(1,2)       : "<<c.add(1,2) <<endl; 
    cout<<"c.add(3.4f,5.4f) : "<<c.add(3.4f,5.4f)<<endl ; // complier will not go to base class if we try to call float add function through child object 
    
    return 0;
}
/*
    The Functions which can not be Accessed through Child object
    int add(int a,int b) {return (a+b) } ; because this Function is Overridden can not be Accessed through child object
 
*/
