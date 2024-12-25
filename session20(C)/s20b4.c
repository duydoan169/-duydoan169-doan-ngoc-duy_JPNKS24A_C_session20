#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("bt01.txt", "r");
    if(fptr==NULL){
        printf("khong tim thay file");
        return 1;
    }
    char str[100];
    fgets(str, sizeof(str), fptr);
    printf("dong dau trong file: %s", str);
    fclose(fptr);
    return 0;
}