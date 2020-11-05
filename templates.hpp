#pragma once
#include <iostream>
#include <tuple>
#include <utility>
#include <type_traits>
#include <cmath>

using namespace std;

#define PI 3.14159265

template <class T>
struct Quadrate {
    std::pair<T,T> Center;
    T Side;
};

template<class T>
struct Rectangle {
    std::pair<T,T> Center;
    T Side1;
    T Side2;
};

template<class T>
struct Trapeze {
    std::pair<T,T> Center;
    T UpperSide;
    T DownSide;
    T Height;
};
/*
template <class T>
void print(const T& t) {
    cout << t << endl;
}
*/
/*
template<class First, class... Rest>
void print(const First& first, const Rest&... rest) {
    cout << first << ", ";
    print(rest...);
}
*/

// Печать tuple
template<class T, size_t index> 
typename std::enable_if<index == std::tuple_size<T>::value, void>::type print_tuple(T&) {
    std::cout << std::endl;
}

template <class T, size_t index> 
typename std::enable_if<(index < std::tuple_size<T>::value), void>::type print_tuple(T& tuple) {
    auto figure = std::get<index>(tuple);
    print(figure);
    print_tuple<T,index+1>(tuple);
}

// Вывод Квадрата
template <class T> typename std::enable_if<(sizeof(T::Side) > 0), void>::type print(T& figure) {
    std::cout << "Quadrate: \n";
    std::cout << "Center (x, y): " << "(" << figure.Center.first << ", " << figure.Center.second << ")\n";
    std::cout << "(x1, y1) = ";
    std::cout << "(" << figure.Center.first + figure.Side / 2.0 << ", " << figure.Center.second + figure.Side / 2.0 <<")\n";
    std::cout << "(x2, y2) = ";
    std::cout << "(" << figure.Center.first - figure.Side / 2.0 << ", " << figure.Center.second + figure.Side / 2.0 <<")\n";
    std::cout << "(x3, y3) = ";
    std::cout << "(" << figure.Center.first - figure.Side / 2.0 << ", " << figure.Center.second - figure.Side / 2.0 <<")\n";
    std::cout << "(x4, y4) = ";
    std::cout << "(" << figure.Center.first + figure.Side / 2.0 << ", " << figure.Center.second - figure.Side / 2.0 <<")\n";
    std::cout << std::endl;
}

// Вывод Прямоугольника
template <class T> typename std::enable_if<(sizeof(T::Side1, T::Side2) > 0), void>::type print(T& figure) {
    std::cout << "Rectangle:\n";
    std::cout << "Center (x, y): " << "(" << figure.Center.first << ", " << figure.Center.second << ")\n";
    std::cout << "(x1, y1) = ";
    std::cout << "(" << figure.Center.first + figure.Side1 / 2.0 << ", " << figure.Center.second + figure.Side2 / 2.0 <<")\n";
    std::cout << "(x2, y2) = ";
    std::cout << "(" << figure.Center.first - figure.Side1 / 2.0 << ", " << figure.Center.second + figure.Side2 / 2.0 <<")\n";
    std::cout << "(x3, y3) = ";
    std::cout << "(" << figure.Center.first - figure.Side1 / 2.0 << ", " << figure.Center.second - figure.Side2 / 2.0 <<")\n";
    std::cout << "(x4, y4) = ";
    std::cout << "(" << figure.Center.first + figure.Side1 / 2.0 << ", " << figure.Center.second - figure.Side2 / 2.0 <<")\n";
    std::cout << std::endl;
}

// Вывод Трапеции
template <class T> typename std::enable_if<(sizeof(T::UpperSide, T::DownSide, T::Height) > 0), void>::type print(T& figure) {
    std::cout << "Trapeze\n";
    std::cout << "Center (x, y): " << "(" << figure.Center.first << ", " << figure.Center.second << ")\n";
    std::cout << "(x1, y1) = ";
    std::cout << "(" << figure.Center.first + figure.DownSide / 2.0 << ", " << figure.Center.second - figure.Height / 2.0 <<")\n";
    std::cout << "(x2, y2) = ";
    std::cout << "(" << figure.Center.first + figure.UpperSide / 2.0 << ", " << figure.Center.second + figure.Height / 2.0 <<")\n";
    std::cout << "(x3, y3) = ";
    std::cout << "(" << figure.Center.first - figure.UpperSide / 2.0 << ", " << figure.Center.second + figure.Height / 2.0 <<")\n";
    std::cout << "(x4, y4) = ";
    std::cout << "(" << figure.Center.first - figure.DownSide / 2.0 << ", " << figure.Center.second - figure.Height / 2.0 <<")\n";
    std::cout << std::endl;
}

template <class T>
double square(const Quadrate<T> &figure) {
    return (figure.Side * figure.Side);
}

template <class T>
double square(const Rectangle<T> &figure) {
    return (figure.Side1 * figure.Side2);
}

template <class T>
double square(const Trapeze<T> &figure) {
    return (figure.UpperSide + figure.DownSide) / 2.0 * figure.Height;
}

template <class T, size_t index = 0>
double tuple_square(T& tuple) {
    if constexpr (index < std::tuple_size<T>::value) {
        return (double)square(std::get<index>(tuple)) + tuple_square<T, index + 1>(tuple);
    }
    else {
        return 0;
    }
}


/*
// Площадь tuple
template <class T, size_t index> double square_tuple(T& tuple) {
    auto figure = std::get<index>(tuple);
    double figure_square = square(figure);

    if constexpr ((index + 1)<std::tuple_size<T>::figure_square){
        return figure_square + square_tuple<T,index + 1>(tuple);
    }

    return figure_square;
} 
*/