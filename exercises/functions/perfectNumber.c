/*
 * Challenge: Perfect Number Finder
 * 
 * Write a C program that performs the following tasks:
 * 
 * 1. Implement a function `int isPerfectNumber(int num)` that checks if a number `num` is a perfect number.
 *    A perfect number is a positive integer that is equal to the sum of its proper divisors (excluding itself).
 * 
 * 2. Implement a function `void displayPerfectNumbers(int limit)` that prints all perfect numbers up to the given `limit`.
 * 
 * 3. In the `main` function:
 *    - Prompt the user to enter an integer `limit`.
 *    - Call `displayPerfectNumbers(limit)` to show all perfect numbers up to that limit.
 */

 #include <stdio.h>

 int isPerfectNumber(int num) {

   int soma = 0;

   for(int divisor = 1; divisor <= num/2; divisor++) {

      if(num % divisor == 0){
         soma += divisor;
      }
   }
   return soma == num;
 }

 void displayPerfectNumbers(int limit){

   printf("Os números perfeitos até %d são:\n", limit);

   for(int num = 1; num <= limit; num++){
      if(isPerfectNumber(num)){
         printf("%d\n", num);
      }
   }

   }

 int main() {

   int limit;

   printf("Enter a number to be the limit: ");
   scanf("%d", &limit);

   displayPerfectNumbers(limit);

    return 0;
 }