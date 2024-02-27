#include <stdio.h>

void printDump(void *p, size_t N){
    unsigned char *p1 = reinterpret_cast<unsigned char *>(p);
    for(int byte = 0; byte < N; byte ++){
        printf("%02hhX ", *(p1 + byte));
    }
    printf("\n");
}


int main(int argc, char *argv[])
{
    char str1[] = "jzyx";
    char str2[] = "ёяюэ";
    wchar_t str3[] = L"jzyx";
    wchar_t str4[] = L"ёяюэ";


    printDump(str1, sizeof(str1));

    printDump(str2, sizeof(str2));

    printDump(str3, sizeof(str3));
    
    printDump(str4, sizeof(str4));

    return 0;
}
