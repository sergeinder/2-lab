#include <stdio.h>

void print16(void *p){
    printf("a)%04x",*(reinterpret_cast<unsigned short *>(p)));
}

int main(int argc, char *argv[])
{
    int x = 5;
    int* ptr_x = &x;
    void* res1 = ptr_x;
    print16(res1);

}
