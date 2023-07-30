
//EX3: Transpose
#include <stdio.h>

int main (){
	int r,c;
		printf("enter the number of rows and columns\n");
		fflush(stdin); fflush(stdout);
		scanf("%d %d",&r,&c);
		float arr3[r][c], arr31[c][r];
		int it,jt;
		//Getting the original matrix
		for(it=0;it<r;it++){
			for(jt=0;jt<c;jt++){
				printf("enter element [%d][%d] \n",it,jt);
				fflush(stdin); fflush(stdout);
				scanf("%f",&arr3[it][jt]);}}

		//Forming transpose
		for(it=0;it<c;it++){
			for(jt=0;(jt)<r;jt++){arr31[it][jt]=arr3[jt][it];}}

			//Printing Transpose
			printf("Transposed matrix =\n");
			for(it=0;it<c;it++){
				for(jt=0;jt<r;jt++){printf("%f ",arr31[it][jt]);} printf("\n");}




	return 0;
}

