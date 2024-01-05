#include <stdio.h>
	
	double average(int arr[], int size) {
	    if (size <= 0) {
	        printf("Kích thuoc mang khong hop le.\n");
	        return 0.0;
	    }
	
	    int sum = 0;
	
	    for (int i = 0; i < size; i++) {
	        sum += arr[i];
	    }
	
	    return (double)sum / size;
	}
	
	int main() {
	    int n;
	
	    printf("Nhap kich thuoc cua mang ");
	    scanf("%d", &n);
	
	    if (n <= 0) {
	        printf("Kich thuoc mang khong hop le.\n");
	        return 1;
	    }
	
	    int arr[n];
	
	    printf("Nhap ki tu mang:\n");
	    for (int i = 0; i < n; i++) {
	        printf("Ki tu %d: ", i + 1);
	        scanf("%d", &arr[i]);
	    }
	
	    double result = average(arr, n);
	    printf("The average of the array is: %.2f\n", result);
	
	    return 0;
	}