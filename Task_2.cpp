#include <stdio.h>

void printPorinter(void *p){
    char *p1 = reinterpret_cast<char *>(p);
    unsigned short *p2 = reinterpret_cast<unsigned short *>(p);
    double *p3 = reinterpret_cast<double *>(p);
    printf("*p1 = %c, *(p1 + 1) = %c\n", *p1, *(p1 + 1));
    printf("*p2 = %x, *(p2 + 1) = %x\n", *p2, *(p2 + 1));
    printf("*p3 = %lf, *(p3 + 1) = %lf\n", *p3, *(p3 + 4));

}
int main(int argc, char *argv[])
{
    long long tmp = 0x1122334455667788;
    long long* ptr = &tmp;
    void* res = ptr;
    printPorinter(res);

    char tmp2[] = "0123456789abcdef";
    char* ptr2 = &tmp2[0];
    void* res2 = ptr2;
    printPorinter(res2);

    return 0;
}
