//#include <stdio.h>
//int main(){
//	unsigned int n,k,z=0;
//
//	scanf("%u", &n);
//	
//	if(n >= 1 && n<=2000){
//			for(int i = 1; i<=n; i++){
//			scanf("%u", &k);
//			
//			if(k >= 2 && k <= 12){
//				z+=k;
//		
//				if(z+=k == 30){
//				z-=20;
//				}else if(z+=k == 12){
//				z+=16;
//				}else if(z+=k == 35){
//				z-=28;
//				}	
//			}
//			
//		}	
//	}
//	
//	printf("%u\n", z);
//	return 0;
//}

#include <stdio.h>

int main() {
    int n,k,z=0; //tambahin 0 agar tau posisi awal
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &k);

        z = (z + k)%40;
 
        if (z == 12) {
            z = 28;
        } else if (z == 35) {
            z = 7;
        } else if (z == 30) { 
            z = 10;
        }
    }

    printf("%d\n", z); 

    return 0;
}

