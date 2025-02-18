#ifndef PRODUCTINFO_H
#define PRODUCTINFO_H

#include <string>
#include "product.h"

class ProductInfo {
private:
    Product product;
    std::string title;
    int quantity;

public:
    ProductInfo(Product product, std::string title, int quantity);

    
    Product getProduct() const;
    std::string getTitle() const;
    int getQuantity() const;
};

#endif