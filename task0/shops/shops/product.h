#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product {
protected:
    std::string title;
    int id;

public:
    Product(std::string title, int id);

    std::string getTitle() const;
    int getId() const;
};

#endif
