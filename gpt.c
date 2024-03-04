#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    
    return 1;
}

int main() {
    int n;
    
    do {
        printf("Nhập một số nguyên (nhập 0 để dừng): ");
        scanf("%d", &n);
        
        if (isPrime(n)) {
            printf("%d là số nguyên tố.\n", n);
        }
    } while (n != 0);
    
    return 0;
}
