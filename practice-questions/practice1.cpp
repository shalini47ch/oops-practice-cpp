/*
Create a class named 'Student' with a string variable 'name' and an integer variable 'roll_no'. 
Assign the value of roll_no as '2' and that of name as "John" by creating an object of the class Student.

*/
#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int roll_no;

};
int main(){
    Student myobj;
    myobj.roll_no=2;
    myobj.name="John";
    cout<<myobj.roll_no<<endl;
    cout<<myobj.name<<endl;
    return 0;
}
