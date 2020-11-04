#include <iostream>
#include <tuple>
#include <string>
#include "templates.hpp"
#include <cmath>

using namespace std;

int main() {
    //tuple<Quadrate, Rectangle, Trapeze> a();
    //a.push
    Quadrate<int> quadre1;
    quadre1.Center = {0, 0};
    quadre1.Side = 4;

    Quadrate<double> quadre2;
    quadre2.Center = {0.35, 10.5};
    quadre2.Side = 8;

    Rectangle<int> rectangle1;
    rectangle1.Center = {25, 100};
    rectangle1.Side1 = 25;
    rectangle1.Side2 = 100;

    Rectangle<double> rectangle2;
    rectangle2.Center = {45.85, 36.9};
    rectangle2.Side1 = 56.7;
    rectangle2.Side2 = 1003.3;

    Trapeze<int> trapeze1;
    trapeze1.Center = {1000, -86};
    trapeze1.DownSide = 100;
    trapeze1.UpperSide = 5;
    trapeze1.Height = 56;
    
    Trapeze<double> trapeze2;
    trapeze2.Center = {-9.85, -34.8};
    trapeze2.DownSide = 89.5;
    trapeze2.UpperSide = 100.2;
    trapeze2.Height = 2.7;

    std::tuple<decltype(quadre1), decltype(quadre2), decltype(rectangle1), decltype(rectangle2), decltype(trapeze1), decltype(trapeze2)> 
    tuple {quadre1, quadre2, rectangle1, rectangle2, trapeze1, trapeze2};
    print_tuple<decltype(tuple),0>(tuple);

    //print(10, 20);
    //print(100, 200, 300);
    //print<int, double, int>(1, 2.0, 3);
    //print("first", 2, "third", 3.14159);
}