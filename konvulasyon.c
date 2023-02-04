#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
	{
		int i=0,j=0,m=0,n=0,o,s,M,N,k,c=0,a=0,b=0,p=0,z=0,x=0;
		printf("MxN lik ana(A) matrisin M sonra N degerini girin:");
		scanf("%d %d",&M,&N);
		int A[M][N];
		for(i=0;i<M;i++)
		{
			for(j=0;j<N;j++)
			{
				printf("A[%d][%d] degerini girin:",i,j);
				scanf("%d",&A[i][j]);
			}
		}
		printf("kxk lik filtre(B) matrisinin k degerini girin:");
		scanf("%d",&k);
		int B[k][k];
		for(i=0;i<k;i++)
		{
			for(j=0;j<k;j++)
			{
				printf("M[%d][%d] degerini girin:",i,j);
				scanf("%d",&B[i][j]);
			}
		}
		for(i=0;i<k;i++)
		{
			for(j=0;j<k;j++)
			{
				p=p+B[i][j];
			}
		}
		
		int S[M-k+1][N-k+1];
		for(n=0;n<M-k+1;n++)
		{
			for(m=0;m<N-k+1;m++)
			{
				for(i=n;i<k+n;i++)
				{
					for(j=m;j<k+m;j++)
					{
						c+=(A[i][j]*B[z][x]);
						x++;
					}
					z++;
					x=0;
				}
				S[a][b]=c/p;
				b++;
				c=0;
				z=0;
				x=0;
			}
			a++;
			b=0;
		}
		printf("sonuc:\n");
		for(i=0;i<M-k+1;i++)
		{
			for(j=0;j<N-k+1;j++)
			{
				printf("%4d",S[i][j]);
			}
			printf("\n");
		}
		return 0;
	}
	
	
	
	
	
	
	
	
