#include <stdio.h>
#include <math.h>

int main(){
    int tc, i, d, v, u;
    scanf("%d", &tc);
    for(int i = 0; i<tc; i++){
        scanf("%d %d %d", &d, &v, &u);
        if(u == 0 || v == 0 || v>=u){
            printf("Case %d: can't determine\n", i+1);
        }
        else{
            float a = d * 1.00/u;
            float jarak = sqrt(u*u - v*v);
            float b = d/jarak;
            printf("Case %d: %.3f\n", i+1, fabs(a-b));
        }
    }
    return 0;
}

