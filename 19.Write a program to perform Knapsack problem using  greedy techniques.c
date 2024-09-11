#include <stdio.h>

struct Item {
    int value;
    int weight;
};

void knapsack(struct Item items[], int n, int W) {
    int currentWeight = 0;
    double totalValue = 0.0;

    for (int i = 0; i < n && currentWeight < W; i++) {
        if (currentWeight + items[i].weight <= W) {
            currentWeight += items[i].weight;
            totalValue += items[i].value;
        } else {
            int remain = W - currentWeight;
            totalValue += items[i].value * ((double)remain / items[i].weight);
            break;
        }
    }

    printf("Total value in Knapsack: %lf\n", totalValue);
}

int main() {
    struct Item items[] = {{60, 10}, {100, 20}, {120, 30}};
    int W = 50;
    int n = sizeof(items) / sizeof(items[0]);

    knapsack(items, n, W);

    return 0;
}
