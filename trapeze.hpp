#pragma once
#include <iostream>

template<class T>
struct Trapeze {
    std::pair<T,T> Center;
    T UpperSide;
    T DownSide;
    T Height;
};

// Вывод Трапеции
template <class T> 
    void print(Trapeze<T>& figure) {
    std::cout << "Trapeze: ";
    std::cout << "{(" << figure.Center.first + figure.DownSide / 2.0 << ", " << figure.Center.second - figure.Height / 2.0 <<"), ";
    std::cout << "(" << figure.Center.first + figure.UpperSide / 2.0 << ", " << figure.Center.second + figure.Height / 2.0 <<"), ";;
    std::cout << "(" << figure.Center.first - figure.UpperSide / 2.0 << ", " << figure.Center.second + figure.Height / 2.0 <<"), ";
    std::cout << "(" << figure.Center.first - figure.DownSide / 2.0 << ", " << figure.Center.second - figure.Height / 2.0 <<")}\n";
    std::cout << std::endl;
}

// Площадь для трапеции 
template <class T>
double square(const Trapeze<T> &figure) {
    return (figure.UpperSide + figure.DownSide) / 2.0 * figure.Height;
}
