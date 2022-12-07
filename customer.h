#ifndef CUSTOMER_H
#define CUSTOMER_H
#include"user.h"
#include<string>

class Costumer: public User{
public:
    Costumer(std::string nam="",std::string usern="",std::string pass="");

    virtual bool hasManagement() const;

    virtual void saveUser(QXmlStreamWriter& r);
};

#endif // COSTUMER_H