#include <string>
#include <iostream>
using namespace std;
class Dish{
    public:
    string WantedDish;
    int DishSelection(string WantedDish);
    void DisplayDishes();
    float price(int idx);
    protected:
    string Dishes[3];
    float prices[3];
};
class MainDish:public Dish{
    public:
        MainDish();
};
class Additionals:public Dish{
    public:
        Additionals();
};
