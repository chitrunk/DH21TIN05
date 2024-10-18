# DH21TIN05 Thầy ơi bài 3 sài devc thì ra tam giác còn ubuntu không ra
#include <stdio.h>

int main() {
    int n;
    
    printf("Nhap so nguyen n > 0: ");
    scanf("%d", &n);

    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++; 
        }
        printf("\n");
    }
    return 0;
}

