//Right-Angled Triangle 
/*  *
    **
    ***
    ****
*/
/*
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    for(int i=1; i<= n; i++){
        for(int j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
    */

//Inverted-Right Angled Triangle
/*
    ****
    ***
    **
    *
*/
/*
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    for(int i=n; i>=1; i--){
        for(int j =1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
    */

//Pyramid Pattern
/*
        *
       ***
      *****
     *******
*/
/*
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) 
            printf(" "); 
        for (int k = 1; k <= (2*i - 1); k++) 
            printf("*");
        printf("\n");
    }

    return 0;
}
*/

//Diamond Pattern    
/*
        *
       ***
      *****
       ***
        *
*/
/*
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) 
            printf(" ");
        for (int k = 1; k <= (2*i - 1); k++) 
            printf("*");
        printf("\n");
    }

    for (int i = n-1; i >= 1; i--) {
        for (int j = n; j > i; j--) 
            printf(" ");
        for (int k = 1; k <= (2*i - 1); k++) 
            printf("*");
        printf("\n");
    }
    return 0;
}
*/

// Hollow Square - stars only for the edges
/*
    *****
    *   *
    *   *
    *   *
    ***** 
*/
/*
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        for(int j=1; j<= n; j++){
        if(i==1 || i==n || j==1 || j==n){
            printf("*");
        }
        else{
            printf(" ");
        }
    }
        printf("\n");
    }
    return 0;
}
*/

//Hollow Pyramid - stars only for the edges
/*
        *
       * *
      *   * 
     *     *
    *********
*/
/*
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        for(int j=i; j<n; j++)
        printf(" ");

        for(int k=1; k<=(2*i-1); k++)
        if(k==1 || i==n || k==(2*i-1)){
            printf("*");
        }
        else{
            printf(" ");
        }
       printf("\n"); 
    }
    return 0;
}
*/

//Chessboard Pattern
/*
* * * * * 
 * * * * *
* * * * * 
 * * * * *
* * * * * 
*/
/*
#include <stdio.h>
int main() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i + j) % 2 == 0)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}

*/

   

