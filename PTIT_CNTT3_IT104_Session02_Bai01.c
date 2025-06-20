#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Moi ban nhap so phan tu cho mang: ");
    scanf("%d", &n);

    int* arr = (int*)malloc(n * sizeof(int));
    for(int i=0;i<n;i++) {
        printf("Moi ban nhap gia tri cho vi tri %d: ",i+1);
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    for(int i=0;i<n;i++) {
        if(arr[i]>max) {
            max = arr[i];
        }
    }
    printf("Phan tu lon nhat trong mang ban nhap la: %d",max);

    free(arr);

    return 0;
}