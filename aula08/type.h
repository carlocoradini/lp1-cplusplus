#ifndef TYPE_H
#define TYPE_H
#include <iostream>
#include <cmath>
#include <string>

class Type
{
private:
    int size;
    std::string name;
    float data[];

public:
    // Default constructor
    Type();
    // Expected constructor
    Type(std::string n, int s);
    // Dont mind it, we do need it now
    ~Type();
    
    // Methods
    void setName(std::string newName);
    void getName();
};

#endif