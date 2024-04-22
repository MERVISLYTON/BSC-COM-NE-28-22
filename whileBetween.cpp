#include <iostream>
#include <limits>
using namespace std;
int main() {
    int number;
    cout << "Enter an integer between 5 and 10: ";
    while (number < 5 || number > 10) {
        cin >> number;
        if (number >= 5 && number <= 10) {
            cout << "Your input value  (" << number << ") has been accepted" <<endl;
        } 
        else if (std::cin.fail()) {
            std::cout << "Sorry you entered an invalid number. please try again:\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
        
            }
        else {
            cout << "You enter a "<<number<<" Please enter a number between 5 and 10: \n";
        }
    
    }
    return 0;
}