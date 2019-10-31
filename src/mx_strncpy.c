#include "libmx.h"

char *mx_strncpy(char *dst, const char *src, int len) {
    if (dst == NULL)
        return NULL;
    char *res = dst;
    while (*src != '\0' && len != 0) {
        *dst = *src;
        dst++;
        src++;
        len--;
    }
    return res;
}
