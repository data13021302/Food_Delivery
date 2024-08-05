#include "Restaurant.h"

Restaurant::Restaurant(int id, const std::string& name, const std::string& address)
    : restaurantId(id), name(name), address(address) {}

int Restaurant::getRestaurantId() const { return restaurantId; }
std::string Restaurant::getName() const { return name; }
std::string Restaurant::getAddress() const { return address; }
void Restaurant::addMenuItem(const MenuItem& item) { menu.push_back(item); }
std::vector<MenuItem> Restaurant::getMenu() const { return menu; }
