#include <stdio.h>
#include <string.h>

int contains_str(char *value, char *array[], int count) {
    for (int i = 0; i < count; i++) {
        if (strcmp(array[i], value) == 0)
            return 1;
    }
    return 0;
}
