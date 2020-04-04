//
// Created by 111 on 04.04.2020.
//

#include "Country.h"


class Capital : public Country {
public:
    Capital(){}
    Capital(string name, int population)
    {
        setName(name);
        setPopulation(population);
    }

    friend void showCapital(Capital& capital)
    {
        cout << "Name: "<< capital.getName() << endl;
        cout << "Population: "<< capital.getPopulation() << endl;
    }
};



