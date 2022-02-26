#include<iostream>
using namespace std;

class GuidedPath{
    public:
    GuidedPath(){
        cout<<"Welcome to guided path"<<endl;
        cout<<"Constructor is called"<<endl;

    }
    ~GuidedPath(){
        cout<<"Have a great learning path"<<endl;
        cout<<"Destructor is called"<<endl;
    }

};
int main(){
    GuidedPath obj;
    return 0;
}
/*
Destructors are mainly used to free up the memory space .These if not specified by the programmer,
then they will be called by default by the c++ compiler.
It is called when object goes out of scope or a delete operator is called.
Destructors cannot have parameters.They should be the same as the class name with no return type.
They should always be declared in the public section of the class.

*/