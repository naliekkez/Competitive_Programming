#include <stdio.h>
#include <string.h>
int arr[25][25];
int number[25][25];

int n;

int lcs(int a, int b){
    memset(arr,0,sizeof(arr));


    for(int i = 1; i <= n;i++){
        for(int j = 1; j <= n;j++){
            if(number[a][j] == number[b][i] ) arr[i][j]+=1;
            arr[i][j]+= (arr[i-1][j] > arr[i][j-1] ? arr[i-1][j] : arr[i][j-1]  );
        }
    }

    return arr[n][n];

}
int main(){
   // freopen("file.in","r",stdin);
  //  freopen("file.out","w",stdout);
    scanf("%d",&n);
     memset(number,0,sizeof(number));
    for(int i = 1; i <= n;i++) {
        int x;
        scanf("%d",&x);
        number[1][x] = i;
    }
    bool exist = true;
    while(exist){
        for(int j = 1; j <= n;j++){
             int x;
             if(scanf("%d",&x) != 1){

                exist = false;
                break;
             }
             number[2][x] = j;
        }
        if(!exist)break;
        //for(int i = 0; i < n;i++) printf("%d ",number[2][i]);
        //printf("\n");
        printf("%d\n",lcs(1,2));
    }
    return 0;
}
