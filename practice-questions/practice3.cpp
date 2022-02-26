/*Write a program to print the area and 
perimeter of a triangle having sides of 3, 4 and 5 units by creating 
a class named 'Triangle' with the constructor having the three sides as its parameters.*/

#include<iostream>
using namespace std;
class Triangle{
    public:
    int s1,s2,s3;
    Triangle(int a,int b,int c){
        s1=a;
        s2=b;
        s3=c;

    }
    //now creating a function to access those
    void print(){
        double s=(s1+s2+s3)/2.0;
        cout<<s<<endl;
        cout<<"Perimeter is :"<<(s1+s2+s3);

    }

};
int main(){
    Triangle obj(3,4,5);
    obj.print();
    return 0;

}
/*
So here instead of passing the parameters inside the function we use a constructor to do that.We use
a parameterized cosntructor and then call the functions accordingly.
*/