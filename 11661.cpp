#include <stdio.h>
#include <stdlib.h>
int main(){
    int a;

   // freopen("file.out","w",stdout);
    while(1){
        int start,end;
        char ch[2000000];
        int min =  3000000;
        start = end = 3000000;
        scanf("%d",&a);

        if(a == 0) break;
        scanf("%s",&ch);

        for(int i = 0; i < a;i++){
        //    printf("%d %c %d ",min,ch[i],i);
            if(ch[i] == 'Z')min = 0;
            else if(ch[i] == 'R') {
                start = i;
            }
            else if(ch[i] == 'D'){
                end = i;
            }
           // printf("%d %d\n",start,end);
            if(abs(start-end) < min && start != end) min = abs(start-end);
        }
        printf("%d\n",min);
    }
    return 0;
}
