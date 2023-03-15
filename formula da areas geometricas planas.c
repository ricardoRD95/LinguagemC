// Essse programa foi feito para fazer calculos de forma geometricas planas.

#include<stdio.h>  //biblioteca de entrada � saida.
#include<math.h>  //biblioteca de matem�tica. 
#include<locale.h> // biblioteca de acentua��o.


int main(void){
	
	setlocale(LC_ALL,"Portuguese"); //permitir palavaras como '�, � e �' apare��o sem problemas.
	
	float area, lado, base, altura, baseMaior, baseMenor, raio, diagonalMaior, diagonalMenor; // varaveis de calculo
	float Pi=3.14; //variavel de Pi
	int i; //variavel de escolha (i). 
	int continuar; //variavel de repeti��o.
	
	do{ // fazer 

	printf("\nCALCULADORA DE GEOMETRIA PLANA\n");
	
	printf("\nQUAL FORMA GEOMETRICA IR� CALCULAR??\n");
	printf("\nEx:DIGITE  1-Quadrado / 2-Triangulo / 3-Retangulo / 4-Trapezio / 5-Circulo / 6-Losangolo\n");
	printf("\n:");
	scanf("%i",&i);
	
	switch(i)
	{
		case 1: //calcular a �rea do quadrado.
			
			printf("\n----QUADRADO----\n");
			printf("\nDigite o valor de L(lado):");
			scanf("%f",&lado);
			
			area = lado * lado;
			
			printf("\nA �REA DO QUADRADO � :%.1f\n",area);
			
			break; // fim do calculo
			
		case 2: //calcular a �rea do tri�ngulo.
			
			printf("\n---TRIANGULO---\n");
			printf("\nDgite o valor da base:");
			scanf("%f",&base);
			
			printf("\nDigite o valor da altura:");
			scanf("%f",&altura);
			
			area = (base * altura)/2;
			
			printf("\nA �REA DO TRI�NGULO � e:%.1f\n", area);
			
			break; // fim do calculo.
		
		case 3: //calcular a �rea do ret�ngulo.
			
			printf("\n---RET�NGULO---\n");
			printf("\nDigite o valor da base:");
			scanf("%f",&base);
						
			printf("\nDigite o valor da altura:");
			scanf("%f",&altura);
			
			area = base * altura;
			
			printf("\nA �REA DO RET�NGULO �: %.1f\n",area);
		
			break; // fim do calculo.
		
		case 4: //calcular a �rea de trap�zio.
			
			printf("\n---TRAP�ZIO---\n");
			printf("\nDigite o valor da base Maior:");
			scanf("%f",&baseMaior);
			
			printf("\nDigite o valor da Base Menor:");
			scanf("%f",&baseMenor);
			
			printf("\nDigite o valor da altura:");
			scanf("%f",&altura);
				
			area = (baseMaior + baseMenor) * altura / 2;
			
			printf("\nA �REA DO TRAP�ZIO �: %.1f\n",area);
			
			break; // fim do calculo.
			
		case 5: //calcular a �rea do circulo.
			
			printf("\n---CIRCULO---\n");
			printf("\nDigite o valor o raio:");
			scanf("%f",&raio);
			
			area = (raio * raio) * Pi;
			
			printf("\nA �REA DO CIRCULO �: %.1f\n",area);
			
			break; // fim do calculo.
				
		case 6: //calcular a �rea do losango.
			
			printf("\nLOSANGO\n");
			printf("\nDigite o valor do Diagolo Maior:");
			scanf("%f",&diagonalMaior);
			
			printf("\nDigite o valor do Diagolo Menor:");
			scanf("%f",&diagonalMenor);
			
			area = (diagonalMaior * diagonalMenor) / 2;
					
			printf("\nA �REA DO LOSANGO �:%.1f\n",area);
			
			break; //fim do calculo.
			
	}
	
	
	printf("\nDESEJA FAZER OUTRO CALCULO?\n");
	printf("\nSE DESEJAR FAZER OUTRO CALCULO DIGITE '1' OU PARA FINALIZAR DIGITE '0'\n");
	printf("\n:");
	scanf("%i",&continuar);
	
	}while(continuar == 1); //repetir at� que seja digitado '1'
	
	printf("\nAT� LOGO"); // fim do programa.
	
	return 0;
}
