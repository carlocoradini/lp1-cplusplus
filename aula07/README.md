# [ Lógica de Programação I ]

## Aula de C++ - IMD 2023.2


#=======#========#=======#========#=======#======

## Introdução a Orientações a Objetos:


- Contextualização:

    - Struct (Tipo Primitivo) x Criar novo tipos


- Paradigma de Programção:

    - Facilitar o desenvolvimento de programas;
    - Novos conceitos para a representação do mundo real;
    - Melhor produtividade e qualidade;


- Abstração:

    - Conceito fundamental 
    - Entidade: Aquilo que é real. Que tem Caracteristicas e Ações;
        - Em geral: Classes <-- Atributos & Métodos;


- Encapsulamento:

    - Assegurar que o programa não seja acessível todas suas partes;


- Classes e Obejtos:

    - Objeto = Instância de Classe;
    - Classe = O Molde; = Tipo de um Objeto;
    - Objeto := 
        1. Identidade (Endereço)
        2. Atributos (Dados)
        3. Métodos ("Funções")

    - Membros do Objeto := 
        1. Data Member - Atributos;
        2. Function Member - Métodos;


- Criando Classes:

        ```
           class NameClass {
                int data            // Atributo
                int dataTwo         // Atributo

                int funcOne() {     // Método (inline)

                }

                int funcTwo() {     // Método (inline)

                }
           };  // Ponto e Virgula OBRIGATÓRIO

        ```
    - Implementação x Definição ;
        - .cpp x .h
        - Modularização entre .cpp e .h
        ### - named.h:
        ```
           class NameClass {
                int data          
                int dataTwo         

                int funcOne(); 
                int funcTwo();
           };  

        ```
        ### - named.cpp:
        ```
        #include "named.h"

        int NameClass::funcOne() {
                    // E aqui definimos de fato a função;
        }

        int NameClass::funcTwo() {
                    // E aqui definimos de fato a função;
        }

        ```

    - Criando Objetos

        - Objeto stático: 

        ```
        int main() {

            NameClass obj;

            return 0;
        }

        ```

        - Forma dinâmica: (Mais avançado)

        ```
        int main() {

            NameClass *obj = new NameClass();

            return 0;
        }

        ```

    - Visibilidade:
        - Sobre Atributos e Métodos; Se é acessível fora da classe;
        - Tipos:
            1. public - Seja dentro ou fora;
            2. private - Apenas a métodos da propria Classe;
            3. protected - Apenas a métodos da Classes e Sub-classes;

        ```
        class SomeClass() {
            private:
                // Em boas praticas, atributos são privados
            public:
        }       // E Métodos são publicos

        ```
        - Modelagem:
        ```
        // header.h
        class SomeClass() {
            public:
            int integer;
        }       

        // main.cpp
        #include "header.h"

        int main() {

            SomeClass objeto;
            objeto.integer = 10;

            return 0;
        }
        ```

        - Operador de Classe:
            - Não é possível acessar atribuitos e métodos privados;
            - Então, deve-se criar métodos públicos(accessors) <-- Getters e Setters;
                - Getters x Setters:
                    - Getters: <Tipo de Retorno> get<Nome do Atributo>();
                        Retorna o valor do atributo;
                    - Setters: void set<Nome do Atributo>(<argumentos>);
                        Modifica o valor do atributo; Recebe um valor para ser atribuido à função;
                    