// #include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <cstring>

using namespace std;

// Base Class
class Entree{
    protected:
        char _entree[10];
    public:
        const char *getEntree(){
            return _entree;
        }

};

class Side{

    protected:
        char _side[10];
    public:
        const char *getSide(){
            return _side;
        }
};


class Drink{

    protected:
        char _drink[10];
    public:
        Drink(){
            cout << "\n Soda" << endl;
            strcpy(_drink, "soda");
        }
        const char *getDrink(){
            return _drink;
        }
};

class MealCombo{
    private:
        Entree * entree;
        Side * side;
        Drink * drink;
        char _bag[100];

    public:
        MealCombo(const char *type){
            sprintf(_bag, "\n %s meal combo: ", type);
        }

        void setEntree(Entree *e){
            entree = e;
        }

        void setSide(Side *s){
            side = s;
        }

        void setDrink(Drink *d){
            drink = d;
        }

        const char *openMealBag(){
            sprintf(_bag, "\n %s %s %s %s", _bag, entree->getEntree(), side->getSide(), drink->getDrink());
            return _bag;
        }
};

// int main(){
//     MealCombo obj("bigMeal");
//     obj.setDrink("Coffee");
//     obj.setEntree("Sandwich");
//     obj.setSide("Pakora");

//     // sprintf("%c : ", obj.openMealBag());
//     cout << obj.openMealBag();
//     return 0;
// }
