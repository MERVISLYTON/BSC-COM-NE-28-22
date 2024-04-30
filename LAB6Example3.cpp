#include<iostream>
using namespace std;
int main(){
    int numbersArray[5];
    int * Ppointer=nullptr;
    Ppointer=numbersArray;
    *Ppointer=10;
     Ppointer=&numbersArray[1];
    *Ppointer=20;
    Ppointer=&numbersArray[2];
    *Ppointer=30;
    Ppointer=numbersArray+3;
    *Ppointer=40;
    Ppointer=numbersArray;
    *(Ppointer+4)=50;
    for(int n=0; n<5; n++)
    cout<<numbersArray[n]<<",";
    return 0;
}