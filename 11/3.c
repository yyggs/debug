#include <stdio.h>
#include <string.h>
int main() 
{
    int arr[35];
    memset( arr, 0, sizeof(arr));
    char n;    
    int i=1;
    while(scanf("%c",&n)!=EOF){
       if(n=='\n'){
           break;
       }
        int c=(int)n;
        arr[i % 32] += c;
        i++;
       
    }
    int bits[35];
    int j;
    for(j=0;j<32;j++){
        int d=arr[31 - j]^(arr[j] << 1);
        bits[j] = d;
    }
     for(j=0;j<32;j++){
        char t=bits[j] % 85 + 34; 
        printf("%c",t);
    }
    
    return 0;
}