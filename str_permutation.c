/*************************************************************************
  > File Name: test.c
  > Author: Wang
  > Mail: owen10270936@gmail.com 
  > Created Time: Tue Mar 16 10:09:57 2021
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

void swap(char str[], int k, int i) {
    char tmp = str[k];
    str[k] = str[i];
    str[i] = tmp;
    return;
}

void prem(char str_a[], int k, int n) {
    if(k == n) {
        printf("%s\n", str_a);
        return;
    }

    char str_b[strlen(str_a)]; 
    strcpy(str_b, str_a);

    for(int i = k; i < n; i++) {
        swap(str_a, k, i);   
        prem(str_a, k + 1, n);
        strcpy(str_a, str_b);
    }
    return;
}

int main() {
    char str[] = "abcd"; 
    prem(str, 0, 4);
    return 0;
}
