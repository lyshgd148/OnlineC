#include <stdio.h>

int main(){
    FILE* f=fopen("GGB.txt", "r");
    char ch;
    while ((ch = fgetc(f)) != EOF) {  // 逐字符读取
        putchar(ch);
    }


    fclose(f);
    return 0;
}