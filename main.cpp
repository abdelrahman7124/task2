#include <iostream>
#include"Dish.h"
#include <string>
using namespace std;
MainDish dish;
Additionals side;
int main()
{
    string WantedMainDish,WantedSideDish;
    cout << "ALL INPUT ARE CASE SENSITIVE"<<endl;
    int idx1=-1,idx2=-1;
    float price=0;
    cout<<"Available main dishes:";
    dish.DisplayDishes();
    cout<<"Choose your main dish:"<<endl;
    do
    {
        getline(cin,WantedMainDish);
        idx1=dish.DishSelection(WantedMainDish);
    }while(idx1==-1);
    price+=dish.price(idx1);
    cout<<"Available side dishes:";
    side.DisplayDishes();
    cout <<"Choose our side dishes (Enter ""stop"" to reveal the price):"<<endl;
    while(1)
    {
        getline(cin,WantedSideDish);
        if (WantedSideDish=="stop")
            break;
        idx2=side.DishSelection(WantedSideDish);
        if (idx2!=-1)
            price+=side.price(idx2);
    }
    cout <<"Total price ="<<price;
        return 0;
}