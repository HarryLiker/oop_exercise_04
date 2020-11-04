#include <iostream>
#include "templates.hpp"
#include <tuple>

void entered_name(std::string figure_name) {
    if (figure_name == "quadrate") {
        Quadrate quadre<>;
        Center_x, Center_y;
        std::cout << "Write center coordinates: ";
        std::cin >> Center_x >> Center_y;
    }
    else if (figure_name == "rectangle") {

    }
    else if (figure_name == "trapeze") {

    }
    else {
        std::cout << "Entered invalid figure name\n";
        std::cout << "Please, enter figure name: ";
        std::cin >> figure_name;
    }
}

int menu() {
    while(1) {
        int variant;
        std::cout << "Menu:\n";
        std::cout << "1 - Enter the new figure\n";
        std::cout << "2 - Exit the program\n";
        std::cin >> variant;
        if (variant == 1) {
            std::string figure_name;
            std::cout << "Enter name of figure (Possible names: quadrate, rectangle, trapeze): ";
            std::cin >> figure_name;
        }
        else if (variant == 2) {
            std::cout << "Program comleted!\n";
            return 0;
        }
        else {
            std::cout << "Entered invalid variant\n";
        }
    }
    return 0;
}