#include "libmx.h"

static int count_extra_spaces(const char *str) {
    int count = 0;
    if (str == NULL)
        return 0;
    int i = 0;
    while (str[i] && str[i + 1]) {
        if (mx_isspace(str[i]) && mx_isspace(str[i + 1]))
            count++;
    i++;
    }
    return count;
}

char *mx_del_extra_spaces(const char *str) {
    char *tmp = mx_strtrim(str);
    int length = mx_strlen(str) - count_extra_spaces(tmp);
    char *result = (char *)malloc(length);
    int j = 1;
    result[0] = tmp[0];
    for (int i = 1; tmp[i]; i++) {
        if (mx_isspace(tmp[i]) && mx_isspace(tmp[i + 1]))
            continue;
        if (mx_isspace(tmp[i]) && !mx_isspace(tmp[i + 1]) && !mx_isspace(tmp[i - 1]))
            result[j] = ' ';
        else
            result[j] = tmp[i];
        j++;
    }
    return result;
}
