#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("So phan tu trong mang ban nhap la: ");
    scanf("%d",&n);

    int* arr = (int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++) {
        printf("Moi ban nhap gia tri cho phan tu thu %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int check;
    printf("Moi ban nhap so can tinh so lan xuat hien: ");
    scanf("%d",&check);

    int count=0;
    for(int i=0;i<n;i++) {
        if(arr[i]==check) {
            count++;
        }
    }

    printf("So %d xuat hien %d lan",check,count);

    free(arr);

    return 0;
}