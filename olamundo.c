int main() {
int idade;
int matricula;
float altura;
char nome[50];

printf("digite sua idade: \n");
scanf("%d", &idade);

printf("digite sua altura: \n");
scanf("%f", &altura);

printf("digite seu nome: \n");
scanf("%s", &nome);

printf("digite sua matricula: \n");
scanf("%d", &matricula);

printf("nome do aluno: %s - matricula: %d\n", nome, matricula);
printf("altura: %f - idade: %d", altura, idade);


return 0;

}
