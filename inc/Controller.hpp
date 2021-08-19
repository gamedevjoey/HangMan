#pragma once
#include <string>

class Controller
{
public:
    Controller(class App* app);

    void Initialize();
    void Finalize();
    void Run();

    std::string input;

private:
    class App* app;
};
