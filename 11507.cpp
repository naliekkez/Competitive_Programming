#include <stdio.h>

int main(){

    int n;
    //freopen("file.out","w",stdout);

    char arr[20];
    while(1){
        scanf("%d",&n);
        if(n == 0) break;
        char trash;
        char tanda[3];
        char ansArah = 'x';
        char ansTanda = '+';
        for(int i = 0; i < n-1;i++){
            scanf("%s",&tanda);
            //printf("%c%c\n",tanda[0],tanda[1]);
            if(tanda[0] == 'N') continue;
            if(ansArah == 'x'){

                    if(ansTanda == '-'  && ansArah != tanda[1]){
                        if(tanda[0] == '-') ansTanda = '+';
                        else ansTanda = '-';
                    }
                    else ansTanda = tanda[0];
                    ansArah = tanda[1];




            } else if(ansArah == tanda[1]) {
                if(ansTanda == '+'){
                    if(tanda[0] == '+') ansTanda = '-';
                    else ansTanda == '+';
                }
                else if(ansTanda == '-'){
                    ansTanda = tanda[0];
                }

                ansArah = 'x';

            }
        }
        //if(ansTanda == '-')printf("+%c\n",ansArah);
        //else
            printf("%c%c\n",ansTanda,ansArah);

    }

    return 0;

}
