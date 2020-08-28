#include "header.h"

int main(int argc, char **argv) {
    if (argc == 1)
        mx_input_wc();
    else if (argc == 2) {
        count_from_file(argv[1]);
    }
    else {
        t_wc total = {0, 0, 0, NULL};

        total.name = "total";
        for (int i = 1; i < argc; ++i) {
            t_wc tmp = count_from_file(argv[i]);
            total.lines += tmp.lines;
            total.words += tmp.words;
            total.bytes += tmp.bytes;
        }
        print_wc(total);
    }
    return 0;
}
