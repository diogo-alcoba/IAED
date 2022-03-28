#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define True 1
#define M 11

int hashU(char *v, int m);

int main(){
    char nome[100];
    int i;
    while (True){
        scanf("%s", nome);
        i=hashU(nome,M);
        printf("%d\n",i);
    }
}

int hashU(char *v, int m){
    int h, a = 31415, b = 27183;
    for (h = 0; *v != '\0'; v++, a = a*b % (m-1))
        h = (a*h + *v) % m;
    return h;
}