/*
The concept of multiple inheritance is that there can be more than  more base class from which the 
child class can inherit.
 
A    B
\   /
  C
Here C is the child class and A,B are the base classes.

*/
#include<iostream>
using namespace std;

class Parent1{
    public:
    void myfunction(){
        cout<<"I am the first parent class";
    }
};
//create a second parent class
class Parent2{
    public:
    void mydetails(){
        cout<<"I am the second parent";
    }
};
//Now performing multiple inheritance from those
class Child:public Parent1,public Parent2{
    public:
    void info(){
        cout<<"I am the child class";
    }
};
int main(){
    Child obj;
    obj.mydetails();
    obj.myfunction();
    obj.info();
    return 0;
}