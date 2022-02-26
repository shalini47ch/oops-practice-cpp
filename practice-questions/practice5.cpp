/*
Write a program to print the area of a rectangle by creating a class named 'Area' having two functions. First function named as 'setDim' takes the length and breadth of the rectangle 
as parameters and the second function named as 'getArea' 
returns the area of the rectangle. 
Length and breadth of the rectangle are entered through keyboard.
*/
#include<iostream>
using namespace std;

class Area{
    public:
    int l,b;
    void setDim(int s1,int s2){
        l=s1;
        b=s2;
    }
    void getArea(){
        int s=l*b;
        cout<<"Area of rectangle "<<s;
    }


};
int main(){
    Area obj1;
    obj1.setDim(10,20);
    obj1.getArea();
    return 0;

}