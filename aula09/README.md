# [ Lógica de Programação I ]

## Aula de C++ - IMD 2023.2


#=======#========#=======#========#=======#======

## Sobrecarga de Operadores

- Manipulando metodos e Atributos de Tipos Definidos pelo Usuário(Classes)

- Operação entre Objetos

```

Type n;
Type f;

n + f // "No match for operator+ "Type" and "Type"

```

- Como fazer a sobrecarga?

```
//type.h

Type operator+ (Type &t); // operator + "simbolo"
Type operator++ (); 
Type& operator= (Type const &t); 



//type.cpp 

TypeObj Type::operator+ (Type &t) {
    return TypeObj(args n-1);
}

TypeObj Type::operator++ () {
    return TypeObj;
}

TypeObj& Type::operator= (Type const &t) {
    return *this;
}

```

- Cópia x Operador de Atribuição

```
    s = r      // Usa o operador de atribuição
    !=  
    Type s = r // Cria uma cópia

``` 


- Operadores de Extração e Inserção

