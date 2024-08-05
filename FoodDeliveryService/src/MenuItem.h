#ifndef MENUITEM_H
#define MENUITEM_H

#include <string>

class MenuItem {
private:
    int itemId;
    std::string name;
    double price;

public:
    MenuItem(int id, const std::string& name, double price);
    int getItemId() const;
    std::string getName() const;
    double getPrice() const;
};

#endif // MENUITEM_H
