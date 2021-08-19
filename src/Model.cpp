#include "Model.hpp"
#include <iostream>
#include "App.hpp"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

Model::Model(App* app)
        : app(app)
{
    std::cout << "  Constructing Model... \n";
    words.emplace_back("house");
    words.emplace_back("papertowel");
    words.emplace_back("tree");
    words.emplace_back("dog");
    words.emplace_back("engine");
    words.emplace_back("skeleton");
    words.emplace_back("monster");
    words.emplace_back("basketball");
    words.emplace_back("medal");
    words.emplace_back("waterbottle");
}

void Model::Initialize()
{
    std::cout << "  Initializing Model... \n";
        int range = words.size() - 0 + 1;
        srand(time(NULL));
        int num = rand() % range + 0;
        //std::cout << srand(1);
        solution = words[num];
        std::cout << "chosen word " <<num<< solution << "\n";
}

void Model::Finalize()
{
    std::cout << "  Finalizing Model... \n";
}

void Model::Run()
{
    std::cout << "  Running Model... \n";
}