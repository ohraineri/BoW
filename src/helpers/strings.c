#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

size_t countWords(const char *text) {
    size_t inWord = 0;
    size_t wordCounter = 0;

    while (*text) {
        if (isalpha((unsigned char)*text)) {
            if (!inWord) {
                wordCounter++;
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
        text++;
    }

    return wordCounter;
}
