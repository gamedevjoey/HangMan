#include "Controller.hpp"
#include <iostream>
#include "App.hpp"
#include <string>

Controller::Controller(App* app)
        : app(app)
{
    std::cout << "  Constructing Controller... \n";
}

void Controller::Initialize()
{
    
    std::cout << "  Initializing Controller... \n";
}

void Controller::Finalize()
{
    std::cout << "  Finalizing Controller... \n";
}

void Controller::Run()
{
    //std::cout << "  Running Controller... \n";
    std::cin >> input;
}