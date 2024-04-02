#include"stdio.h" //  digite o numero, acha o numero 14 na tabela 
int main(void)
{
	int x, y;
	printf("\n digite o valor de linhas: \t");
	scanf("%i", &x);
	printf("\n digite o valor de colunas:");
	scanf("%i", &y);
	int matriz[x][y];
	int i,j;
	int o = 0;
	for(i=0; i<x; i++)
	{
		for(j=0; j<y; j++)
		{
			matriz[i][j] = 1 + o;
			printf("%i\t", matriz[i][j]);
			o++;
		}
		printf("\n");
	}
	for(i=0; i<x; i++)
	{
		for(j=0; j<y; j++)
		{
			if(matriz[i][j] == 14) {
				printf("o numero 14 se encontra na linha %d e na colubna %d", i+1, j+1);
			}	
		}
	}

	return 0;
}
