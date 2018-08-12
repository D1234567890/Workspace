# include <stdio.h>
# include <string.h>

int main(int argc, char** argv) {
    if (argc > 1 && strcmp(argv[1], "debug")) {
        printf("Running in normal mode");
    } else if (argc > 1) {
        printf("Running in debug mode");
    }
    return 0;
}