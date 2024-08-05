#include "User.h"

User::User(int id, const std::string& name, const std::string& email, const std::string& address, const std::string& payment) 
    : userId(id), name(name), email(email), address(address), paymentMethod(payment) {}

int User::getUserId() const { return userId; }
std::string User::getName() const { return name; }
std::string User::getEmail() const { return email; }
std::string User::getAddress() const { return address; }
std::string User::getPaymentMethod() const { return paymentMethod; }
