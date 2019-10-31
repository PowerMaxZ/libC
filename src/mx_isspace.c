#include "libmx.h"

bool mx_isspace(char c) {
    if (c == ' ' || c == '\t' || c == '\n' || c == '\f'
            || c == '\v' || c == '\r' || c == '\0')
        return true;
    return false;
}
