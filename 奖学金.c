#include <stdio.h>
#include <string.h>
int main(){
    char input[1100], result[1001];
    int len, m;
    while (scanf("%s %d", input, &m) != EOF){
        len = strlen(input);
        int min_pos = -1, k = 0;
        int i, t;
        char min;
        t = len - m;
        while (t--){
            min_pos++;
            min = input[min_pos];
            for (i = min_pos + 1; i<len - t; i++){
                if (min>input[i]){
                    min_pos = i;
                    min = input[i];
                }
            }
            result[k++] = min;
        }
        for (i = 0; i<k; i++)
            if (result[i] != '0')
                break;
        if (i == k)
            printf("0\n");
        else{
            for (; i<k; i++)
                printf("%c", result[i]);
            printf("\n");
        }
    }
    return 0;
}

