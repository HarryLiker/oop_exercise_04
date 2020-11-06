#pragma once
#include <iostream>

template<class T>
struct Rectangle {
    std::pair<T,T> Center;
    T Length;
    T Width;
};

template<class T>
void check_figure(Rectangle<T> figure) {
    if(figure.Length <= 0 || figure.Width <= 0) {
        std::cout << "Rectangle parameters were entered incorrectly!\n";
        std::cout << "The program has been completed ahead of schedule!\n";
        exit(1);
    }
}

// Вывод Прямоугольника
template <class T> 
void print(Rectangle<T>& figure) {
    check_figure(figure); 
    std::cout << "Rectangle: ";
    std::cout << "{(" << figure.Center.first + figure.Length / 2.0 << ", " << figure.Center.second + figure.Width / 2.0 <<"), ";
    std::cout << "(" << figure.Center.first - figure.Length / 2.0 << ", " << figure.Center.second + figure.Width / 2.0 <<"), ";
    std::cout << "(" << figure.Center.first - figure.Length / 2.0 << ", " << figure.Center.second - figure.Width / 2.0 <<"), ";
    std::cout << "(" << figure.Center.first + figure.Length / 2.0 << ", " << figure.Center.second - figure.Width / 2.0 <<")}\n";
    std::cout << std::endl;
}

// Площадь для прямоугольника
template <class T>
double square(const Rectangle<T> &figure) {
    check_figure(figure); 
    return (figure.Length * figure.Width);
}