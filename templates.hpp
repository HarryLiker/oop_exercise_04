#pragma once
#include <iostream>
#include <utility>

template <class T>
struct quadrate {
    std::pair<T,T> Center;
    T Side;
};

template<class T>
struct rectangle {
    std::pair<T,T> Center;
    T Side1;
    T Side2;
};

template<class T>
struct trapeze {
    std::pair<T,T> Сenter;
    T UpperSide;
    T DownSide;
    T LateralSide;
};