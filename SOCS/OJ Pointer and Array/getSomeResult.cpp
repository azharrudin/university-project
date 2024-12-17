#include <stdio.h>
int main(){
	int t,n;
	int matriks1[100][100];
	int matriks2[100][100];
	int matriks3[100][100];
	
	int hasil1[100][100];
	int hasil2[100][100];
	scanf("%d", &t);
	
	for(int i=1; i<=t; i++){
		scanf("%d", &n);
		
		//matriks1
		for(int baris=1; baris<=n; baris++){
			for(int kolom=1; kolom<=n; kolom++){
				scanf("%d", &matriks1[baris][kolom]);
			}
		}
		
		
		//matriks2
		for(int baris=1; baris<=n; baris++){
			for(int kolom=1; kolom<=n; kolom++){
				scanf("%d", &matriks2[baris][kolom]);
			}
		}
		
		
		//inisialisasi hasil1 0
		for(int b=1; b<=n; b++){
			for(int k=1; k<=n; k++){
				hasil1[b][k] = 0;
			}
		}
		
		//inisialisasi hasil2 0
		for(int b=1; b<=n; b++){
			for(int k=1; k<=n; k++){
				hasil2[b][k] = 0;
			}
		}
		
		//perkalian
		for(int b=1; b<=n; b++){
			for(int k=1; k<=n; k++){
				for(int x=1; x<=n; x++){
					hasil1[b][k] += matriks1[b][x] * matriks2[x][k];
				}
				
			}
		}
		
		//matriks3
		for(int baris=1; baris<=n; baris++){
			for(int kolom=1; kolom<=n; kolom++){
				scanf("%d", &matriks3[baris][kolom]);
			}
		}
		
		
		//perkalian
		for(int b=1; b<=n; b++){
			for(int k=1; k<=n; k++){
				for(int x=1; x<=n; x++){
					hasil2[b][k] += hasil1[b][x] * matriks3[x][k];
				}
				
			}
		}
		
		//print hasil
		printf("Case #%d:\n",i);
		for(int baris=1; baris<=n; baris++){
			for(int kolom=1; kolom<=n; kolom++){
				printf("%d%c", hasil2[baris][kolom],((kolom==n)?'\n':' '));
			}
		}
	}
}
