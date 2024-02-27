#include <stdio.h>

void print16(void *p){
    printf("a)%04x ",*(reinterpret_cast<unsigned short *>(p)));
    printf("b)%016b ", *(reinterpret_cast<unsigned short *>(p)));
    printf("c)%04u ",*(reinterpret_cast<unsigned short *>(p)));
    printf("d)%04x ",*(reinterpret_cast<short *>(p)));
    printf("e)%016b ", *(reinterpret_cast<short *>(p)));
    printf("f)%04u ",*(reinterpret_cast<short *>(p)));
    printf("\n");
}

int main(int argc, char *argv[])
{

    unsigned short min_unsigned_short = 0;
    unsigned short max_unsigned_short = 65535;
    signed short min_short = -32768;
    signed short max_short = 32768;
    short x = 5;
    short y = -5;
    

    void* ptr_min_unsigned_short = &min_unsigned_short;
    void* ptr_max_unsigned_short = &max_unsigned_short;
    void* ptr_min_short = &min_short;
    void* ptr_max_short = &max_short;
    void* ptr_x = &x;
    void* ptr_y = &y;
    
    printf("Print16 for minimum unsigned 16 bit number\n");
    print16(ptr_min_unsigned_short);
        
    printf("Print16 for maximum unsigned 16 bit number\n");
    print16(ptr_max_unsigned_short);
    
    printf("Print16 for minimum signed 16 bit number\n");
    print16(ptr_min_short);
    
    printf("Print16 for maximum signed 16 bit number\n");
    print16(ptr_max_short);
    
    printf("Print16 for x = 5\n");
    print16(ptr_x);
    
    printf("Print16 for y = -5\n");
    print16(ptr_y);

}
