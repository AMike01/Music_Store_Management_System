#ifndef  USER_H
#define USER_H
#include<string>
#include <QXmlStreamWriter>
#include <QXmlStreamReader>

class User {
private:
    std::string User_name;
    std::string username;
    std::string password;     
public:
    User(std::string nam="",std::string usern="",std::string pass="");
    virtual ~User();
    virtual bool hasManagement() const=0;

    // GETTERS
    std::string getName() const;
    std::string getSurname() const;
    std::string getUsername() const;
    std::string getPassword() const;
    

    // SETTERS
    void setName(const std::strin newName);
    void setUsername(const std::string newUsername);
    void setPassword(const std::string newPass);

    virtual void saveUser(QXmlStreamWriter& xmlWriter);
    void loadUser(QXmlStreamReader& xmlReader);
};

#endif // USER_H
