#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 100
#define HASH_SIZE 1000

// Define a structure for the hash table entry
typedef struct Entry {
    char name[MAX_NAME_LENGTH];
    char phone[15];
    struct Entry* next;
} Entry;

// Hash table
Entry* hashTable[HASH_SIZE];

// Hash function to compute the hash value of a string
unsigned int hash(const char* str) {
    unsigned int hash = 0;
    while (*str) {
        hash = (hash * 31) + (*str++);
    }
    return hash % HASH_SIZE;
}

// Function to insert a key-value pair into the hash table
void insert(const char* name, const char* phone) {
    unsigned int index = hash(name);
    Entry* newEntry = (Entry*)malloc(sizeof(Entry));
    strcpy(newEntry->name, name);
    strcpy(newEntry->phone, phone);
    newEntry->next = hashTable[index];
    hashTable[index] = newEntry;
}

// Function to search for a key in the hash table
const char* search(const char* name) {
    unsigned int index = hash(name);
    Entry* current = hashTable[index];
    while (current != NULL) {
        if (strcmp(current->name, name) == 0) {
            return current->phone;
        }
        current = current->next;
    }
    return NULL;
}

int main() {
    int n;
    scanf("%d", &n);

    // Initialize hash table
    memset(hashTable, 0, sizeof(hashTable));

    // Read entries into the hash table
    for (int i = 0; i < n; i++) {
        char name[MAX_NAME_LENGTH];
        char phone[15];
        scanf("%s %s", name, phone);
        insert(name, phone);
    }

    // Process queries
    char query[MAX_NAME_LENGTH];
    while (scanf("%s", query) != EOF) {
        const char* phone = search(query);
        if (phone) {
            printf("%s=%s\n", query, phone);
        } else {
            printf("Not found\n");
        }
    }

    // Free allocated memory
    for (int i = 0; i < HASH_SIZE; i++) {
        Entry* current = hashTable[i];
        while (current != NULL) {
            Entry* temp = current;
            current = current->next;
            free(temp);
        }
    }

    return 0;
}
