#include <stdio.h>

void print32(void *p){
    printf("a)%08x ",*(reinterpret_cast<unsigned int*>(p)));
    //printf("b)%032b ", *(reinterpret_cast<unsigned int *>(p)));
    printf("c)%010u ",*(reinterpret_cast<unsigned int*>(p)));
    printf("d)%08x ",*(reinterpret_cast<int*>(p)));
    //printf("e)%032b ", *(reinterpret_cast<int *>(p)));
    printf("f)%011i ",*(reinterpret_cast<int*>(p)));
    printf("g)%5.2f ",*(reinterpret_cast<float*>(p)));
    printf("e)%5.2e ",*(reinterpret_cast<float*>(p)));

    printf("\n");
}

int main(int argc, char *argv[])
{

    unsigned int min_unsigned_int = 0;
    unsigned int max_unsigned_int = 4294967295;
    signed int min_int = -2147483648;
    signed int max_int = 2147483647;
    int int_x = 5;
    int int_y = -5;
    int int_z = 0xFF007100;

    float float_x = 5;
    float float_y = -5;
    float float_z = 0xFF007100;

    void* ptr_min_unsigned_int = &min_unsigned_int;
    void* ptr_max_unsigned_int = &max_unsigned_int;
    void* ptr_min_int = &min_int;
    void* ptr_max_int = &max_int;
    void* ptr_int_x = &int_x;
    void* ptr_int_y = &int_y;
    void* ptr_int_z = &int_z;
    void* ptr_float_x = &float_x;
    void* ptr_float_y = &float_y;
    void* ptr_float_z = &float_z;
    
    printf("Print32 for minimum unsigned 32 bit number\n");
    print32(ptr_min_unsigned_int);
        
    printf("Print32 for maximum unsigned 32 bit number\n");
    print32(ptr_max_unsigned_int);
    
    printf("Print32 for minimum signed 32 bit number\n");
    print32(ptr_min_int);
    
    printf("Print32 for maximum signed 32 bit number\n");
    print32(ptr_max_int);
    
    printf("Print32 for int x = 5\n");
    print32(ptr_int_x);
    
    printf("Print32 for int y = -5\n");
    print32(ptr_int_y);

    printf("Print32 for int z = 0xFF007100\n");
    print32(ptr_int_z);

    printf("Print32 for float x = 5\n");
    print32(ptr_float_x);
    
    printf("Print32 for float y = -5\n");
    print32(ptr_float_y);

    printf("Print32 for float z = 0xFF007100\n");
    print32(ptr_float_z);


}
