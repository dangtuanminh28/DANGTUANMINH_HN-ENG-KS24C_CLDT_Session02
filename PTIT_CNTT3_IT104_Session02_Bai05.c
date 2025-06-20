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
    int position;
    printf("Nhap vi tri can xoa trong mang: ");
    scanf("%d",&position);
    if (position < n && position >= 0) {
        for (int i = position; i < n - 1; i++) {
            arr[i] = arr[i+1];
        }
        n--;
        for (int i = 0; i < n; i++) {
            printf("%d ",arr[i]);
        }
    } else {
        printf("Vi tri khong hop le");
        free(arr);
        return 0;
    }

    free(arr);

    return 0;

}