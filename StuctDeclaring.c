
#include <stdio.h>
typedef struct
{
    float re;
    float im;
} complex;

struct byteBits
{
    unsigned int b1volts: 1;
    unsigned int b1amps: 1;
    unsigned int b1humid: 2;
    unsigned int b1temp: 1;
    unsigned int b1tach: 3;
};

int main()
{
    struct byteBits x;

    x.b1volts = 1;
    x.b1amps = 0;
    x.b1humid = 2;
    x.b1temp = 0x0;
    x.b1tach = 7;

    printf("%d",x);
    return 0;
}