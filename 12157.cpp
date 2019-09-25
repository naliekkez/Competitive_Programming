#include <stdio.h>

int main(){
    int a;
    //freopen("file.in","r",stdin);
   // freopen("file.out","w",stdout);
    scanf("%d",&a);
    for(int i = 0; i < a;i++){
        int b;
        scanf("%d",&b);
        int arr[100];
        int mi,ju;
        mi = ju = 0;
        for(int j = 0; j < b;j++){
            scanf("%d",&arr[j]);
            mi= mi + (arr[j]/30) +1;
            ju= ju + (arr[j]/60) +1;

       // printf("mi : %d\nju: %d\n",mi,ju);
        }
        printf("Case %d: ",i+1);
        if( mi*10 < ju*15) printf("Mile %d\n",mi*10);
        else if( mi*10 > ju*15) printf("Juice %d\n",ju*15);
        else printf("Mile Juice %d\n",mi*10);

    }
    return 0;
}
