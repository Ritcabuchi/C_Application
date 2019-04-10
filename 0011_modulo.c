#include <stdio.h>

int main()
{
    int i,k = 0, count = 0, num[10], tmp[10], mod;
    for (i = 0; i < 10; i++)
        scanf("%d", &num[i]);
    for (i = 0; i < 10; i++) {
        mod = num[i] % 42;
        if(!isContain(tmp, mod, k)) {
            count++;
            tmp[k] = mod;
            k++;
        }
    }
        
    printf("%d", count);

    return 0;
}

int isContain(int arr[], int x, int n) {
    int i;
    for (i=0; i<n; i++) {
        if (arr[i] == x)
            return 1;
    }
    return 0;
}
