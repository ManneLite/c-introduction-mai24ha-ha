#include <stdio.h>

int main()
{
    printf("Hello, CMD!");
}



int main()
{
    int a = 1; // 00000000 00000000 00000000 00000001 
    int b = 11;

    int c = a + b;

    printf("c = %d\n", c); // 16, 64, datorspecifik, 4 bytes 
                         

    char bytes[4];

    bytes[0] = 0b00000001; // 00000001
    bytes[1] = 0;
    bytes[2] = 0;
    bytes[3] = 0b00000000;

    c = bytes[0];

    char *p1 = &bytes[2]; // p är en pointer, som pekar på den address i minnet där bytes[2] ligger

    printf("c = %d\n", c); 

    printf("p1 = %p\n", p1);
    printf("*p1 = %d\n", *p1);

    printf("p1 = %p\n", p1);
    printf("*p1 = %d\n", *p1);

    int *p2 = &bytes[0];
    printf("p2 = %p\n", p2);
    printf("p2 - p1 = %lld\n", (char *)p2 - p1);





    printf("*p2 = %d\n", *p2); // 00000000 00000000 00000000 00000001
                             //
    char signed_byte = 0b01111111;
    char unsigned unsigned_byte = 0b11111111;
    printf("signed byte   = %d\n", signed_byte);
    printf("unsigned byte = %d\n", unsigned_byte);
}
