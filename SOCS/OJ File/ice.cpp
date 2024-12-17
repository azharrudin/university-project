#include <stdio.h>
#include <math.h>
int main()
{

    FILE *fp = fopen("testdata.in", "r");

    int t;
    fscanf(fp, "%d\n", &t);

    for(int i=1; i<=t; i++)
    {
        int n;
        fscanf(fp, "%d\n", &n);

        int curr;
        int peri = 0;
        int prev = 0;
        int count = 0;
        for(int j=1; j<=n; j++){
            fscanf(fp, "%d", &curr);

            count+=curr;

            peri+=4; //hitung bagian atas dan bawah setiap kolom
            if(j==1) peri += 2*curr; // hitung sisi paling kiri
            if(j==n) peri += 2*curr; // hitung sisi paling kanan

            if(prev) peri += abs(curr-prev)*2; // hitung sisi kanan/kiri yang kosong
            prev = curr;
        }

        printf("Case #%d: %d %d\n", i, peri, count*4);
    }

    fclose(fp);

    return 0;
}