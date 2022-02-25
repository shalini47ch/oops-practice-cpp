#include<iostream>
using namespace std;

int plusFunc(int a,int b){
    return a+b;
}
double plusFunc(double a,double b){
    return a+b;
}
int main(){
    int a=plusFunc(5,7);
    double b=plusFunc(5.8,9.8);
    cout<<a<<endl;
    cout<<b;
}
//function overloading basically means that same function name but different types or number of parameters