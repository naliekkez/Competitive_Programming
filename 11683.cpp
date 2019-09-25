#include <stdio.h>


int main(){
    int a,b;
//freopen("file.in","r",stdin);
//freopen("file.out","w",stdout);
    while(1){
        int max;
        max = -1;
        scanf("%d",&a);
        if(a == 0) break;
        scanf("%d",&b);
        int start;
        int l;
        scanf("%d",&l);
        int ans = a-l;
        int curr = l;
        for(int i = 1; i < b;i++){
            scanf("%d",&l);

            if(l < curr) ans = ans + curr - l;
            curr = l;
        }
        printf("%d\n",ans);
    }
    return 0;
}
