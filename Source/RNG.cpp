#include "RNG.h"

unsigned long long RNG_STATE = 0;

static unsigned long long CalculateRandomNumber(unsigned long long input) {
    return RNG_Seed1 * input + RNG_Seed2;
}

// Thank you @Dematerialization -> https://decomp.me/scratch/vX5Vq
extern "C" unsigned int GetRandomNumberBasedOnRange(unsigned long long *buf, int target, int length) {
    unsigned long long random = CalculateRandomNumber(*buf); 
    unsigned int rand = 0;
    
    *buf = random;

    // "target" =  numerator
    // --------   -----------
    // "length" = denominator 
    //
    // If the fraction is 1/4, 
    // 4 - 1 = 3
    //
    // Similarly,
    // 4/4 - 1/4 - 3/4
    //
    // So, this gives you the
    // inverse of the fraction
    //
    // inverse = denominator - numerator
    // num = HI(random) * inverse
    // rand += denominator
    
    rand = target + ((random >> 32) * (length - target));

    return rand;
}

extern "C" unsigned int GetRandomNumber(unsigned long long *buf, int range) {
    unsigned long long random = CalculateRandomNumber(*buf); 
    unsigned int rand = 0;

    *buf = random;

    rand = (unsigned int)(rand >> 32);

    return (unsigned int)(((unsigned long long)range * rand) >> 32);
}