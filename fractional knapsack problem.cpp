#include <stdio.h>
#include <stdlib.h>

// Structure to represent an item
struct Item {
    int value;
    int weight;
};

// Function to compare items based on their value per unit weight
int compare(const void* a, const void* b) {
    struct Item* item1 = (struct Item*)a;
    struct Item* item2 = (struct Item*)b;
    double vpw1 = (double)item1->value / item1->weight;
    double vpw2 = (double)item2->value / item2->weight;
    return (vpw2 > vpw1) ? 1 : -1;
}

// Function to solve the fractional knapsack problem
double fractionalKnapsack(int capacity, struct Item items[], int n) {
    // Sort the items based on their value per unit weight
    qsort(items, n, sizeof(struct Item), compare);

    // Initialize variables for total value and weight
    double totalValue = 0.0;
    int totalWeight = 0;

    // Loop through the sorted items
    for (int i = 0; i < n; i++) {
        // If the knapsack is full, break out of the loop
        if (totalWeight == capacity) {
            break;
        }

        // If the current item can fit entirely into the knapsack, add it to the knapsack
        if (totalWeight + items[i].weight <= capacity) {
            totalValue += items[i].value;
            totalWeight += items[i].weight;
        }
        // Otherwise, add a fraction of the item to the knapsack
        else {
            double fraction = (double)(capacity - totalWeight) / items[i].weight;
            totalValue += fraction * items[i].value;
            totalWeight += fraction * items[i].weight;
        }
    }

    // Return the total value of the items in the knapsack
    return totalValue;
}

int main() {
    // Define the capacity of the knapsack and the number of items
    int capacity = 50;
    int n = 5;

    // Define the items
    struct Item items[n] = {
        {60, 10},
        {100, 20},
        {120, 30},
        {90, 15},
        {200, 25}
    };

    // Solve the fractional knapsack problem and print the result
    double result = fractionalKnapsack(capacity, items, n);
    printf("The maximum value that can be put into the knapsack is: %f", result);

    return 0;
}

