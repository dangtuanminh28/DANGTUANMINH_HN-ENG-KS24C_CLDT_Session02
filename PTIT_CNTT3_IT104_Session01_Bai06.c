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
    printf("Nhap vi tri can them trong mang: ");
    scanf("%d",&position);
    if (position < n && position >= 0) {
        int value;
        printf("Nhap gia tri can them trong mang: ");
        scanf("%d",&value);

        n++;
        for (int i = n; i > position; i--) {
            arr[i] = arr[i-1];
        }
        arr[position] = value;

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