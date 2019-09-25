#include <stdio.h>
int main(){
    int a,b;
    //freopen("file.in","r",stdin);
    //freopen("file.out","w",stdout);
    while(scanf("%d %d",&a,&b) == 2){
        if( a < 0 && b < 0) break;
        int c,d;
        c = d = 0;
        for(int i = a; i != b; ){
            c++;
            i++;
            if(i > 99) i = 0;
            if( i == b) break;
        }

        for(int i = a; i != b; ){
            d++;
            i--;
            if(i < 0) i = 99;
            if( i == b) break;

        }
        if( c < d) printf("%d",c);
        else printf("%d",d);
        printf("\n");
    }
    return 0;
}
