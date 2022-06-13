// Copyright 2022 Trukhanov Artem

#include <iostream>
#include <string>
#include "include/Euler_function_app.h"

int main(int argc, const char** argv) {
    Application app;
    std::string output = app(argc, argv);
    std::cout << output << std::endl;
    return 0;
}
