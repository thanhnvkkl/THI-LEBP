#include <stdio.h>

int main() {
    int n;
    printf("Nhap so luong phan tu trong day: ");
    scanf("%d", &n);
    int numbers[n];
    printf("Nhap day so nguyen, cach nhau boi dau cach:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    int last_even = -1;
    for (int i = 0; i < n; i++) {
        if (numbers[i] % 2 == 0) {
            last_even = numbers[i];
        }
    }
    if (last_even != -1) {
        printf("So chan cuoi cung trong day la: %d\n", last_even);
    } else {
        printf("No Even number\n");
    }

    return 0;
}