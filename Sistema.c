#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

    //CADASTRO DO LIVRO

typedef struct CadastroLivro {

    char NomeLivro[50];
    char autor[50];
    char genero[30];
    int lancamento;
    int quantidade;

    struct CadastroLivro * CLivro;

} CadastroLivro;

  //CADASTRO DE USUÁRIO

typedef struct CadastroUsuario {

    char usuario[100];
    int cpf;
    int telefone;
    int cep;
    
    struct CadastroUsuario * CUsuario;

} CadastroUsuario;

  //ACERVO

typedef struct Acervo {

    char livros[100];

    struct Acervo * Acrv;

} Acervo;

    //PESQUISA
    
typedef struct Pesquisa {

    char cliente[100];
    char NomeLivro[50];
    char autor[50];

    struct Pesquisa * PsqLivro;

} Pesquisa;

  //ALUGUEIS

typedef struct Alugueis {

    char cliente[100];
    char NomeLivro[50];
    int prazo;

    struct Alugueis * alugueis;

} Alugueis;

  //REMOÇÃO

typedef struct Remocao {

    char cliente[100];
    char NomeLivro[50];
    char genero[30];
    char autor[50];

    struct Remocao * Del;
    
} Remocao;      

  //CADASTRO DE ALUGUEL

typedef struct CadastroAluguel {

    char cliente[100];
    int telefone;
    int cpf;
    int cep;
    char estado[30];
    char cidade[30];
    char endereco [50];
    int prazo;

    struct CadastroAluguel * CAluguel;

} CadastroAluguel;


int main() {

    system ("cls");

    
    printf("  +------------------------------------------+\n");
    printf("  |                                          |\n");
    printf("  |               BIBLIOTECA                 |\n");
    printf("  |        Sistema de Gerenciamento          |\n");
    printf("  |                                          |\n");
    printf("  +------------------------------------------+\n");
    printf("  |                                          |\n");
    printf("  |                                          |\n");
    printf("  |[1]  Buscar Livro                         |\n");
    printf("  |[2]  Cadastrar Livro                      |\n");
    printf("  |[3]  Remover Livro                        |\n");
    printf("  |[4]  Registrar Emprestimo                 |\n");
    printf("  |[5]  Emprestimos                          |\n");
    printf("  |[6]  Ver Atrasados                        |\n");
    printf("  |                                          |\n");
    printf("  |[0]  Sair                                 |\n");
    printf("  |                                          |\n");
    printf("  |                                          |\n");
    printf("  |                                          |\n");
    printf("  |                                          |\n");
    printf("  +------------------------------------------+\n");
    printf("\n  Opcao: ");





    
}   