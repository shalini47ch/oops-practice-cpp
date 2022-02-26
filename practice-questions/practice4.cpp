
/*Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively 
by creating a class named 'Rectangle' with a function 
named 'Area' which returns the area. Length and breadth are passed as parameters to its constructor.*/

#include<iostream>
using namespace std;

class Rectangle{
    public:
    int l,b;
    Rectangle(int s1,int s2){
        l=s1;
        b=s2;

    }
    void Area(){
        int s=(l*b);
        cout<<"Area of rectangle "<<s<<endl;
    }


};
int main(){
    Rectangle obj1(4,5);
    Rectangle obj2(5,8);

    obj1.Area();
    obj2.Area();
    return 0;

}