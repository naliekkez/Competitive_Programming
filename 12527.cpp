#include <stdio.h>
#include <string.h>

int main(){
    int n, m, j;
    int arr[10];
    int angka[20];
    int hasil, bil;
    bool cek;
    while(scanf("%d %d", &n, &m) == 2){
        hasil = 0;
        for(int i = n; i<=m; i++){
            bil = i;
            cek = true;
            j = 0;
            while(bil != 0){
                arr[j] = bil%10;
                bil /= 10;
                j++;
            }
            memset(angka, 0, sizeof(angka));
            for(int k = 0; k<j; k++){
                angka[arr[k]]++;
                if(angka[arr[k]]>1){
                    cek = false;
                    break;
                }
            }
            if(cek){
                hasil++;
            }
        }
        printf("%d\n", hasil);
    }
    return 0;
}
