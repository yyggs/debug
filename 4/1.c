#include<stdio.h>
#include<math.h>

int main() {
    int n = 10;
    int m;
    int a[10];
    int i,j;
    int temp= 0; 
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(i=0;i<10;i++) {
        for(j=i+1;j<10;j++){
            if(a[i] < a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(i=0;i<9;i++){
        printf("%d ",a[i]);
    }
    printf("%d",a[9]);
    return 0;
} 
