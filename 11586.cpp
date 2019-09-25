#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
   // freopen("file.out","w",stdout);
    scanf("%d",&a);
    char tanda[3];
    int M,F;
    for(int i = 0; i < a;i++){
        int ctr = 0;
        while(1){
            ctr++;
            scanf("%s",&tanda);
           // printf("%s\n",tanda);
            char x = getchar();
            if(tanda[0] == tanda[1] && tanda[0] == 'M') M++;
            else if(tanda[0] == tanda[1] && tanda[0] == 'F') F++;

            if(x == '\n'){
                if(M == F && ctr > 1) printf("LOOP\n");
                else printf("NO LOOP\n");

                M = F = 0;
                break;
            }
        }
    }
    return 0;
}
