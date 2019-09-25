#include <stdio.h>

int main(){
    int a;

   // freopen("file.in","r",stdin);
   // freopen("file.out","w",stdout);
    scanf("%d",&a);
    int b;
    int arr[1000];
    char str[1000];
    for(int i = 0; i < a;i++){
        scanf("%d",&b);

        char trash;
        scanf("%c",&trash);
        int ans = 0;
        for(int j = 0; j < b;j++){
            scanf("%[^\n]",str);
            int temp;

            scanf("%c",&trash);
            if( str[0] == 'L'){
                arr[j] = -1;
                ans--;
            } else if( str[0] == 'R'){
                arr[j] = 1;
                ans++;
            }
            else {
                int temp;
                sscanf(str,"SAME AS %d",&temp);
                arr[j] = arr[temp-1];
                ans+=arr[j];
            }

        }
        printf("%d\n",ans);
    }
    return 0;
}
