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