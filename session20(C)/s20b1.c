#include<stdio.h>
int main(){
    char str[100];
    printf("nhap chuoi ki tu: ");
    fgets(str, 100, stdin);
    FILE *fptr;
    fptr = fopen("bt01.txt", "w");
    fprintf(fptr, str);
    fclose(fptr);
    return 0;
}