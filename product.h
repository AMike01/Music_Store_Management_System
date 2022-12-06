#ifndef PRODUCT_H
#define PROFUCT_H
#include <string>
#include<QMessageBox>
#include<QXmlStreamWriter>
#include<QXmlStreamReader>

class Product {

    protected:
        std::string name;
        double price;
    
    public:
        Product(std::string n="", double p=0);

        virtual ~Product();
        virtual std::string getName() const=0;
        virtual double getPrice() const=0;

        void setName(std::string newName);
        void setPrice(double newPrice);

        virtual void loadStuff(QXmlStreamReader & r);
        virtual void saveStuff(QXmlStreamWriter & w); 
};


#endif  // PRODUCT_H