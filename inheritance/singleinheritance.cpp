/*
Inheritance basically uses the concept of base class and derived class.Base class is termed as the parent class
and derived class is the one considered as the child class.
We will use : operator to perform inheritance 
*/
#include<iostream>
using namespace std;

class Vehicle{
    public:
    string brand;
    void noise(){
        cout<<"The noise of the car honk";
    }
    
};
//Now creating a child class called as Car and inheriting from parent
class Car : public Vehicle{
    public:
    string model="BMW";
};
int main(){
    //here first we create an object
    Car myobj;
    cout<<myobj.model<<endl;
    myobj.noise();
}
/*
1.The above code is the example of Single Inheritance.
2.The main advantage of inheritance is code reusability.
*/
