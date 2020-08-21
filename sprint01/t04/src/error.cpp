#include "stdAlgoV1.h"

void error(int argc) {
    if (argc == 1) {
        std::cerr << "usage: ./stdAlgoV1 [file_name]\n";
        exit(1);
    }
}

void error_forward_size(int forward_size) {
    if (forward_size == 0) {
        std::cerr << "error\n";
        exit(1);
    }
}

void error_forward_size(std::ifstream &file) {
    if (!file.is_open()) {
        std::cerr << "error\n";
        exit(1);
    }
}