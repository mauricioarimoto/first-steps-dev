/*	Suponha que a turma da disciplina de programação I do curso de Ciência da Computação
	tenha feito uma prova final. Faça um programa que leia a quantidade de alunos na 
	turma, em seguida, calcule e mostre:
	• o número de alunos aprovados na disciplina;
	• a média obtida pela turma;
	• o percentual de alunos que ficaram de exame na disciplina;
	• o percentual de alunos que reprovaram na disciplina.
	@mauricio
*/
#include <stdio.h>

int main() {
	int qtdeAlunos, alunosAprovados, alunosExame, alunosReprovados;
	float nota, somaNota, mediaTurma, percentualAlunosExame, percentualAlunosReprovados;


	printf("Entre com  a quantidade de alunos: \n");
	scanf("%d", &qtdeAlunos);

	somaNota = alunosAprovados = alunosExame = alunosReprovados = 0;
	for (int i = 1; i <= qtdeAlunos; i++) {
		printf("Nota aluno[%d~]: ", i);
		scanf("%f", &nota);

		somaNota += nota;

		// Considerando que a nota mínima para aprovação é 7
		if (nota >= 7) {
			alunosAprovados++;
		}
		else if (nota >= 4) {
			alunosExame++;
		}
		else {
			alunosReprovados++;
		}
	}
		// Relatório final 
		mediaTurma = somaNota / qtdeAlunos;
		percentualAlunosExame = (float)alunosExame / qtdeAlunos * 100; 
		percentualAlunosReprovados = (float)alunosReprovados / qtdeAlunos * 100;

		printf("\nMédia da turma: %.2f\n", mediaTurma);
		printf("Número de alunos aprovados: %d\n", alunosAprovados);
		printf("Percentual de alunos de exame: %.2f%\n", percentualAlunosExame);
		printf("Percentual de alunos de Reprovados: %.2f%\n", percentualAlunosExame);
		
	return 0;
}