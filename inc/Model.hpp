#pragma once
#include <string>
#include <vector>

class Model
{
public:
    Model(class App* app);

    void Initialize();
    void Finalize();
    void Run();

    int lives = 6;
    std::string solution;

    std::vector<std::string> guesses;
    std::vector<std::string> words;

private:
    class App* app;



};
