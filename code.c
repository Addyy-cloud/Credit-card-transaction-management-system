#include <stdio.h>

#define SIZE 10

// Arrays
int ids[50];
float amounts[50];
int count = 0;

// Hash table (stores index of transaction)
int hashTable[SIZE];

// Hash function
int hash(int id) {
    return id % SIZE;
}

// Add transaction
void add() {
    int id;
    float amount;

    printf("Enter ID: ");
    scanf("%d", &id);

    printf("Enter Amount: ");
    scanf("%f", &amount);

    ids[count] = id;
    amounts[count] = amount;

    int index = hash(id);
    hashTable[index] = count;  // store position

    count++;

    printf("Added!\n");
}

// Search by ID (Hashing)
void searchID() {
    int id;
    printf("Enter ID: ");
    scanf("%d", &id);

    int index = hash(id);

    if (hashTable[index] != -1) {
        int i = hashTable[index];

        if (ids[i] == id) {
            printf("Found: ID=%d Amount=%.2f\n", ids[i], amounts[i]);
            return;
        }
    }

    printf("Not Found!\n");
}

// Search by Amount (Linear Search)
void searchAmount() {
    float amt;
    int found = 0;

    printf("Enter Amount: ");
    scanf("%f", &amt);

    for (int i = 0; i < count; i++) {
        if (amounts[i] == amt) {
            printf("Found: ID=%d Amount=%.2f\n", ids[i], amounts[i]);
            found = 1;
        }
    }

    if (found == 0)
        printf("Not Found!\n");
}

// Sorting (Bubble Sort)
void sort() {
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (amounts[j] > amounts[j + 1]) {

                float tempA = amounts[j];
                amounts[j] = amounts[j + 1];
                amounts[j + 1] = tempA;

                int tempI = ids[j];
                ids[j] = ids[j + 1];
                ids[j + 1] = tempI;
            }
        }
    }

    printf("Sorted!\n");
}

// Display
void display() {
    if (count == 0) {
        printf("No Data!\n");
        return;
    }

    printf("\nID\tAmount\n");
    printf("----------------\n");

    for (int i = 0; i < count; i++) {
        printf("%d\t%.2f\n", ids[i], amounts[i]);
    }
}

// Main Menu
int main() {
    int choice;

    // Initialize hash table
    for (int i = 0; i < SIZE; i++) {
        hashTable[i] = -1;
    }

    while (1) {
        printf("\n1.Add\n2.Search by ID\n3.Search by Amount\n4.Sort\n5.Display\n6.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: add(); break;
            case 2: searchID(); break;
            case 3: searchAmount(); break;
            case 4: sort(); break;
            case 5: display(); break;
            case 6: return 0;
            default: printf("Invalid!\n");
        }
    }
}
