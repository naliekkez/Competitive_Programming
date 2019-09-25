#include <stdio.h>
#include <math.h>

int main(){
    int n, ans, j;
    bool cek;
    while(1){
        scanf("%d", &n);
        if(n == -1)
            break;
        int maks = floor(sqrt(n)) + 1;
        cek = false;
        for(int i = maks; i>1; i--){
            int bil = n;
            for(j = 0;; j++){
                if(bil%i == 1){
                    bil -= bil%i - 1;
                }
                else if(bil%i == 0){
                    if(i == j){
                        cek = true;
                        ans = i;
                        break;
                    }
                    else
                        break;
                }
                else
                    break;
            }
            if(cek)
                break;
        }
        if(n == 1){
            printf("1 coconut, ");
        }
        else
            printf("%d coconuts, ", n);
        if(cek)
            printf("%d people and 1 monkey\n", ans);
        else
            printf("no solution\n");
    }
    return 0;
}
