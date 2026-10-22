#include<stdio.h>
int main(){

    // for loop
    for(int i=1; i<=100; i++) {
        printf("%d\n", i);
    }

    // while loop
    int j = 1;
    while(j <= 100) {
        printf("%d\n", j);
        j++;
    }

    // do while loop
    int k = 1;
    do {
        printf("%d\n", k);
        k++;
    } while(k <= 100);

    return 0;
}