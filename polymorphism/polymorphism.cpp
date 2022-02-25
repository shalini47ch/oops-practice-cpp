/*
Polymorphism is basically a combination of two words poly means many and morphism means forms.
So we can basically overrride the implementation of our classes.It occurs when classes are related by 
inheritance


*/
#include<iostream>
using namespace std;

class Animal{
    public:
    void sound(){
        cout<<"The sound of the animal class";
        
    }

};
//now creating another class called as pig class
class Pig: public Animal{
    public:
    void sound(){
        cout<<"The sound of the pig class";
    }

};
//now creating another class called as dog class
class Dog:public Animal{
    public:
    void sound(){
        cout<<"The sound of dog class";
    }

};
int main(){
    //creating objects for different classes
    Animal myanimal;
    Pig mypig;
    Dog mydog;
    myanimal.sound();
    mypig.sound();
    mydog.sound();
    return 0;
}
/*They print different outputs depending on the object that is calling the function
Polymorphism is of two types 
1.CompileTime Polymorphism-Function overloading,operator overloading
2.Runtime Polymorphism-Function overriding


*/
