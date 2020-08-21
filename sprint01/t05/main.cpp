#include "src/stdAlgoV2.h"

bool chekForName(std::string str) {
    for (char i : str) {
        if (isspace(i) == 0)
            return true;
    }
    return false;
}

int main(int argc, char **argv) {
    error(argc);
    std::forward_list <std::string> names;
    std::string temp;
    std::string name_f = argv[1];
    int forward_size = 0;
    std::ifstream file(name_f);

    errorOpenFile(file);

    while (getline(file, temp)) {
        if (chekForName(temp)) {
            names.push_front(temp);
            forward_size++;
        }
    }
    errorForwardSize(forward_size);
    parseAndPrint(names, creaneNameNewFile(name_f));
    return 0;
}