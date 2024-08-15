#include <iostream>
#include "Dish.h"
#include <string>
using namespace std;

int Dish::DishSelection(string WantedDish){
       for (int i = 0; i < 3; i++) {
        if (Dishes[i] == WantedDish) {
            this->WantedDish = WantedDish;
            return i;
        }
    }
    cout << "Sorry, we don't have " << WantedDish << " on the menu,please enter another dish." << endl;
    return -1;
}
void Dish::DisplayDishes(){
    cout<<"1-"<<Dishes[0]<<" 2-"<<Dishes[1]<<" 3-"<<Dishes[2]<<endl;
}

float Dish::price(int idx)
{
    return prices[idx];
}
