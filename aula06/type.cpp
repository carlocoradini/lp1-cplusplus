#include <iostream>
#include <string>
#include "type.h"
/*
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
*/
// The default behaviour 
Type::Type()
{
    name = "Default"; // This will be the case of no argument
    size = 0;
}

// The argumented-called behaviour 
Type::Type(std::string n, int s)
{
    name = n; // The new instance type will get its own name by call
    size = s; // And size too
}

// This the deconstructor meant to be the free-er of memory in the class
Type::~Type()
{
    
}

void Type::setName(std::string newName) 
{
    name = newName;
}

void Type::getName() 
{
    std::cout << name << std::endl;
}