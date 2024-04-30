#include <iostream>
#include <string>
using namespace std;
int main(){
    int number;
    string letter;
    int * pPointer = new int;
    pPointer=&number;
    cout<<"Enter an integer"<<endl;
    cin>>number;
    *pPointer=number;

string * pointer=new string;
    pointer=&letter;
    cout<<"Enter a string character"<<endl;
    cin>>letter;
    *pointer=letter;
    cout<<"The integer value is "<<number<<endl;
     cout<<"The string value is "<<letter<<endl;
     delete pPointer;
     delete pointer;
     return 0;
}