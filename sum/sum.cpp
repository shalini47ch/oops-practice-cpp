#include<iostream>
using namespace std;

void myFunction(string country="India"){
    cout<<country<<endl;
}
int main(){
    myFunction("Australia");
    myFunction("America");
    myFunction();
    return 0;
    //when we dont pass any parameter it will return the default parameter passed
   

}