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
    int x = 5;
    int y = -5;
    int z = 0xFF007100;
    
    int* ptr_x = &x;
    printDump(ptr_x, sizeof(x));

    int mas[] = {x,y,z};
    int* ptr_mas = &mas[0];
    printDump(ptr_mas, sizeof(mas));

    double d_y = -5;
    double* ptr_y = &d_y;
    printDump(ptr_y, sizeof(d_y));

    return 0;
}
