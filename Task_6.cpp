#include <stdio.h>
#include <cmath>

void print64(void *p){
    printf("a)%016llx ",*(reinterpret_cast<unsigned long long*>(p)));
    //printf("b)%064b ", *(reinterpret_cast<unsigned long long *>(p)));
    printf("c)%016llu ",*(reinterpret_cast<unsigned long long*>(p)));
    printf("d)%016llx ",*(reinterpret_cast<long long*>(p)));
    //printf("e)%064b ", *(reinterpret_cast<long long *>(p)));
    printf("f)%016lli ",*(reinterpret_cast<long long*>(p)));
    printf("g)%5.2f ",*(reinterpret_cast<double*>(p)));
    printf("e)%5.2e ",*(reinterpret_cast<double*>(p)));

    printf("\n");
}

int main(int argc, char *argv[])
{

    unsigned long long min_unsigned_long = 0;
    unsigned long long max_unsigned_long = (pow(2, 64) - 1);
    signed long long min_long = -pow(2, 63);
    signed long long max_long = (pow(2, 63) - 1);
    long long long_x = 5;
    long long long_y = -5;
    long long long_z = 0xFF007100;

    double double_x = 5;
    double double_y = -5;
    double double_z = 0xFF007100;

    void* ptr_min_unsigned_long = &min_unsigned_long;
    void* ptr_max_unsigned_long = &max_unsigned_long;
    void* ptr_min_long = &min_long;
    void* ptr_max_long = &max_long;
    void* ptr_long_x = &long_x;
    void* ptr_long_y = &long_y;
    void* ptr_long_z = &long_z;
    void* ptr_double_x = &double_x;
    void* ptr_double_y = &double_y;
    void* ptr_double_z = &double_z;
    
    printf("Print64 for minimum unsigned 64 bit number\n");
    print64(ptr_min_unsigned_long);
        
    printf("Print64 for maximum unsigned 64 bit number\n");
    print64(ptr_max_unsigned_long);
    
    printf("Print64 for minimum signed 64 bit number\n");
    print64(ptr_min_long);
    
    printf("Print64 for maximum signed 64 bit number\n");
    print64(ptr_max_long);
    
    printf("Print64 for long long x = 5\n");
    print64(ptr_long_x);
    
    printf("Print64 for long long y = -5\n");
    print64(ptr_long_y);

    printf("Print64 for long long z = 0xFF007100\n");
    print64(ptr_long_z);

    printf("Print64 for double x = 5\n");
    print64(ptr_double_x);
    
    printf("Print64 for double y = -5\n");
    print64(ptr_double_y);

    printf("Print64 for double z = 0xFF007100\n");
    print64(ptr_double_z);


}
