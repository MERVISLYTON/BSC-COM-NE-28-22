#include <iostream>
#include <cmath>
#include <limits>

using namespace std;
double Triangle(double base, double height) {
    return 0.5 * base * height;
}

double Rectangle(double length, double width) {
    return length * width;
}

double square(double side) {
    return side * side;
}

int main() {
    while (true) {
        cout << "Select a shape to calculate the area:" << endl;
        cout << "1. Triangle \n" <<"2. Rectangle \n"<<"3. Square \n"<<"4. Quit"<< endl;

        int opt;
        cout << "Enter your  option either 1, 2, 3 or 4: ";
        cin >> opt;

        if (opt == 1) {
            double base, height;
            cout << "Enter the base of the triangle: ";
            cin >> base;
            cout << "Enter the height of the triangle: ";
            cin >> height;
            double area = Triangle(base, height);
            cout << "The area of the triangle is: " << area << endl;
        } else if (opt == 2) {
            double length, width;
            cout << "Enter the length of the rectangle: ";
            cin >> length;
            cout << "Enter the width of the rectangle: ";
            cin >> width;
            double area = Rectangle(length, width);
            cout << "The area of the rectangle is: " << area << endl;
        } else if (opt == 3) {
            double side;
            cout << "Enter the side length of the square: ";
            cin >> side;
            double area = square(side);
            cout << "The area of the square is: " << area << endl;
        } else if (opt == 4) {
            cout << "You've decided to quit" << endl;
            break;
        } 
        else if (std::cin.fail()) {
            cout << "Your input was: "<<opt<<" which is an invalid input \n"<<"please enter a valid input"<<endl;
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
             }
        else {
          cout << "Your input was: "<<opt<<" which is an invalid input \n"<<"please enter a valid input"<<endl;
        }
    }

    return 0;
}