#include <stdio.h>
#include <stdlib.h>

// Estrutura para armazenar os cadastro 
struct Cadastro {
    char nome[100];
    int idade;
    int matricula;
    char endereco[100];
    char curso[100];
    char periodo[50];
    char disciplinas[100];
    float valorMensalidade;
};

// Função de Limpar buffer
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    // Armazenando Cadastro
    struct Cadastro aluno;

    // Variaveis do cadastro
    printf("Cadastro de Aluno\n");
    printf("Nome: ");
    fgets(aluno.nome, sizeof(aluno.nome), stdin);

    printf("Idade: ");
    scanf("%d", &aluno.idade);
    limparBuffer();
    
    printf("Matricula: ");
    scanf("%d", &aluno.matricula);
    limparBuffer();
    
    printf("Endereco: ");
    fgets(aluno.endereco, sizeof(aluno.endereco), stdin);

    printf("Curso: ");
    fgets(aluno.curso, sizeof(aluno.curso), stdin);

    printf("Periodo: ");
    fgets(aluno.periodo, sizeof(aluno.periodo), stdin);

    printf("Disciplinas: ");
    fgets(aluno.disciplinas, sizeof(aluno.disciplinas), stdin);

    printf("Valor da Mensalidade: ");
    scanf("%f", &aluno.valorMensalidade);

    // Area para exibir as variaveis cadastradas 
    printf("\nInformacoes do Cadastro:\n");
    printf("Nome: %s", aluno.nome);
    printf("Idade: %d\n", aluno.idade);
    printf("Matricula: %d\n", aluno.matricula);
    printf("Endereco: %s", aluno.endereco);
    printf("Curso: %s", aluno.curso);
    printf("Periodo: %s", aluno.periodo);
    printf("Disciplinas: %s", aluno.disciplinas);
    printf("Valor da Mensalidade: R$ %.2f\n", aluno.valorMensalidade);

    return 0;
}
