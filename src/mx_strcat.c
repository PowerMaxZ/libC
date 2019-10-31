#include "libmx.h"

char *mx_strcat(char *restrict s1, const char *restrict s2) {
    if (s1 == NULL)
        return NULL;
    char *result = s1;
    while (*s1)
        s1++;
    while (*s2) {
        *s1 = *s2;
        s1++;
        s2++;
    }
    return result;
}
