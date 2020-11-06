#pragma once
#include <iostream>

template<class T>
struct Rectangle {
    std::pair<T,T> Center;
    T Side1;
    T Side2;
};

// Вывод Прямоугольника
template <class T> 
    void print(Rectangle<T>& figure) {
    std::cout << "Rectangle: ";
    std::cout << "{(" << figure.Center.first + figure.Side1 / 2.0 << ", " << figure.Center.second + figure.Side2 / 2.0 <<"), ";
    std::cout << "(" << figure.Center.first - figure.Side1 / 2.0 << ", " << figure.Center.second + figure.Side2 / 2.0 <<"), ";
    std::cout << "(" << figure.Center.first - figure.Side1 / 2.0 << ", " << figure.Center.second - figure.Side2 / 2.0 <<"), ";
    std::cout << "(" << figure.Center.first + figure.Side1 / 2.0 << ", " << figure.Center.second - figure.Side2 / 2.0 <<")}\n";
    std::cout << std::endl;
}

// Площадь для прямоугольника
template <class T>
double square(const Rectangle<T> &figure) {
    return (figure.Side1 * figure.Side2);
}