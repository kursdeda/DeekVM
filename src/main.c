#include <stdio.h>

unsigned char code[] = {
    0x01, 0xAA, 0x00, 0x00, 0x00,
    0x00
};

unsigned char stck[32];
unsigned char data[32];

extern void run();

int main() {
    run();

    for (int i = 0; i < sizeof(stck); i++) 
        printf("%02X ", stck[i]);

    putchar(0xA);
    return 0;
}