#pragma once
#include <iostream>

template <class T>
struct Quadrate {
    std::pair<T,T> Center;
    T Side;
};

// Вывод Квадрата
template <class T> 
    void print(Quadrate<T>& figure) {
    std::cout << "Quadrate: ";
    std::cout << "{(" << figure.Center.first + figure.Side / 2.0 << ", " << figure.Center.second + figure.Side / 2.0 << "), ";
    std::cout << "(" << figure.Center.first - figure.Side / 2.0 << ", " << figure.Center.second + figure.Side / 2.0 << "), ";
    std::cout << "(" << figure.Center.first - figure.Side / 2.0 << ", " << figure.Center.second - figure.Side / 2.0 << "), ";
    std::cout << "(" << figure.Center.first + figure.Side / 2.0 << ", " << figure.Center.second - figure.Side / 2.0 << ")}\n";
    std::cout << std::endl;
}

// Площадь для квадрата
template <class T>
double square(const Quadrate<T> &figure) {
    return (figure.Side * figure.Side);
}