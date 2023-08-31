# Empilhamento em C++ (Stack)

Um pequeno código simulando uma pilha em C++ para a disciplina de Gestão de Sistemas Operacionais.

O sistema de pilha foi feito de forma LIFO (Last In First Out) em que, como o nome sugere, o último item a ser incluído será o primeiro a sair.

O código se encontra no arquivo [main](https://github.com/valimnathaly/Pilha/blob/main/main/main.cpp), sendo uma pequena aplicação de console.

# Algoritmo 
## Antes de iniciar o código, foi feito um algoritmo simples para definir a lógica necessária para o empihamento

definir o tamanho da pilha globalmente (MAX_ITENS)
definir a pilha globalmente
definir a variável de topo iniciando em -1 globalmente

função push(item):
    SE a pilha estiver cheia
        escreva "Pilha Cheia" e não realize o empilhamento
    SENÃO
        adicione o item à pilha
        incremente a variável topo
    FIM SE

fução pop():
    SE a pilha estiver vazia
        escreva "Pilha Vazia!!" e não realize o desempilhamento
    SENÃO 
        escreva "Desempilhado" como aviso
        limpe o item de topo da pilha
        decremente a variável topo
    FIM SE

função exibePilha():
    escreva "Posição/Valor"

    PARA i de 0 até tamanho da pilha
        escreva valor de i, "/", pilha[i]
    FIM PARA

algoritmo principal:
    define variável menu
    define variável item

    FAÇA
        exibePilha()
        escreva "Menu"
        escreva "1- Adicionar um item"
        escreva "2- Excluir um item"
        escreva "3- Sair"

        leia menu

        ESCOLHA menu
            CASO 1
                escreva "Insira o item a ser adicionado:"
                leia item
                push(item)
            CASO 2
                pop()
            CASO 3
                escreva "Fechando o Sistema"
        FIM ESCOLHA
    ENQUANTO menu for diferente de 3