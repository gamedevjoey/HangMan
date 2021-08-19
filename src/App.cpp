#include "App.hpp"
#include <iostream>
#include <vector>
#include <string>

std::vector<int> findLocation(std::string sample, char findIt)
{
    std::vector<int> characterLocations;
    for(int i =0; i < sample.size(); i++)
        if(sample[i] == findIt)
            characterLocations.push_back(i);

    return characterLocations;
}

App::App()
        : model(this), view(this), controller(this)
{
    std::cout << "Constructing App... \n";
    Initialize();
    Run();
    Finalize();
}

void App::Initialize()
{
    std::cout << "Initializing App... \n";
    controller.Initialize();
    model.Initialize();
    view.Initialize();
    //view.Run();
}

void App::Finalize()
{
    std::cout << "Finalizing App... \n";
    controller.Finalize();
    model.Finalize();
    view.Finalize();
    //view.Run();


}

void App::Run()
{
    std::cout << "Running App... \n";
    //controller.Run();
    model.Run();
    //view.Run();
    while (controller.input != model.solution && view.currentword != model.solution){
        if (model.lives <= 0){
            view.Run();
            std::cout << " \n Game Over The Word Was: " << model.solution << ". \n \n";
            break;
        }
        view.Run();
        controller.Run();
        if(controller.input.length() == 1) {
            model.guesses.emplace_back(controller.input);
            char  guessedChar;
            guessedChar = controller.input[0];
            if (model.solution.find(controller.input) != std::string::npos) {
                std::vector<int> locations;
                locations = findLocation(model.solution,guessedChar);
                
                for (int i = 0; i < locations.size(); i = i + 1) {
                    view.currentword[locations[i]] = guessedChar;
                }

            } else {
                model.lives = model.lives - 1;
            }
        } else {
            model.lives = model.lives - 1;
        }
    }
    if(model.lives != 0){
        view.Run();
        std::cout << "\n You've guessed the word! \n \n";
    }
}
