#include <stdio.h> 
#include <stdlib.h> 

int gcd(int m, int n) {
    while(n != 0) { 
        int r = m % n; 
        m = n; 
        n = r; 
    } 
    return m;
}

int lcm(int m, int n) {
    return m * n / gcd(m, n);
}

int main(void) { 
    int m, n; 

    scanf("%d %d", &m, &n); 

    printf("%d", gcd(m, n)); 
    printf(" ");
    printf("%d\n", lcm(m, n)); 
    
    return 0; 
} 
