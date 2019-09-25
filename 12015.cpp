#include <stdio.h>

typedef struct pair{
    char arr[150];
    int val;

};
int main(){
    pair arr[100];
    int n;

    scanf("%d",&n);
    int ctr = 1;
    while(n--){
        int max = -1;
        for(int i = 0; i < 10;i++){
            scanf("%s %d",arr[i].arr,&arr[i].val);

            if(max < arr[i].val) max = arr[i].val;
        }
        printf("Case #%d:\n",ctr++);
        for(int i = 0; i < 10;i++){
            if( arr[i].val == max) printf("%s\n",arr[i].arr);
        }
    }
    return 0;

}
