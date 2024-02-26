// DSA using C++
// 1st example - Area Calculator

// Author - Sunil Kashyap
// Date - 26th Feb 2024
// Github - https://github.com/sunilnkashyap

// This program is used to find area of the circle using the radius of the circle.
// The program uses the concept of classes and objects to find the area of the circle.
// The program takes the radius of the circle as input and then calculates the area of the circle using the formula 3.14*radius*radius.

#include <iostream>
using namespace std;

class Circle {
  private: 
  int radius;


  public:
  Circle(int r) {
    radius = r;
  }

  void setRadius(int radius) {
    this->radius = radius;
  }

  void getRadius() {
    return radius;
  }
  
};

class Utility {
  public:
  double calculateArea(Circle c) {
    int r = c.getRadius();
    return 3.14*r*r;
  }
}

int main() {
  int radius = 0;
  cout<<"Enter the radius (in cm) of the circle: "<<endl;
  cin>>radius;


  Circle obj(radius);
  Utility c1;

  cout<<"Circle Area="<<c1.calculateArea(obj)<<"cm2"<<endl;

  return 0;
}