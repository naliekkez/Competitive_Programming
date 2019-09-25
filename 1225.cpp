#include <stdio.h>
#include <string.h>

int main(){
    int tc, n, bil, x;
    int arr[20];
    scanf("%d", &tc);
    while(tc--){
        scanf("%d", &n);
        memset(arr, 0, sizeof(arr));
        for(int i = 1; i<=n; i++){
            bil = i;
            while(bil != 0){
                x = bil%10;
                arr[x]++;
                bil /=10;
            }
        }
        for(int i = 0; i<10; i++){
            printf("%d", arr[i]);
            if(i != 9)
                printf(" ");
            else
                printf("\n");
        }
    }
    return 0;
}
