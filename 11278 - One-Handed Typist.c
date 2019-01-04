#include<stdio.h>
#include<string.h>

#define Qwerty "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./ ~!@#$%^&*()_+QWERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>?"
#define Dvorak "`123qjlmfp/[]456.orsuyb;=\\789aehtdck-0zx,inwvg' ~!@#QJLMFP?{}$%^>ORSUYB:+|&*(AEHTDCK_)ZX<INWVG\""

char Luu[100];

int main() {
    int i, len;
    char str[1005];

    while (gets(str)) {
        len = strlen(str);
        int i, n = strlen(Qwerty);
    for (i=0;i<n;i++) {
        Luu[ Qwerty[i] ] = Dvorak[i];
    }
        for (i=0;i<len;i++)
            printf("%c", Luu[str[i]] );
       printf("\n");
    }
}
