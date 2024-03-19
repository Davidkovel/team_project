#include <iostream>
#include <string>

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

int main()
{
    Meal meal("Pizza", 150);
    string mealName = meal.getName();
    double mealPrice = meal.getPrice();

    cout << "Meal: " << mealName << endl << "Price: " << mealPrice << endl;

}
