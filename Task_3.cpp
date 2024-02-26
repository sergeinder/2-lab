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
    void* res1 = ptr_x;
    printDump(res1, sizeof(x));

    int mas[] = {x,y,z};
    int* ptr_mas = &mas[0];
    void* res2 = ptr_mas;
    printDump(res2, sizeof(mas));

    double d_y = -5;
    double* ptr_y = &d_y;
    void* res3 = ptr_y;
    printDump(res3, sizeof(d_y));

    return 0;
}
