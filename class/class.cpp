#include<iostream>
using namespace std;

class Animal{//class
    //access specifiers
    public:
    //data members
    bool givesbirth;
    bool layseggs;
    bool livesonland;


};
int main(){
    //object
    Animal mammal;
    mammal.givesbirth=true;
    mammal.layseggs=false;
    mammal.livesonland=true;


    //object
    Animal bird;
    bird.givesbirth=false;
    bird.layseggs=true;
    bird.livesonland=true;

    cout<<"Mammal class"<<mammal.givesbirth<<endl;
    cout<<"Mammal class"<<mammal.layseggs<<endl;
    cout<<"Mammal class"<<mammal.livesonland<<endl;

    cout<<"Bird class"<<bird.givesbirth<<endl;
    cout<<"Bird class"<<bird.layseggs<<endl;
    cout<<"Bird class"<<bird.livesonland<<endl;



}
/*
1.Here basically a class named Animal is created and objects titled as mammals and bird and access them
  using dot operator 
2.Class consists of data types,methods ,constructor.
3.The functions which are defined within a class are called modifiers. 
4.Access modifiers
->Public
->Private
->Protected

  
  */
