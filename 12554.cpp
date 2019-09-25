#include <stdio.h>

int main(){
    int a;
    char str[105][105];
//    freopen("file.in","r",stdin);
//    freopen("file.out","w",stdout);
    char word[100][100] = {
        "Happy","birthday","to","you",
        "Happy","birthday","to","you",
        "Happy","birthday","to","Rujia",
        "Happy","birthday","to","you",
    };
    int b;
    scanf("%d",&b);
    int n;
    if(b%16 != 0) n = b + (16-b%16);
    else n = b;
    char trash;
    scanf("%c",&trash);
    int ans = 0;
    for(int j = 0; j < b;j++){
        scanf("%[^\n]",str[j]);
        int temp;

        scanf("%c",&trash);

    }
    for(int i = 0; i < n;i++ ){
        printf("%s: %s\n",str[i%b],word[i%16]);

    }
    return 0;
}
