#include <iostream>
using namespace std;
int main() {
   unsigned int number;
   unsigned int num;
    cout << "Enter two positive integers that are less than 3 ";
    while (num >3 || number > 3) {
        cin >> number;
        cin>>num;
        if ((num <=3&& num>0) &&(number <=3&& number>0)) {
             int *twoDarray = new int[number* num];

    cout << "Enter the elements for the array:" <<endl;
    for (int i = 0; i < number; ++i) {
        for (int j = 0; j < num; ++j) {
            cout << "Enter element at position (" << i  << ", " << j << "): ";
            cin >> twoDarray[i * num + j];
        }
    }
    cout << "The following are the elements of the array:" <<endl;
    for (int i = 0; i < number; ++i) {
        for (int j = 0; j < num; ++j) {
            cout << twoDarray[i * num + j] << " ";
        }
    }
    delete[] twoDarray;
        } 
        else if(num<=0||number<=0){
            cout<<"The numbers should be positive and not zeros \n";
        }
        else {
            cout << "The numbers should be less than 3 please try again \n";
        }}
        return 0;
}