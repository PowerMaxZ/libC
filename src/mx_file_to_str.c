#include "libmx.h"

char *mx_file_to_str(const char *file) {
    int f = open(file, O_RDONLY);
    if (f < 0)
        return NULL;
    char buf[1];
    int count = 0;
    for (int c = read(f, buf, 1); c > 0; count++)
        c = read(f, buf, 1);
    close(f);
    char *res = (char *)malloc(count);
    f = open(file, O_RDONLY);
    read(f, res, count);
    close(f);
    return res;
}
