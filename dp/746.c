#include <stdio.h>

int minCostClimbingStairs(int *cost, int costSize) {
    // a lógica vem aqui
    int menor[costSize + 1];

    menor[0] = 0;
    menor[1] = 0;

    for (int i = 2; i <= costSize; i++) {
        int deUm = menor[i - 1] + cost[i - 1];
        int deDois = menor[i - 2] + cost[i - 2];

        if (deUm < deDois) {
            menor[i] = deUm;
        } else {
            menor[i] = deDois;
        }
    }

    return menor[costSize];
}

int main(void) {
    int cost[] = {10, 15, 20};
    int size = sizeof(cost) / sizeof(cost[0]);

    int resultado = minCostClimbingStairs(cost, size);
    printf("\nresultado: %d (esperado: 15)\n", resultado);

    return 0;
}
