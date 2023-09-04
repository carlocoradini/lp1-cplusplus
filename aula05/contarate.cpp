// Função para contar até o argumento
#include "contarate.h" 
#include <iostream>

void contarAte(int n) 
{
    int i = 0;
    while (i < n + 1)
    {   
        std::cout << "Número " << i << std::endl;
        i++;
    }
}