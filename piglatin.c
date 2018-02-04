#include <stdio.h>

void main(){
    char c = 0;
    char buffer = 0;
    int flag = 0;
    int capflag = 0;

    while(c != EOF){
        c = getchar();
        if((c == ' ' || c == '\n' || c == '\t') && flag == 1){
            flag = 0;
            putchar(buffer);
            printf("ay");
            putchar(c);
        } else {
            if(flag == 1){
                if(capflag == 1){
                    capflag = 0;
                    putchar(c - 'a' + 'A');
                } else {
                    putchar(c);
                }
            } else {
                buffer = c;
                if(buffer >= 'A' && buffer <= 'Z'){
                    buffer += -'A' + 'a';
                    capflag = 1;
                }
                flag = 1;
                if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
                        || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                    putchar(c);
                    buffer = 'y';
                }
            }
        }
    }
}