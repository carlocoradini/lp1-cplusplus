# [ Lógica de Programação I ]

## Aula de C++ - IMD 2023.2

#=======#========#=======#========#=======#======


## Header file 
 
- Standard x Non-Standard: Pre-existente x Usuario-definida

1. Standard:
    Bibliotecas pré definidas para o uso geral(ISO) da linguagem de maneira a facilitar a colaboração entre códigos.
    ex.:
        - <iostream> # C++
        - <stdio.h> # C
        - <vector> # C++ vectors

2. Non Standard:
    Precisam ser instaladas manualmente, ou estar citada no pre-processamento para poder fazer parte do código.
    ex.:
        - "include/geometria.h" # Precisa especificar até o diretório onde encontra-se o header
    

- Para Criar Header:

    - Header.h:
        Necessita das chamadas das funções;

    - Header.cpp:    
        Onde realmente estão escritas as funções;
        -> Opcional, mas inclua o header.h correspondente; 

    ### - IMPORTANTE:
        :: Incluir o header.cpp na compilação!
            (neste repo)ex.: g++ -o test.o contarate.cpp aula05.cpp



