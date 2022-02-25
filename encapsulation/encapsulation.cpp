/*
encapsulation is  to make sure that sensitive data is hidden from the user.The definitive way to achieve encapsulation
is to declare the data members and functions as private and to access them we can use getters and setters.
*/
#include<iostream>
using namespace std;

class Myclass{
    private:
    int salary;
    public:
    void setSalary(int s){
        salary=s;
    }
    int getSalary(){
        return salary;
    }
};
int main(){
    Myclass myobj;
    myobj.setSalary(50000);
    cout<<myobj.getSalary();
    return 0;
}
/*Using the getters and setters we can access the private members of the class.Thus the sensitive
 data is hidden from the user.
 1.Encapsulation is a better technique as it provides more data security.
 2.You can change only a specific portion of data without affecting others.

 */

