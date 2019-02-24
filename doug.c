#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sum_rowcol(int**A, int m, int n, int r, int c);	


int main(){
	int **A, m, n, r, c;
	printf("nforme as dimensoes da matriz: m x n = ");
	
	scanf("%d%d", &m,&n);
	
	printf("Escolha uma linha (de 1 a m): r = ");
	scanf("%d", &r);

	printf("Escolha uma coluna (de 1 a n): c = ");
	scanf("%d", &c);
	
	int soma= sum_rowcol(A, m, n, r, c);
	
	printf("Soma da linha %d com a coluna %d= %d",r,c, soma);
  
	return 0;
}


int sum_rowcol(int **A, int m, int n, int r, int c){
	int soma= 0;
	
	A = (int**) malloc(m * sizeof(int*));
	
	for(int i= 0; i < m; i++)
		A[i]= (int*) malloc(n * sizeof(int));
		
	for(int i= 0 ; i<m; i++){
		for(int j= 0 ; j<n; j++){
			printf("A[%d][%d]= ", i+1, j+1);
			scanf("%d", &A[i][j]);
		}
	}	
    	
	for(int i= 0 ; i<m; i++){
		soma += A[r][i] + A[i][c];
	}
	
	for(int i= 0; i < m; i++){
		free(A[i]);
	}
	free(A);
	return soma;
}
