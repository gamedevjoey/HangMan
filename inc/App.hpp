#pragma once
#include "Controller.hpp"
#include "Model.hpp"
#include "View.hpp"

class App
{

public:
    Model model;
    View view;
    Controller controller;
    App();


private:

    void Initialize();
    void Finalize();
    void Run();

};


