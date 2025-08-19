// Increasing Number Triangle
/*
1
12
123
1234
*/
/*
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        for (int j=1;j<=i;j++){
        printf("%d",j);
        }
    printf("\n");
    }
return 0;
}
*/

//Number Pyramid 
/*
        1
       121
      12321
     1234321
*/
/*
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++)
            printf(" ");
        for (int k = 1; k <= i; k++)
            printf("%d", k);
        for (int k = i-1; k >= 1; k--)
            printf("%d", k);
        printf("\n");
    }
    return 0;
}
    */

    //Floyd’s Triangle
    /*
    1
    2 3
    4 5 6
    7 8 9 10
    */
    /*
    #include<stdio.h>
    int main(){
        int n;
        int count =1;
        printf("Enter the number: ");
        scanf("%d ",&n);

        for(int i=1;i<=n; i++){
            for(int j=1;j<=i;j++){
            printf("%d ",count ++);
            }
            printf("\n");
        }
        return 0;
    }
    */

    //Pascal Triangle
    /*
            1
           1 1
          1 2 1
         1 3 3 1
        1 4 6 4 1
    */
    
    #include <stdio.h>
    int factorial(int num) {
        int fact = 1;
        for (int i = 1; i <= num; i++)
            fact *= i;
        return fact;
    }
    
    int main() {
        int n = 5;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i; j++)
                printf(" ");
            for (int j = 0; j <= i; j++)
                printf("%d ", factorial(i) / (factorial(j) * factorial(i - j)));
            printf("\n");
        }
        return 0;
    }
    

    //Fibonacci Numbers
    #include <stdio.h>
    int main() {
    int n, first = 0, second = 1, next;

    // Taking user input
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; i++) {
        printf("%d ", first);  // Print the current Fibonacci number
        next = first + second; // Compute the next term
        first = second;        // Shift first to second
        second = next;         // Shift second to next
    }

    printf("\n");
    return 0;
}

/*
The Fibonacci sequence is a special series of numbers where each number is the sum of the two preceding ones. It starts like this:
0,1,1,2,3,5,8,13,21,34,55,...

The Fibonacci series is a sequence where:
F(n)=F(n−1)+F(n−2)
With initial values:
F(0)=0,F(1) = 1
*/
   
    