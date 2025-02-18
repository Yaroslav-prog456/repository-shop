#ifndef SHOPE_H
#define SHOPE_H

#include <string>
#include <vector>
#include "ProductInfo.h" 

class Shope {
private:
    std::string title;
    int id;
    std::vector<ProductInfo> products; 

public:
    Shope(std::string title, int id);

    std::string getTitle() const;
    int getId() const;
    const std::vector<ProductInfo>& getProducts() const;
};

#endif