//
// Created by 111 on 04.04.2020.
//
#pragma once
#include <string>

using namespace std;

class Country {
private:
    string name;
    int population;
public:
    void setName(string name)
    {
        this->name = name;
    }
    void setPopulation(int population)
    {
        this->population = population;
    }

    string getName()
    {
        return name;
    }
    int getPopulation()
    {
        return population;
    }
};



