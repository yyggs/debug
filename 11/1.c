#include <stdio.h>
#include <string.h>

int main() 
{
    int arr[35] = {0};
    char input[500];
    int bits[35];
    char result[35];
    int i = 1, j = 0;
    //while (scanf("%c\n", &input[i - 1]) != EOF) {
    scanf("%s",input + 1);
    for(int i = 1; i <= strlen(input + 1); i++) {
        arr[i % 32] = arr[i % 32] + (int)input[i];
    }
 
    for (j = 0; j <= 31; j++) {
        bits[j] = arr[31 - j] ^ (arr[j] << 1);    
    }
    
    for (j = 0; j <= 31; j++) {
        result[j] = (bits[j] % 85) + 34;    
    }
    
    puts(result);
    return 0;
}