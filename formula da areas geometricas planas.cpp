// Essse programa foi feito para fazer calculos de forma geometricas planas.

#include<stdio.h>  //biblioteca de entrada é saida.
#include<math.h>  //biblioteca de matemática. 
#include<locale.h> // biblioteca de acentuação.


int main(void){
	
	setlocale(LC_ALL,"Portuguese"); //permitir palavaras como 'ç, ã e õ' apareção sem problemas.
	
	float area, lado, base, altura, baseMaior, baseMenor, raio, diagonalMaior, diagonalMenor; // varaveis de calculo
	float Pi=3.14; //variavel de Pi
	int i; //variavel de escolha (i). 
	int continuar; //variavel de repetição.
	
	do{ // fazer 

	printf("\nCALCULADORA DE GEOMETRIA PLANA\n");
	
	printf("\nQUAL FORMA GEOMETRICA IRÁ CALCULAR??\n");
	printf("\nEx:DIGITE  1-Quadrado / 2-Triangulo / 3-Retangulo / 4-Trapezio / 5-Circulo / 6-Losangolo\n");
	printf("\n:");
	scanf("%i",&i);
	
	switch(i)
	{
		case 1: //calcular a área do quadrado.
			
			printf("\n----QUADRADO----\n");
			printf("\nDigite o valor de L(lado):");
			scanf("%f",&lado);
			
			area = lado * lado;
			
			printf("\nA ÁREA DO QUADRADO É :%.1f\n",area);
			
			break; // fim do calculo
			
		case 2: //calcular a área do triângulo.
			
			printf("\n---TRIANGULO---\n");
			printf("\nDgite o valor da base:");
			scanf("%f",&base);
			
			printf("\nDigite o valor da altura:");
			scanf("%f",&altura);
			
			area = (base * altura)/2;
			
			printf("\nA ÁREA DO TRIÂNGULO É e:%.1f\n", area);
			
			break; // fim do calculo.
		
		case 3: //calcular a área do retângulo.
			
			printf("\n---RETÂNGULO---\n");
			printf("\nDigite o valor da base:");
			scanf("%f",&base);
						
			printf("\nDigite o valor da altura:");
			scanf("%f",&altura);
			
			area = base * altura;
			
			printf("\nA ÁREA DO RETÂNGULO É: %.1f\n",area);
		
			break; // fim do calculo.
		
		case 4: //calcular a área de trapézio.
			
			printf("\n---TRAPÉZIO---\n");
			printf("\nDigite o valor da base Maior:");
			scanf("%f",&baseMaior);
			
			printf("\nDigite o valor da Base Menor:");
			scanf("%f",&baseMenor);
			
			printf("\nDigite o valor da altura:");
			scanf("%f",&altura);
				
			area = (baseMaior + baseMenor) * altura / 2;
			
			printf("\nA ÁREA DO TRAPÉZIO É: %.1f\n",area);
			
			break; // fim do calculo.
			
		case 5: //calcular a área do circulo.
			
			printf("\n---CIRCULO---\n");
			printf("\nDigite o valor o raio:");
			scanf("%f",&raio);
			
			area = (raio * raio) * Pi;
			
			printf("\nA ÁREA DO CIRCULO É: %.1f\n",area);
			
			break; // fim do calculo.
				
		case 6: //calcular a área do losango.
			
			printf("\nLOSANGO\n");
			printf("\nDigite o valor do Diagolo Maior:");
			scanf("%f",&diagonalMaior);
			
			printf("\nDigite o valor do Diagolo Menor:");
			scanf("%f",&diagonalMenor);
			
			area = (diagonalMaior * diagonalMenor) / 2;
					
			printf("\nA ÁREA DO LOSANGO É:%.1f\n",area);
			
			break; //fim do calculo.
			
	}
	
	
	printf("\nDESEJA FAZER OUTRO CALCULO?\n");
	printf("\nSE DESEJAR FAZER OUTRO CALCULO DIGITE '1' OU PARA FINALIZAR DIGITE '0'\n");
	printf("\n:");
	scanf("%i",&continuar);
	
	}while(continuar == 1); //repetir até que seja digitado '1'
	
	printf("\nATÉ LOGO"); // fim do programa.
	
	return 0;
}
