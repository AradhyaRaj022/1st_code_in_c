#include <stdio.h>
int main(){
    int C;
    printf("Enter Celcius Value Please");
    scanf("%d", &C);
    printf("The Fahrenheit value for %d celsius is %f", C , C*1.8+32);
    return 0;
} 