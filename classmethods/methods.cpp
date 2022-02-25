#include<iostream>
using namespace std;

class MyClass{
    public:
    //the method which is declared inside a class is called as class method
    void myMethod(){
        cout<<"Class method called"<<endl;
    }
};
int main(){
    //here create an object of the class
    MyClass myobj;
    //calling the class method
    myobj.myMethod();
    return 0;

}