#include <stdio.h>

void main(){
    char c = 0;
    char buffer = 0;
    int flag = 0;

    while(c != EOF){
        c = getchar();
        if(c == ' ' || c == '\n' || c == '\t' || c == EOF){
            flag = 0;
            putchar(buffer);
            printf("ay");
            if(c == EOF){
                break;
            }
            putchar(c);
        } else {
            if(flag == 1){
                putchar(c);
            } else {
                buffer = c;
                flag = 1;
                if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'i'){
                    putchar(c);
                buffer = 'y';
                }
            }
        }
        //if(c == EOF){
        //    break;
        //}
    }
}