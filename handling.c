#include <stdio.h>

int main(){
    char nama[10];
    int nilai;
    FILE *projek;

    projek=fopen("file.txt", "r");
    while(fscanf(projek, "%s %d", nama, &nilai) !=EOF){
        printf("%d %s\n", nilai, nama);
    }
    fclose(projek);
}