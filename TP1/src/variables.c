#include <stdio.h>

int main() {
    signed char charS[2] = { -127, 127 };
    unsigned char charU[2] = { 0, 255 };
    signed short shortS[2] = { -32767, 32767 };
    unsigned short shortU[2] = { 0, 65535 };
    signed int intS[2] = { -32767, 32767 };
    unsigned int intU[2] = { 0, 65535 };
    signed long long longN[2] = { -2147483647, 2147483647 };
    unsigned long long longU[2] = { 0, 4294967295 };
    long long longD[2] = { -9223372036854775807, 9223372036854775807 };
    unsigned long long longDU[2] = { 0, 18446744073709551615 };
    float flottant[2] = { -1e7, 1e7 };
    double virgule[2] = { -1e37, 1e37 };
    long double virguleL[2] = { -1e37, 1e37 };

    printf("Tailles des types de base en C (en octets) :\n\n");

    /* ... (vos printf sizeof ... ) ... */

    printf("\nValeurs des variables initialisées :\n");

    printf("signed char : %d, %d\n", charS[0], charS[1]);
    printf("unsigned char : %u, %u\n", charU[0], charU[1]);

    printf("signed short : %hd, %hd\n", shortS[0], shortS[1]);
    printf("unsigned short : %hu, %hu\n", shortU[0], shortU[1]);

    printf("signed int : %d, %d\n", intS[0], intS[1]);
    printf("unsigned int : %u, %u\n", intU[0], intU[1]);

    printf("signed long long : %lld, %lld\n", longN[0], longN[1]);
    printf("unsigned long long : %llu, %llu\n", longU[0], longU[1]);

    printf("long long (signed) : %lld, %lld\n", longD[0], longD[1]);
    printf("long long (unsigned) : %llu, %llu\n", longDU[0], longDU[1]);

    printf("float : %f, %f\n", flottant[0], flottant[1]);
    printf("double : %e, %e\n", virgule[0], virgule[1]);
    printf("long double : %Le, %Le\n", virguleL[0], virguleL[1]);

    return 0;
}
