#include <stdio.h>
#include <math.h>

int main(){
    int tc;
    long long int n;
    scanf("%d", &tc);
    while(tc--){
        scanf("%lld", &n);
        double hasil1 = (-1.00 + sqrt(1 -  4 * -2 * n)) / 2.00;
        printf("%.0lf\n", floor(hasil1));

    }
    return 0;
}
