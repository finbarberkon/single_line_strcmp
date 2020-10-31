#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "mystring.h"

int main(void) {
    assert(!mystrcmp("Hello", "Hello"));
    assert(mystrcmp("Hello", "Helloo") < 0);
    assert(mystrcmp("Hello", "Hell") > 0);
    assert(mystrcmp("Hello", "Olle") < 0);
    assert(mystrcmp("Hello", "Abcd") > 0);
    assert(mystrcmp("abcd",  "ABCD") > 0);
    assert(mystrcmp("ABCD",  "abcd") < 0);
    printf("All tests passed successfully\n");
}
