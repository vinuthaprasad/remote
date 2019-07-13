#include <stdio.h> 
void big() 
{ 
    int A, B, C; 
  
    printf("Enter three numbers to check largest number: "); 
    scanf("%d %d %d", &A, &B, &C); 
  
    if (A >= B) { 
        if (A >= C) 
            printf("%d is the largest number among three.", A); 
        else
            printf("%d is the largest number.", C); 
    } 
    else { 
        if (B >= C) 
            printf("%d is the largest number.", B); 
        else
            printf("%d is the largest number.", C); 
    } 
  
   // return 0; 
} 
