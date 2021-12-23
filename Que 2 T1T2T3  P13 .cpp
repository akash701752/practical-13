/*  Practical 13 
    Que 2 : WAP which have 1 Virtual Function and 1 Pure virtual Function in base Class and Derived Class have same copy
    virtual function with different logic and definition of Pure Virtual Function in derived Class 
    
    Task 1 : Try to Call child class overidden function through pointer of base class
    Task 2 : Try to Call child class Pure Virtual function Method through pointer of base class
    Task 3 : Where is Abstraction in Above Implementaion
*/ 

#include <iostream>

using namespace std;
class Base
{
    public :
        virtual int add(int a,int b)  // virtual Function it will ignored at the complie time  so p->add(4,6) will run at run time
        {
            return (a+b) ;
        }
        virtual int multi(int a,int b)=0 ; // Pure virtual function
};
class Child : public Base
{
    public :
        int add(int a,int b) // Override  Method
        {
            return (a+b+1) ;
        }
        int multi(int a,int b)
        {
            return (a*b) ;
        }
};
int main()
{
    cout<<"\t\t Akash Yadav 200111076 A "<<endl ;
    Child c ;
    //Base b ;    // object of Abstract class can not be created
    Base *p ;    // Pointer of Base Class
    p = &c  ;  // Pointer have address of Child class object
    /*
      Task 1 :
    */
    cout<<"p->add(4,6)    : "<< p->add(4,6)<<endl ; // because of virual function this will not call the base function add()
    /*
      Task 2 :
    */
    cout<<"p->multi(4,5)  : "<< p->multi(4,5)<<endl; 
   
    return 0;
}
/*
    virual int multi(int a,int b)=0 ; because of Pure virtual function until we do not define the Pure Virtual function
    Abstraction will carry on in their derived class until we define the Pure Virtual function.
    We can not create the object of Abstract Class. 
    
    
    Task 3 :
    Abstraction is because of virual int multi(int a,int b)=0 ;  in base Class
    and also because of its definition in Child class otherwise Abstraction will continue
    until we do not define the Pure virual function.
 
*/
