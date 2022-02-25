/*Here basically we  will create a class called as A then create a class called as B which will
 inherit the properties from A and create a new class called as C which will inherit the property from B

 A->Base class
 |
 B ->B inherits from A(Derived class)
 |
 C ->C inherits from B(Derived class)

 The above is the pattern for multilevel inheritance

*/
#include<iostream>
using namespace std;

class MyClass{
    public:
    int value;
    void content(){
        cout<<"Some content in the parent class";
    }


};
class Child:public MyClass{
    public:
   string value="Child";
};
class GrandChild: public Child{
    public:
    string value="Grandchild";

};
int main(){
    GrandChild obj;
    cout<<obj.value<<endl;
    obj.content();
    return 0;
}
/*
Output:
Grandchild
Some content in the parent class

So basicallty multilevel inheritance works in the way that the child inherits from parent and the grandchild
inturn inherits from the child.

*/
