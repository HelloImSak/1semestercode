#include <iostream>
#include <cmath>
using namespace std;
double calRectangle(double length, double width) {
    return length * width;
}
double calTriangle(double a, double b, double c) {
    double s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

double calCircle(double radius) {
    const double pi = 3.14;
    return pi * radius * radius;
}

int main() {
    //data
    double rectangleLength = 5.0, rectangleWidth = 3.0;

    double triangleSideA = 3.0, triangleSideB = 4.0, triangleSideC = 5.0;

    double circleRadius = 2.0;

    // Calculate using function
    double rectangle = calRectangle(rectangleLength, rectangleWidth);
    double triangle = calTriangle(triangleSideA, triangleSideB, triangleSideC);
    double circle = calCircle(circleRadius);

    //The results
    cout << "Area of Rectangle: " << rectangle << std::endl;
    cout << "Area of Tringle: " << triangle << std::endl;
    cout << "Area of Cicle: " << circle << std::endl;

    return 0;
}
