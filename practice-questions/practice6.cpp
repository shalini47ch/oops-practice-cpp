/*
Write a program to print the area of a rectangle by creating a class named 'Area' taking the values of its length and breadth as parameters of its constructor and having a function named 'returnArea' which 
returns the area of the rectangle.
 Length and breadth of the rectangle are entered through keyboard.

*/
#include<iostream>
using namespace std;

class Area{
    public:
    int length;
    int breadth;
    Area(int l,int b){
        length=l;
        breadth=b;
    }
    void returnArea(){
        cout<<length*breadth;
    }


};
int main(){
    Area obj(5,4);
    obj.returnArea();
    return 0;
}
/*Constructor is acting as the one which is taking the parameters and then calculating the area of the
rectangle
*/


