#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Meal {
private:
    string name;
    double price;
public:
    Meal() : name{ "Null" }, price{ 0 } {}

    Meal(string nameInput, double priceInput) : name(nameInput), price(priceInput) {}

    inline string getName() {
        return name;
    }

    inline double getPrice() {
        return price;
    }


};

class Restaurant {
private:
    vector<Meal> menu;
public:

    void addMeal(const Meal& meal) {
        menu.push_back(meal);
    }
    
    void getRestaurantMenu() {
        cout << "Menu in Restaurant:" << endl;
        for (int i = 0; i < menu.size(); i++) {
            cout << "Meal: " << menu[i].getName() << ", Price: " << menu[i].getPrice() << endl;
        }
    }


};

int main()
{
    Restaurant restaurant;
    Meal meal("Pizza", 150);
    Meal meal2("Burger", 200);

   // string mealName = meal.getName();
   // double mealPrice = meal.getPrice();

   // cout << "Meal: " << mealName << endl << "Price: " << mealPrice << endl;

    restaurant.addMeal(meal);
    restaurant.addMeal(meal2);

    restaurant.getRestaurantMenu();


}
