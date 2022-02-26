/*
Write a program that would print the information (name, year of joining, salary, address) of three employees by creating a class named 'Employee'. The output should be as follows:
Name        Year of joining        Address
Robert        1994        64C- WallsStreat
Sam        2000        68D- WallsStreat
John        1999        26B- WallsStreat

*/
#include<iostream>
using namespace std;

class Employee{
    string name;
    int year;
    string address;
    public:
    Employee(string n,int y,string add){
        name=n;
        year=y;
        address=add;
    }
    void print(){
        cout<<name<<year<<address<<endl;
    }


};
int main(){
    Employee e1("Robert",1994,"64C- WallsStreet");
    Employee e2("Sam",2000,"68D- WallsStreet");
    Employee e3("John",1999,"26B- WallsStreet");
    e1.print();
    e2.print();
    e3.print();
    return 0;

}
/*
Used the concept of parameterized constructor and then calling the print function
to print the details of each employee.

*/
