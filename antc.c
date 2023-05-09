include <stdio.h>
#include<math.h>

int main() {
    int C, K, N;
    scanf("%d", &C);
    scanf("%d", &K);
    scanf("%d", &N);
    printf("%.0f", C * pow(K, N));
    return 0;
}
