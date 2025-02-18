#ifndef BUYER_H
#define BUYER_H

#include <string>
#include <map>
#include "product.h" 

class Buyer {
private:
    std::string name;
    int id;
    std::map<Product, int> productList; 

public:
    Buyer(std::string name, int id);  

    std::string getName() const;
    int getId() const;
    const std::map<Product, int>& getProductList() const;
};

#endif