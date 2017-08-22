#include <stdlib.h>
#include <iostream>

int main(int argc, char **argv) {
    char *p = getenv("HOME");
    std::cout << p << std::endl;
    return 0;
}
