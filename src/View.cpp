#include "View.hpp"
#include <iostream>
#include "App.hpp"
#include <stdio.h>
#include <string>

View::View(App* app)
        : app(app)
{
    std::cout << "  Constructing View... \n";
}

void View::Initialize()
{
    std::cout << "  Initializing View... \n";
    for (int i = 0; i < app->model.solution.length(); i = i + 1) {
        currentword.append("*");
    }


    //std::cout << app->model.lives << "lives left. \n";
    //printf("   --- %d --- %.2f --- %c --- %s \n", 42, 12.3, 'x', ("hello, "s + name).c_str());
    
    
}

void View::Finalize()
{
    std::cout << "  Finalizing View... \n";
    //printf(" ------ TERMINAL HANG MAN ------ \n \n  Lives Left: %d \n \n  Solution: %s \n", app->model.lives, app->model.solution.c_str());
}

void View::Run()
{
    //std::cout << "  Running View... \n";
    std::string guessedLetters;
    

    for (int i = 0; i < app->model.guesses.size(); i = i + 1) {
        guessedLetters.append(app->model.guesses[i]);
        guessedLetters.append("   ");
    }

    
    std::cout << " \n \n  \n \n  \n \n  \n \n  \n \n  \n \n  \n \n  \n \n  \n \n  \n \n  \n \n  \n \n  \n \n  \n \n  \n \n  \n \n  \n \n ";
    std::string name = "bob";
    std::cout << " ------ TERMINAL HANG MAN ------ \n \n  ";
    if (app->model.lives == 6){
        std::cout << R"(
        +---+
        |   |
            |
            |
            |
            |
        =========

        )";
    } else if (app->model.lives == 5) {
        std::cout << R"(
            +---+
            |   |
            O   |
                |
                |
                |
            =========

        )";
    } else if (app->model.lives == 4) {
        std::cout << R"(
            +---+
            |   |
            O   |
            |   |
                |
                |
            =========

        )";
    } else if (app->model.lives == 3) {
        std::cout << R"(
            +---+
            |   |
            O   |
           /|   |
                |
                |
            =========

        )";
    } else if (app->model.lives == 2) {
        std::cout << R"(
            +---+
            |   |
            O   |
           /|\  |
                |
                |
            =========

        )";
    } else if (app->model.lives == 1) {
        std::cout << R"(
            +---+
            |   |
            O   |
           /|\  |
           /    |
                |
            =========

        )";
    } else if (app->model.lives == 0) {
        std::cout << R"(
            +---+
            |   |
            O   |
           /|\  |
           / \  |
                |
            =========

        )";
    }

    printf("\n  %s \n \n Guesses: %s \n \n Lives Left: %d \n \n  \n",currentword.c_str(), guessedLetters.c_str(), app->model.lives);
}