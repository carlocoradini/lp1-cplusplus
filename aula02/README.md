# [ Lógica de Programação I ]

## Aula de C++ - IMD 2023.2


#=======#========#=======#========#=======#======

### --> Aula 02 - Versionamento - GIT

# Comandos báicos de GIT:

- git clone https://dir.git ; #Clona um diretório de um GitHub acessível ao usuário global

- git add [*] ; #Adiciona as mudanças do diretório para o estágio da estação

- git diff : #Compara as diferenças dos repositórios

- git status ; #Mostra quais arquivos estão na estação e preparados para o commit

- git commit -m "Mensagem de commit"; #Lança as mudanças para a autorização de mudança do repositório;

- git push ; #Empurra para o repositório do github o novo commit;

- git branch -:
            a : #Lista todas as branchs global e local
            
- git fetch ; #Baixa arquivos de outro repo

- git pull ; #Integra com uma repo ou branch

- git config ; #Configuração de opçoes do git 

- get [comando] --help; #Chama pela documentação do comando


# Como fuciona a sintáxe do MakeFile: 

- makefile - Uma forma eficiente de compilar tudo que for necessário:

```
Main: this.o that.o getanother.o             # Para atingir o Main(.cpp) final, quais arquvios eu preciso?
    g++ this.o that.o getanother.o -o Main   # E como eu compilo os arquivos que eu preciso?

this.o:                                      # Esse arquivo, como eu consigo ele?
    g++ -c this.cpp                          # Compilando esse arquivo. E assim em diante,

that.o:
    g++ -c that.cpp                          # A introdução desse conceito de compilação torna mais fácil grandes projetos 
                                             # terem um arquivo final bem compilado e com todos arquivos
                                             # pre-processados sem muitos código
getanother.o:
    g++ -c getanother.cpp

clean:                                       # E depois, vamos limpar as dependências
    rm *.o Main

```


