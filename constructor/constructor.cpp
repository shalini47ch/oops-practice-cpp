#include<iostream>
using namespace std;

class Smartphone{
    public:
    char model;
    int yearofmanufacture;


    //now creating a constructor and passing those as parameters 
    Smartphone(char mdl,int manufacture){
        model=mdl;
        yearofmanufacture=manufacture;
    }
    //now creating methods for printing those values
    
    void printvalues(){
        cout<<"The model name is "<<model<<endl;
        cout<<"The year of manufacture is"<<yearofmanufacture<<endl;
    }

};
int main(){
    Smartphone iphone('I',1995);
    iphone.printvalues();
    //There are different objects created according to phone varieties and are called accordingly.

    Smartphone redmi('R',2000);
    redmi.printvalues();

    Smartphone oneplus('O',3000);
    oneplus.printvalues();
}
/*

1.Default constructor ->if we dont declare a constructor then the compiler has its own default constructor
2.Parameterized constructor->classname along with parameters.
SmartPhone() ->default constructor
SmartPhone(char mdl,int manufacture) ->parameterized constructor
3.Just like functions constructors can also be defined outside the class
*/