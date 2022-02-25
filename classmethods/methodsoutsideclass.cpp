#include<iostream>
using namespace std;

class MyClass{
    public:
    void myMethod();
};
//now defining the method outside the class
void MyClass::myMethod(){
    cout<<"Method is defined outside the class";
}
int main(){
    MyClass myobj;
    myobj.myMethod();
    return 0;
}
/*there are two ways in which you can declare methods in cpp.One is inside the class and the other is
 outside the class.If we have to define it outside the class then  we will use the scope resolution
 operator for that.
 */
