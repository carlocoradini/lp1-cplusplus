# [ Lógica de Programação I ]

## Aula de C++ - IMD 2023.2


#=======#========#=======#========#=======#======

## Gerenciamento de Memória e Ponteiros Inteligentes

### Estática vs. Dinâmica

- Stack vs. Heap

```
int vetor = 0;  # Estática, um valor bruto

int *vetor;     # Dinâmica, uma posição onde tem um valor

```

- C vs C++

```
# Em C

int *vetor = malloc/calloc;

free(vetor);
```

```
# Em C++

T *p = new T;

delete p;
```

- Problemas comuns em Dinâmica
    - Memory Leak
    - BUffer Overflow
    - Memória não inicializada
    - Double free/delete


- Templates de Classes

    - Uma classe generica p/ representar uma classe "modificavel"

```
template <class T>
class Par {
    private:
        T primeiro;
        T segundo;
    public:
        Par(T a, T b);
        T getPrimeiro();
        T getSegundo();
        void setPrimeiro(T v);
        void setSegundo(T v); 
};


int main() {

    Par<int> p(1,2);

    return 0;
}

```
 

- Deduzindo tipos com uso de auto

    - Resolução Comum: Para deduzir tipos em Containers;

```
int x = 10;
auto y = x; # Uso incomum
```

```
std::vector<std::string> nomes;

for ( (std::vector<std::string>)::iterator i = nomes.begin(); #...

for ( (auto) i = nomes.begin(); i++) {} #...

```

- Ponteiros Inteligentes

    - Quando saí de escopo, libera automaticamente a memoria;

```
// Normal

Dado* umDado = new Dado();

// Inteligente

// Estrutura Mínima
// É obrigatorio as sobrecargas de operadores,
//  e o destrutor e construtor serão assim...

template <typename T>
class PonteiroInteligente {
public:    
    PonteiroInteligente (T * _ponteiro): ponteiro(_ponteiro);
    ~PonteiroInteligente () {
        delete ponteiro;
    }
    T* operator->() const { return ponteiro; };
    T& operator*() const { return *ponteiro; };
private:
    T *ponteiro; 
};


int main() {

    PonteiroInteligente<int> ptr(new int(80)); 

} // Quando acabar, a memória vai ser liberada


```

- Ponteiros Inteligentes do C++11;

    - Biblioteca: include "<memory>"

    - Tipos de ponteiros intel.

        - unique_ptr;
            Não pode ser copiado, mas pode ser movido 
            std::make_unique() // Para criar o ponteiro

            ```

            ```

        - shared_prt;
            Objeto que recebe vários ponteiros, 
                e com contador de ponteiros (.use_count())


        - weak_ptr;
            Acessa shread ptrs mas não acrescenta no contator de ponteiros;
