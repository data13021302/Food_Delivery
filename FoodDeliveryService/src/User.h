#ifndef USER_H
#define USER_H

#include <string>

class User {
private:
    int userId;
    std::string name;
    std::string email;
    std::string address;
    std::string paymentMethod;

public:
    User(int id, const std::string& name, const std::string& email, const std::string& address, const std::string& payment);
    int getUserId() const;
    std::string getName() const;
    std::string getEmail() const;
    std::string getAddress() const;
    std::string getPaymentMethod() const;
};

#endif // USER_H
