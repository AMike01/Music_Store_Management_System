#ifndef PRODUCT_H
#define PROFUCT_H
#include <string>
#include<QXmlStreamWriter>
#include<QXmlStreamReader>

class Product {

    protected:
        std::string name;
        double price;
    
    public:
        Product(std::string n="", double p=0);

        virtual ~Product();

        // GETTERS
        virtual std::string getName() const=0;
        virtual double getPrice() const=0;

        // SETTERS
        void setName(std::string newName);
        void setPrice(double newPrice);

        virtual void loadXML(QXmlStreamReader & r);
        virtual void saveXML(QXmlStreamWriter & w); 
};


#endif  // PRODUCT_H