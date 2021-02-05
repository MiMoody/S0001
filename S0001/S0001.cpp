
#include <iostream>

int main()
{
    char s[256];
    char a[] = "Привет, ";
    char b[] = " Мир";
    char f[] = "%s";

    _asm
    {
        lea eax, s
        push eax
        lea ebx, a
        push ebx
        call scanf
        add esp, 8

    }
}


