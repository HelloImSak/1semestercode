#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate the area of a rectangle
double calculateRectangleArea(double length, double width) {
    return length * width;
}

// Function to calculate the area of a triangle
double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}

// Function to calculate the area of a circle
double calculateCircleArea(double radius) {
    return M_PI * pow(radius, 2);
}

int main() {
    char choice;
    
    do{
    cout << "Choose a geometric figure to calculate its area:" << endl;
    cout << "1. Rectangle" << endl;
    cout << "2. Triangle" << endl;
    cout << "3. Circle" << endl;
    
    int option;
    cin >> option;
    
    switch (option) {
        case 1: {
            double length, width;
            cout << "Enter the length and width of the rectangle: ";
            cin >> length >> width;
            double area = calculateRectangleArea(length, width);
            cout << "The area of the rectangle is: " << area << endl;
            break;
        }
        case 2: {
            double base, height;
            cout << "Enter the base and height of the triangle: ";
            cin >> base >> height;
            double area = calculateTriangleArea(base, height);
            cout << "The area of the triangle is: " << area << endl;
            break;
        }
        case 3: {
            double radius;
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            double area = calculateCircleArea(radius);
            cout << "The area of the circle is: " << area << endl;
            break;
        }
        default:
            cout << "Invalid choice." << endl;
    }
    	cout << "Choose to continue or not? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    
    return 0;
}
