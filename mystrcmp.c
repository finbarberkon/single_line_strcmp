/* Single line implementations of strcmp written by Finbar Berkon in 2019.
 * The iterative version only works if the compiler uses the return value
 * register to store r, which it isn't guaranteed to do (and doesn't in macOS)
 */

#define RECURSIVE

#ifdef RECURSIVE
int mystrcmp(char *a, char *b) {
    return (*a && *a == *b) ? mystrcmp(++a, ++b) : *a - *b;
}
#endif

#ifdef ITERATIVE
int mystrcmp(char *a, char *b) {
    for (int r; *a || *b; ++a, ++b) if (r = *a - *b) return r;
}
#endif
