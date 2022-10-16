#include <stdio.h>

int main() {
    int num,sumatoriodivisores=0;
    printf("Introduce un numero: ");
    scanf("%d",&num);
    for (int i = 1; i <= (num/2); i++)
        if (num%i==0)
            sumatoriodivisores+=i;
    if (num==sumatoriodivisores)
        printf("Este numero SI es un numero perfecto.");
    else
        printf("Este numero NO es un numero perfecto.");
    return 0;
}
