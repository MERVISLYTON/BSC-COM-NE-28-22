#include <iostream>
using namespace std;
int main(){
    int firstvalue;
    int secondvalue;
    int * pPointer = nullptr;
    pPointer=&firstvalue;
    *pPointer=10;

    pPointer=&secondvalue;
    *pPointer=20;
    cout<<"First value is "<<firstvalue<<endl;
     cout<<"second value is "<<secondvalue<<endl;
     return 0;
}