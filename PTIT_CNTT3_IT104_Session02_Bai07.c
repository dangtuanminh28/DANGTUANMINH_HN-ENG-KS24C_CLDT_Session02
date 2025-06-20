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
    int total;
    printf("Nhap vi tri tong can tim trong mang: ");
    scanf("%d",&total);
    int count = -1;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] + arr[j] == total) {
                printf("%d %d \n",arr[i],arr[j]);
                count++;
            }
        }
    }

    if (count == -1) {
        printf("Khong tim thay");
        free(arr);
        return 0;
    }

    free(arr);
    return 0;
}