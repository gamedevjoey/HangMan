#pragma once
#include <string>

class View
{
public:
    View(class App* app);

    void Initialize();
    void Finalize();
    void Run();

    std::string currentword;

    

private:
    class App* app;
};