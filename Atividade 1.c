#include<stdio.h>

main(){
 //inserir dados 

 int idade, periodo;
 char nome[20], endereco[50], curso[50], matricula[16], disciplina[30];

 printf("nome:\n");
 fgets(nome, 20, stdin);
  fflush(stdin);

 printf("idade:\n");
 scanf("%d", &idade);
  fflush(stdin);

 printf("matricula:\n");
 fgets(matricula, 16, stdin);
 fflush(stdin);

 printf("endereco:\n");
 fgets(endereco, 50, stdin);
 fflush(stdin);

 printf("curso:\n");
 fgets(curso, 50, stdin);
 fflush(stdin);

 printf("periodo:\n");
 scanf("%d", &periodo);
 fflush(stdin);
 
 printf("disciplina:\n");
 fgets(disciplina, 30, stdin);
 fflush(stdin);

 printf("Dados informados:\n");
 printf("Nome: %s\n", nome);
 printf("Idade: %d\n", idade);
 printf("Matricula: %s\n", matricula);
 printf("Endereco: %s\n", endereco);
 printf("Curso: %s\n", curso);
 printf("Periodo: %d\n", periodo);
 printf("Disciplina: %s\n", disciplina);



}
