#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NAME_LENGTH 21  // Maximum length of a first name (including null terminator)
#define MAX_EMAIL_LENGTH 51 // Maximum length of an email address (including null terminator)

// Function to compare two strings alphabetically for sorting
int compare(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main() {
    int N;
    scanf("%d", &N);  // Read the number of rows

    char firstName[MAX_NAME_LENGTH];
    char emailID[MAX_EMAIL_LENGTH];

    // Array to store first names of users with Gmail addresses
    char *gmailUsers[N];
    int count = 0;  // To keep track of the number of Gmail users

    // Loop through each row
    for (int i = 0; i < N; i++) {
        scanf("%s %s", firstName, emailID);  // Read the first name and email ID

        // Check if the email ends with "@gmail.com"
        int emailLength = strlen(emailID);
        if (emailLength > 10 && strcmp(&emailID[emailLength - 10], "@gmail.com") == 0) {
            gmailUsers[count] = malloc(MAX_NAME_LENGTH * sizeof(char));  // Allocate memory for the first name
            strcpy(gmailUsers[count], firstName);  // Copy the first name into the array
            count++;
        }
    }

    // Sort the array of first names alphabetically
    qsort(gmailUsers, count, sizeof(char *), compare);

    // Print the sorted first names
    for (int i = 0; i < count; i++) {
        printf("%s\n", gmailUsers[i]);
        free(gmailUsers[i]);  // Free the dynamically allocated memory
    }

    return 0;
}
/*
Explanation:
Input Parsing:

The program first reads the number of rows N.
For each row, it reads the first name and email address using scanf.
Checking Gmail Emails:

It checks if the email ends with @gmail.com by checking the last 10 characters using strcmp.
If the email matches the condition, the first name is stored in a dynamically allocated array gmailUsers.
Sorting:

The qsort function is used to sort the array of first names alphabetically. The compare function compares two strings lexicographically.
Output:

After sorting, the program prints each name from the gmailUsers array, followed by freeing the allocated memory for each name.
Sample Input:
graphql
Copy code
6
riya riya@gmail.com
julia julia@julia.me
julia sjulia@gmail.com
julia julia@gmail.com
samantha samantha@gmail.com
tanya tanya@gmail.com
Sample Output:
Copy code
julia
julia
riya
samantha
tanya
Explanation:
The program extracts the users who have emails ending in @gmail.com and stores their first names.
After sorting the names alphabetically, it prints the names in the desired order.
Edge Cases Handled:
If no email addresses match the @gmail.com condition, nothing will be printed.
If all emails are @gmail.com, it will print all names in sorted order.
*/