// CLASS CHALLENGE SUBMISSION ASSIGNMENT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <cmath>
#include <string>
//adding math.h library to see if it helps with the return M_PI
#include <math.h> 
using namespace std;

// Base class
class Shape {
    string color;
public:
    //setting const for color so it cannot change
    Shape(const string& c) : color(c) {}
    //setting a virtual function so classes can override this function and provide their own implementations
    virtual double getArea() = 0; 

    //a Getter for color
    string getColor() const
    {
        return color;
    }

    //for Setter so I can add to each property
    void setColor(const string& c) 
    {
        color = c;
    }
};

// Derived class for Rectangle
class Rectangle : public Shape {
private:
    double width;
    double height;
    
public:
    //inheriting for the properties
    Rectangle(double w, double h, const string& c) : Shape(c), width(w), height(h) {}

    double getArea() override {
        return width * height;
    }
};

// Derived class for Triangle
class Triangle : public Shape {
private:
    double base;
    double height;

public:
    //inheriting properies
    Triangle(double b, double h, const string& c) :Shape(c), base(b), height(h) {}

    double getArea() override {
        return 0.5 * base * height;
    }
};

// Derived class for Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r, const string& c) : Shape(c), radius(r) {}

    double getArea() override {
        return M_PI * radius * radius;
    }
};

int main() {
    // Create objects of each derived class
    Rectangle rectangle(5.0, 10.0, "Red");
    Triangle triangle(4.0, 8.0, "Blue");
    Circle circle(7.0, "Green");

    // Display the color and area of each shape
    cout << "Rectangle Color: " << rectangle.getColor() << ", Area: " << rectangle.getArea() << endl;
    cout << "Triangle Color: " << triangle.getColor() << ", Area: " << triangle.getArea() << endl;
    cout << "Circle Color: " << circle.getColor() << ", Area: " << circle.getArea() << endl;

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
