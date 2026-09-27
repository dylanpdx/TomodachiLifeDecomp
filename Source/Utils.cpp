#include "types.h"
#include "RNG.h"

void wstrncat_b(short *dest, int destlen, short *src, int count) // _b because it's bounded???
{
    int len = 0;
    while (dest[len] != 0) // strlen?
        len++;

    int i = 0;

    while (i < count && (len + i) < destlen) {
        dest[len + i] = src[i];
        i++;
    }

    dest[len + i] = 0;
}

static short SPACE[]  = { ' ', 0 };

void add_placeholder_text(short* out,int pos,int syllables){
    if (syllables > 12){
        syllables = 12;
    }

    while (true){
        switch (GetRandomNumber(&RNG_STATE, 8)) {

            case 0:
                break;

            case 1:
                break;

            case 2:
                break;

            case 3:
                break;

            case 4:
                break;

            case 5:
                break;

            case 6:
                break;

            case 7:
                break;
            }
        }
    done:
    wstrncat_b(out, pos,SPACE, 1);
}