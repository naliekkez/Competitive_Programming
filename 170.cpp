#include <stdio.h>

typedef struct card_pair{
    char number;
    char suite;
};



int main(){
   // freopen("file.in","r",stdin);
   // freopen("file.out","w",stdout);
    char x[50],trash;
    card_pair sum[5][15];
    int deck_ctr[15];
    int ctr = 0;
    while(scanf("%[^\n]",&x) == 1){
        scanf("%c",&trash);
        ctr++;
        if(x[0] == '#') break;
        for(int i = 13,j=1; i > 0;i--,j++){
            sum[ctr][i].number= x[3*(j-1)];
            sum[ctr][i].suite = x[3*(j-1)+1];
            deck_ctr[i] = 0;
        }
        if(ctr == 4){
            ctr = 0;
            bool ends = true;
            int start_idx = 13;
            int next_idx;
            int ans = 0;
            int ans_idx;
            while(ends){
                if(deck_ctr[start_idx]+1 == 5){

                    printf("%02d,%c%c\n",ans,sum[deck_ctr[ans_idx]][ans_idx].number,sum[deck_ctr[ans_idx]][ans_idx].suite);
                    break;
                }

                ans++;
                deck_ctr[start_idx]++;
              //  printf("current : %c%c\n",sum[deck_ctr[start_idx]][start_idx].number,sum[deck_ctr[start_idx]][start_idx].suite);

                next_idx = sum[deck_ctr[start_idx]][start_idx].number;
                if(next_idx >= '2' && next_idx <= '9'){
                    next_idx = next_idx-'0';
                }
                else{
                    switch (next_idx){
                        case 'A':
                            next_idx = 1;
                            break;
                        case 'J':
                            next_idx = 11;
                            break;
                        case 'Q':
                            next_idx = 12;
                            break;
                        case 'K':
                            next_idx = 13;
                            break;
                        case 'T':
                            next_idx = 10;
                            break;
                    }
                }

                ans_idx = start_idx;
                start_idx = next_idx;
            }
        }
    }
    return 0;
}
