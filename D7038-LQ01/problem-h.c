#include <stdio.h>

int main() {
    int a, b, c, d;
    float row1_sum, row2_sum, row3_sum, row4_sum;

    // Read the input for the first row
    scanf("%d %d %d %d", &a, &b, &c, &d);
    // Calculate the sum of the first row
      row1_sum =  (a / 1.0 + b / 2.0 + c / 3.0 + d / 4.0)+(b / 2.0 + c / 3.0 + d / 4.0 + c / 3.0)+( c / 3.0 + d / 4.0 + c / 3.0 + b / 2.0)+(d / 4.0 + c / 3.0 + b / 2.0 + a / 1.0);


    scanf("%d %d %d %d", &a, &b, &c, &d);
    row2_sum =  (a / 1.0 + b / 2.0 + c / 3.0 + d / 4.0)+(b / 2.0 + c / 3.0 + d / 4.0 + c / 3.0)+( c / 3.0 + d / 4.0 + c / 3.0 + b / 2.0)+(d / 4.0 + c / 3.0 + b / 2.0 + a / 1.0);

    // Read the input for the third row
    scanf("%d %d %d %d", &a, &b, &c, &d);
    // Calculate the sum of the third row
       row3_sum =  (a / 1.0 + b / 2.0 + c / 3.0 + d / 4.0)+(b / 2.0 + c / 3.0 + d / 4.0 + c / 3.0)+( c / 3.0 + d / 4.0 + c / 3.0 + b / 2.0)+(d / 4.0 + c / 3.0 + b / 2.0 + a / 1.0);

   
    // Output the results
    printf("%.2f\n", row1_sum);
    printf("%.2f\n", row2_sum);
    printf("%.2f\n", row3_sum);

    return 0;
}
