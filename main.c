#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>


struct Cursos {
    
    char curso[50];
    int semestre;
};

struct Aluno {
    int ID;
    char nome[100];
    char matricula[10];
    int idade;
    struct Cursos curso;
};



void display(struct Aluno *aluno);

void add(struct Aluno *aluno);

void rem(struct Aluno *aluno);

void imprime(struct Aluno *aluno);




int main() {
    struct Aluno *aluno = NULL; // Ponteiro para a struct Aluno
    aluno = (struct Aluno *)malloc(sizeof(struct Aluno));

    if (aluno == NULL) {
        printf("Erro na alocação de memória\n");
        exit(0);
    }
    
    while(true){
        display(aluno);


        free(aluno);
        break;
    }

    
   
    return 0;
}




void add(struct Aluno *aluno) {
    FILE *arquivo;
    arquivo = fopen("banco_de_dados_alunos.txt", "a"); // Abre o arquivo para escrita (modo "a" para adicionar ao final do arquivo)
    int c;

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    
    printf("\nNome do aluno: ");
    fgets(aluno->nome,100,stdin);
     
    while ((c = getchar()) != '\n' && c != EOF);
    printf("\nMatrícula:");
    fgets(aluno->matricula,10,stdin);
    while ((c = getchar()) != '\n' && c != EOF);
    printf("\nidade: ");
    scanf("%d",&aluno->idade);
    while ((c = getchar()) != '\n' && c != EOF);
    printf("\nCuros: ");
    fgets(aluno->curso.curso,50,stdin);
    while ((c = getchar()) != '\n' && c != EOF);
    printf("\nsemestre: ");
    scanf("%d",&aluno->curso.semestre);
    while ((c = getchar()) != '\n' && c != EOF);

    // Escreve as informações do aluno no arquivo
   
    fprintf(arquivo, "Nome: %s\n", aluno->nome);
    fprintf(arquivo, "Matrícula: %s\n", aluno->matricula);
    fprintf(arquivo, "Idade: %d\n", aluno->idade);
    fprintf(arquivo, "Curso: %s\n", aluno->curso.curso);
    fprintf(arquivo, "Semestre: %d\n", aluno->curso.semestre);
    fprintf(arquivo, "\n");

    fclose(arquivo); // Fecha o arquivo
}

void rem(struct Aluno *aluno) {
   
}

void imprime(struct Aluno *aluno) {
   
}

void display(struct Aluno *aluno) {
    char op;
    printf("\nA - Adicionar, R - Remover, P - Imprimir, S - Sair: ");
    scanf(" %c", &op);
    op = toupper(op);
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    switch (op) {
        case 'A':
        
            add(aluno);
            break;
        case 'R':
            
            break;
        case 'P':
            
            break;
        case 'S':
            
            exit(0);
        default:
            printf("Escolha uma opção válida.\n");
    }
}
