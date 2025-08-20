#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* removeDuplicates(Node* head) {
    if (head == NULL) {
        return NULL; // If the list is empty, return NULL
    }
    
    Node* current = head; // Start with the first node
    
    while (current != NULL && current->next != NULL) {
        if (current->data == current->next->data) {
            // If current node's data is the same as the next node's data, remove the next node
            Node* temp = current->next;
            current->next = current->next->next;
            free(temp); // Free the memory for the duplicate node
        } else {
            // Move to the next node if no duplicate
            current = current->next;
        }
    }
    
    return head; // Return the updated head of the list
}

Node* insert(Node* head, int data) {
    Node* p = (Node*)malloc(sizeof(Node));
    p->data = data;
    p->next = NULL;
    
    if (head == NULL) {
        head = p;
    } else if (head->next == NULL) {
        head->next = p;
    } else {
        Node* start = head;
        while (start->next != NULL)
            start = start->next;
        start->next = p;
    }
    return head;
}

void display(Node* head) {
    Node* start = head;
    while (start) {
        printf("%d ", start->data);
        start = start->next;
    }
}

int main() {
    int T, data;
    scanf("%d", &T);
    Node* head = NULL;
    while (T-- > 0) {
        scanf("%d", &data);
        head = insert(head, data);
    }
    head = removeDuplicates(head);
    display(head);
    return 0;
}
/*
Example Input and Output
Input:
Copy code
6
1
2
2
3
3
4
Output:
Copy code
1 2 3 4
Explanation
Initial List: 1 -> 2 -> 2 -> 3 -> 3 -> 4
After removing duplicates:
First duplicate 2 is removed: 1 -> 2 -> 3 -> 3 -> 4
Duplicate 3 is removed: 1 -> 2 -> 3 -> 4
Final List: 1 -> 2 -> 3 -> 4
Explanation
Empty List:

If head is NULL, the list is empty, and we simply return NULL.
Traverse the List:

Use a pointer (current) to traverse the list.
Check if the current node's data is the same as its next node's data.
Remove Duplicates:

If a duplicate is found:
Use a temporary pointer to hold the duplicate node.
Update the next pointer of the current node to skip the duplicate.
Free the memory of the duplicate node using free(temp).
Continue Traversal:

If no duplicate is found, move to the next node by setting current = current->next.
Return the Updated List:

Once the traversal is complete, return the head of the modified list.
 */