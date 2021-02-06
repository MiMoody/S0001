
#include <iostream>

int main()
{
   
    char s[256];
    char a[] = "Hello, ";
    char b[] = "World";
    char f[] = "%s";
    _asm  
    {
        lea esi, [a]
        lea edi, [s]

        FOR_1:
            lodsb
            stosb
            cmp al, 0
        jnz FOR_1

        lea esi, [b]
        dec edi

        FOR_2 :
            lodsb
            stosb
            cmp al, 0
        jnz FOR_2

    }
    std::cout << s;
}


