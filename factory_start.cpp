// #include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <cstring>

using namespace std;

class Coffee
{
    protected:
        char _type[15];
    public:
        Coffee(){

        }
        char *getType(){
            return _type;
        }
};

class Espresso : public Coffee{
    public:
    Espresso() : Coffee()
    {
        strcpy(_type, "Espresso");
        cout << endl << "Cup of espresso" << endl;
        cout << endl << "Grind one spoon beans" << endl;
    }
};

class Cappuccino : public Coffee
{
    public:
        Cappuccino() : Coffee()
        {
            strcpy(_type, "Cappuccino");
            cout << endl << "Cup of cappuchino" << endl;
            cout << "One scoop beans with heat and foam milk" << endl;
        }
};

class CoffeeMakerFactory
{
    private:
        Coffee * _coffee;
    public:
        Coffee * getCoffee()
        {
            int choice;
            cout << "Choose coffee" << endl;
            cout << "1: Espresso" << endl;
            cout << "2: Cappuchino" << endl;
            cout << "Selection:";
            cin >> choice;

            switch (choice){
                case 1:
                    return new Espresso;
                case 2:
                    return new Cappuccino;
                default:
                    cout << "Invalid" << endl;
                    return NULL;
            }
        }
};


int main()
{
    CoffeeMakerFactory coffeeMachine;
    Coffee *cup;

    cup = coffeeMachine.getCoffee();

    cout << endl << "You selected " << cup->getType() << endl;


}
