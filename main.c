#include <stdio.h>
#include "int128.h"


int main() {

    long long a1 = 0;
    long long b1 = 0;
    printf("lint & lint:\n");
    for (int i = 0; i < 4; ++i) {
        switch (i)
        {
            case 0: a1 = 0;     b1 = 0; break;
            case 1: a1 = -10;   b1 = 20; break;
            case 2: a1 = 10;    b1 = -20; break;
            case 3: a1 = -10;   b1 = -20; break;
        }


        struct Int128 a2 = AssignmentFromLINT(a1);
        struct Int128 b2 = AssignmentFromLINT(b1);
        switch (CompareInt128(a2, b2))
        {
            case 0:
                printf("%lld=%lld\n",a1,b1);
                break;
            case 1:
                printf("%lld>%lld\n",a1,b1);
                break;
            case -1:
                printf("%lld<%lld\n",a1,b1);
                break;
            default:
                printf("Error\n");
                break;
        }

    }

    long long a3 = 0;
    unsigned long long b3 = 0;
    printf("\nlint & ulint:\n");

    for (int i = 0; i < 4; ++i) {
        switch (i)
        {
            case 0: a3 = 0;      b3 = 0; break;
            case 1: a3 = -10;    b3 = 20; break;
            case 2: a3 = 10;     b3 = 20; break;
            case 3: a3 = 0;      b3 = 20; break;
        }


        struct Int128 a4 = AssignmentFromLINT(a3);
        struct Int128 b4 = AssignmentFromULINT(b3);
        switch (CompareInt128(a4, b4))
        {
            case 0:
                printf("%lld=%lld\n",a3,b3);
                break;
            case 1:
                printf("%lld>%lld\n",a3,b3);
                break;
            case -1:
                printf("%lld<%lld\n",a3,b3);
                break;
            default:
                printf("Error\n");
                break;
        }

    }

    unsigned long long a5 = 0;
    unsigned long long b5 = 0;
    printf("\nulint & ulint:\n");

    for (int i = 0; i < 4; ++i) {
        switch (i)
        {
            case 0: a5 = 0;      b5 = 0;    break;
            case 1: a5 = 10;     b5 = 20;   break;
            case 2: a5 = 10;     b5 = 20;   break;
            case 3: a5 = 0;      b5 = 20;   break;
        }


        struct Int128 a6 = AssignmentFromLINT(a5);
        struct Int128 b6 = AssignmentFromULINT(b5);
        switch (CompareInt128(a6, b6))
        {
            case 0:
                printf("%lld=%lld\n",a5,b5);
                break;
            case 1:
                printf("%lld>%lld\n",a5,b5);
                break;
            case -1:
                printf("%lld<%lld\n",a5,b5);
                break;
            default:
                printf("Error\n");
                break;
        }

    }

    return 0;
}