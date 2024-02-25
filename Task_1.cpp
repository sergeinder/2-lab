#include <stdio.h>

void viewPointer(void * p){
    char *p1 = reinterpret_cast<char *>(p);
    unsigned short *p2 = reinterpret_cast<unsigned short *>(p);
    double *p3 = reinterpret_cast<double *>(p);
    printf("p = %p\n", p);
    printf("p1 = %p\n", p1);
    printf("p2 = %p\n", p2);
    printf("p3 = %p\n", p3);
    printf("All adresses are equal\n\n");

    printf("p1 = %p, p1+1 = %p, size of type: %u\n", p1, p1 + 1, sizeof(*p1));
    printf("p2 = %p, p2+1 = %p, size of type: %u\n", p2, p2 + 1, sizeof(*p2));
    printf("p3 = %p, p3+1 = %p, size of type: %u\n", p3, p3 + 1, sizeof(*p3));
}

int main(int argc, char *argv[])
{
    int example = 2;
    int* ptr =&example;
    viewPointer(ptr);
}
