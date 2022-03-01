//access specifiers are those which helps us to access the variables and methods inside or outside a class
#include<iostream>
using namespace std;

class MyClass{
    public:
    int x;
    private:
    int y;

};
int main(){
    //creating an object for the class
    MyClass myobj;
    myobj.x=10; //x can be accessed as it is public so it can be accessed outside the class as well
    myobj.y=20; // y is private so its scope is only inside the class and not outside the class.
    return 0;
}
/*
Protected access specifier is the one which can be accessed outside the class in which it is defined
using the concept of inheritance.

*/
