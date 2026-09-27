#pragma once

#define RNG_Seed1 7567025607324980273
#define RNG_Seed2 5279421

extern unsigned long long RNG_STATE;

extern "C" unsigned int GetRandomNumberBasedOnRange(unsigned long long *buf, int target, int length);
extern "C" unsigned int GetRandomNumber(unsigned long long *buf, int range);