#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("bt01.txt", "r");
    if(fptr==NULL){
        printf("khong tim thay file");
        return 1;
    }
    char firstChar=fgetc(fptr);
    printf("ki tu dau trong file: %c", firstChar);
    fclose(fptr);
    return 0;
}