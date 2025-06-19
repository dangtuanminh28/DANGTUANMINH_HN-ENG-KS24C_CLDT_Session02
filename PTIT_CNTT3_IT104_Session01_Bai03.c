#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Moi ban nhap so phan tu cho mang: ");
    scanf("%d",&n);

    int* arr = (int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++) {
        printf("Moi ban nhap gia tri cho phan tu thu %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int temp;
    for(int i=0;i<n/2;i++) {
        temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }

    for(int i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }

    free(arr);

    return 0;
}