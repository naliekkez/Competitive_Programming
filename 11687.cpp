#include <stdio.h>
#include <string.h>
char str[1000010];

int main(){
   // freopen("file.in","r",stdin);
    //freopen("file.out","w",stdout);
    int x;
    int ctr;
    while(scanf("%s",str) == 1){
         ctr = 1;
         x = strlen(str);
        if(strcmp(str,"1") == 0){
            printf("1\n");
        }
        else if(str[0] == 'E'){
            break;
        }
        else {
            while(1){
                int j = 0;
                int i;
                for(i = 1; i <= x;i*=10);
               // printf("%d\n",i);
                for(; i >= 10;i/=10,j++){
                    //printf("%d",((x%(i))/(i/10)) );
                    str[j] = ((x%(i))/(i/10)) + '0';
                }
                str[j] = '\0';
                int l = strlen(str);
                ctr++;


                //printf("%s %d %d\n",str,l,x);
                if( l == x){
                    x = -1;

                    printf("%d\n",ctr);

                    break;
                }
                x = l;

            }
        }
    }
    return 0;
}
