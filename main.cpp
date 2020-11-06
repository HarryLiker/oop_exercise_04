#include <iostream>
#include <tuple>
#include "quadrate.hpp"
#include "rectangle.hpp"
#include "trapeze.hpp"
#include "tuple.hpp"

int main() {
    Quadrate<int> quadre1({0, 0}, 4);

    Quadrate<double> quadre2({0.35, 10.5}, 8);

    Rectangle<int> rectangle1({25, 100}, 25, 100);

    Rectangle<double> rectangle2({45.85, 36.9}, 56.7, 1003.3);

    Trapeze<int> trapeze1({1000, -86}, 5, 100, 56);

    Trapeze<double> trapeze2({-9.85, -34.8}, 100.2, 89.5, 2.7);

    // Filling std::tuple by figures
    std::tuple<decltype(quadre1), decltype(quadre2), decltype(rectangle1), decltype(rectangle2), decltype(trapeze1), decltype(trapeze2)> 
    tuple {quadre1, quadre2, rectangle1, rectangle2, trapeze1, trapeze2};

    // Print coordinates of figures in tuple 
    print_tuple<decltype(tuple),0>(tuple);

    std::cout << "Total square of tuple: " << tuple_square<decltype(tuple),0>(tuple) << std::endl;
}