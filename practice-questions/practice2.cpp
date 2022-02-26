/*
Write a program to print the area and perimeter of a triangle 
having sides of 3, 4 and 5 units by creating a class named 'Triangle' 
with a function to print the area and  perimeter.

*/
#include<iostream>
using namespace std;
class Triangle{
    public:
    void print(int a,int b,int c){
        double s= (a+b+c)/2.0;
        cout<<s;
        cout<<"Perimeter is :"<<(a+b+c);

    }

};

int main(){
    Triangle obj;
    obj.print(3,4,5);
    return 0;
}
