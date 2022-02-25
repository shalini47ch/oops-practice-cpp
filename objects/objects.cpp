#include<iostream>
using namespace std;

class Details{
    public:
    int number;
    string message;
};
int main(){
    //creating an object for the specific class
    Details myobj;
    myobj.number=10;
    myobj.message="Hello welcome to cpp practice";
    cout<<"The number is"<<  myobj.number<<endl;
    cout<<"The message is"<<  myobj.message<<endl;

}