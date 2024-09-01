#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>


 bool isprime(int n){
    if (n <= 1) return false;
     if (n == 2 || n == 3) return true;
     if (n % 2 == 0 || n % 3 == 0) return false;
     for (int i = 5; i * i <= n; i += 6) {
         if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
 }

 bool ispoweerful(int n, int p){
     if (p % (n*n) == 0){
         return true;
     }
     return false;
 }

 bool found = false;

int main(){

    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++) {
        if (num % i == 0){
            if(isprime(i)){
                if(ispoweerful(i, num)){
                    printf("%d is a powerful number\n", num);
                    found = true;
                    break;
                }
            }
        }
}
    if (!found)(
        
                    printf("%d is not a powerful number\n", num));
    return 0 ;
}