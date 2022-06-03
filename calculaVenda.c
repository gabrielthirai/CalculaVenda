#include <stdio.h>
#include <math.h>

float receita;
	float s1 ()
	{
		float socio1, adm, impr, valorfinal;
		socio1 = 0.25 * receita;
	    adm = 0.1 * socio1;
	    impr = 0.15 * socio1;
		valorfinal = socio1 - adm - impr;
	    printf("\nO valor de repasse referente ao primeiro socio é de %f", valorfinal);
		printf("\nImposto de renda:", impr);
		printf("\nValor descontado da administração:", adm);
	}
	    float s2()
	    {
			float socio2, adm, impr, valorfinal, reajuste, meses = 2;
			socio2 = 0.35 * receita;
			adm = socio2 * 0.07 ;
			impr = socio2*0.15 ;
			valorfinal = socio2 - adm - impr;
			reajuste = valorfinal * pow((1+(0.0046)), meses);
			printf("\nO valor de repasse referente ao segundo socio é de %f", valorfinal);
			printf("\nImposto de renda:", impr);
			printf("\nValor descontado da administração:", adm);
			printf("\n O valor de reajuste é de: ", reajuste);
	    }
	        float s3()
	        {
				float socio3, impr, valorfinal;
				socio3 = 0.40 * receita;
				impr = 0.15 * socio3;
				valorfinal = socio3 - impr;
				printf("\nO valor de repasse referente ao terceiro socio é de %f", valorfinal);
				printf("\nImposto de renda:", impr);
				printf("\n Não será descontados os valores de administração");
			}
void main()
{
	printf("Digite a receita total");
	scanf("%f", &receita);
	s1();
	s2();
	s3();
}