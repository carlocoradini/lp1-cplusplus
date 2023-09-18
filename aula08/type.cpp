#include <iostream>
#include <string>
#include "type.h"

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