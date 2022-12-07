#ifndef ADMIN_H
#define ADMIN_H
#include"user.h"
#include<string>

class Admin: public User{
public:
    Admin(std::string nam="",std::string usern="",std::string pass="");

    virtual bool hasManagement() const;

    virtual void saveUser(QXmlStreamWriter& r);
};

#endif // ADMIN_H