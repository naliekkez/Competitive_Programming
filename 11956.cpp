#include <stdio.h>


int main(){
    int t;

   // freopen("file.in","r",stdin);
   // freopen("file.out","w",stdout);
    int arr[110];
    char ins[100010];
    scanf("%d\n",&t);
    for(int i = 0; i < t;i++){
        int ptr = 0;
        for(int j = 0; j < 100;j++) arr[j] = 0;
        scanf("%s",ins);
        for(int j = 0; ins[j] != '\0';j++){
            if(ins[j] == '>'){
                ptr++;
                if(ptr >= 100) ptr-=100;
            }
            else if(ins[j] == '<') {
                ptr--;
                if(ptr < 0)ptr+=100;
            }
            else if( ins[j] == '+'){
                arr[ptr]++;
                if( arr[ptr] > 255) arr[ptr]-=256;
            }
            else if(ins[j] == '-'){
                arr[ptr]--;
                if(arr[ptr] < 0) arr[ptr]+=256;
            }
            else {

            }
        }
        printf("Case %d: ",i+1);
        for(int j = 0; j < 100;j++){
            printf("%02X",arr[j]);
            if( j != 99) printf(" ");
        }
        printf("\n");

    }
}
