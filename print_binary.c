#include <stdio.h>
#include <math.h>

//1. Complete the functions below so that they print the individual bits of the passed in argument.
//   Use the main function to test them.

void print8BitBinary(unsigned char v){
    for (int i = 7; i >= 0; i--) {
        unsigned char printOut = ((char) v & (char) pow(2, i)) >> i;
        printf("%i", printOut);
    }
}

void print16BitBinary(unsigned short v){
    for (int i = 15; i >= 0; i--) {
        unsigned char printOut = ((char) v & (char) pow(2, i)) >> i;
        printf("%i", printOut);
    }
}

void print32BitBinary(unsigned int v){
    for (int i = 31; i >= 0; i--) {
        unsigned char printOut = ((char) v & (char) pow(2, i)) >> i;
        printf("%i", printOut);
    }
}

void print64BitBinary(unsigned long v){
    for (int i = 63; i >= 0; i--) {
        unsigned char printOut = ((char) v & (char) pow(2, i)) >> i;
        printf("%i", printOut);
    }
}

int main(int argc, char** argv){
    print8BitBinary(117);
    return 0;
}