#include <iostream>
#include <string>
#include "type.h"

int main() {

    // I've created a empty type, but its Default named
    Type empty;
    // Now I can change the name    
    empty.setName("Empty"); 

    empty.getName();  

    // And a Graph type
    Type graph("Graph", 100);

    graph.getName();


    return 0;
    
}