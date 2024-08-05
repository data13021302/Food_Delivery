#ifndef RESTAURANT_H
#define RESTAURANT_H

#include <string>
#include <vector>
#include "MenuItem.h"

class Restaurant {
private:
    int restaurantId;
    std::string name;
    std::string address;
    std::vector<MenuItem> menu;

public:
    Restaurant(int id, const std::string& name, const std::string& address);
    int getRestaurantId() const;
    std::string getName() const;
    std::string getAddress() const;
    void addMenuItem(const MenuItem& item);
    std::vector<MenuItem> getMenu() const;
};

#endif // RESTAURANT_H
