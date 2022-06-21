#include<stdio.h>
int mylen(char *s){
    int count=0;
    while (*s++){
        count++; 
    }
    return count;
}
int main () {
    printf("%d", mylen("Lucas"));
    printf ("\n");
}
