#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int win(){
        char flag[128];
        FILE *file = fopen("flag.txt","r");
        if (!file){
                printf("Missing flag.txt. Contact an admin if you see this on remote.");
                exit(1);
        }
        fgets(flag,128,file);
        puts(flag);
}

int vuln(){
        char password[64];
        puts("Enter the secret word: ");
        gets(&password);

        if(strcmp(password,"pass123") == 0){
                puts("Login successfull. Flag is not here");
        }
        else {
                puts("Login falied");
        }
        return 0;
}

int main(){
        setbuf(stdout,NULL);
        setbuf(stderr,NULL);

        vuln();
}
