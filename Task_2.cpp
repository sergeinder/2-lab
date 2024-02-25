#include <stdio.h>

void printPorinter(void *p){
    char *p1 = reinterpret_cast<char *>(p);
    unsigned short *p2 = reinterpret_cast<unsigned short *>(p);
    double *p3 = reinterpret_cast<double *>(p);
    printf("*p1 = %c, *(p1 + 1) = %c\n", *p1, *(p1 + 1));
    printf("*p2 = %x, *(p2 + 1) = %x\n", *p2, *(p2 + 1));
    printf("*p3 = %f, *(p3 + 1) = %f\n", *p3, *(p3 + 1));

}
int main(int argc, char *argv[])
{
    long long tmp = 0x1122334455667788;
    long long* ptr = &tmp;
    printPorinter(ptr);

    char tmp2[] = '0123456789abcdef';
    char* ptr2 = &tmp2;
    printPorinter(ptr2);

    return 0;
}
