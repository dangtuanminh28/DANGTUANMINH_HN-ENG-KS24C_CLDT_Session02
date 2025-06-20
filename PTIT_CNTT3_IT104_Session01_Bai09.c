#include <stdio.h>
int main(void) {
    int arr[7] = {1,3,2,5,3,3,5};
    int maxCount=0;
    int item;
    for (int i=0;i<6;i++) {
        int count=0;
        for (int j=0;j<6;j++) {
           if (arr[j]==arr[i]) {
               count++;
           }
        }
        if (count>maxCount) {
            maxCount=count;
            item=arr[i];
        }
    }
    printf("Phan tu xuat hien nhieu nhat %d ",item);
}