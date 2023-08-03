#include <stdio.h>
#include <string.h>

struct Livros {
    char titulo[50];
    char autor[50];
    int numPaginas;
} ;

struct Biblioteca{
    Livro livros[10];
    int quantidade;
};

void lerLivro(Livro *livro) {
    printf("Digite o titulo do livro: ");
    fgets(livro->titulo, 50, stdin);

    printf("Digite o autor do livro: ");
    fgets(livro->autor, 50, stdin);

    printf("Digite o número de páginas do livro: ");
    scanf("%d", &livro->numPaginas);

    ;
}

void imprimirLivro(Livro livro) {
    printf("Titulo: %s", livro.titulo);
    printf("Autor: %s", livro.autor);
    printf("Numero de paginas: %d\n", livro.numPaginas);
}

void imprimirBiblioteca(Biblioteca biblioteca) {
    printf("Livros na biblioteca:\n");
    for (int i = 0; i < biblioteca.quantidade; i++) {
        imprimirLivro(biblioteca.livros[i]);
    }
}

void imprimirMaiorNumPaginas(Biblioteca biblioteca) {
    int indiceMaiorNumPaginas = 0;
    for (int i = 1; i < biblioteca.quantidade; i++) {
        if (biblioteca.livros[i].numPaginas > biblioteca.livros[indiceMaiorNumPaginas].numPaginas) {
            indiceMaiorNumPaginas = i;
        }
    }

    printf("Livro com o maior numero de paginas na biblioteca:\n");
    imprimirLivro(biblioteca.livros[indiceMaiorNumPaginas]);
}

