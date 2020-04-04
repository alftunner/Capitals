#include <iostream>
#include "Country.h"
#include "capital.h"
#include <vector>

int main() {
    Capital capital1("Moscow", 12000000);
    Capital capital2("Voronezh", 1200000);
    Capital capital3("Washington", 66600000);

    vector<Capital> capitals;
    capitals.push_back(capital1);
    capitals.push_back(capital2);
    capitals.push_back(capital3);

    int max = capital1.getPopulation();
    bool flag = false;

    for (auto i : capitals)
    {
        if (i.getPopulation() > max)
        {
            cout << "The biggest " << i.getName();
            flag = true;
        }
    }
    if(!flag)
    {
        cout << "The biggest " << capital1.getName();
    }

    return 0;
}
