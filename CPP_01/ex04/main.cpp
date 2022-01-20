#include <iostream>
#include <fstream>

int main(int argc, char **argv) {
    if (argc != 4) {
        std::cout << "Arguments error" << std::endl;
        return (1);
    }
    if (argv[2][0] == '\0' || argv[3][0] == '\0') {
        std::cout << "Empty lines.........." << std::endl;
        return (1);
    }

    std::string line;
    std::string replaced_line;
    std::size_t found;
    std::string filename(argv[1]);
    std::string first(argv[2]);
    std::string second(argv[3]);
    std::ifstream file(filename);
    std::ofstream replaced_file(filename + ".replaced");

    while (getline(file, line)) {
        while(((found = line.find(first)) != std::string::npos))
            line = line.substr(0, found) + second + line.substr(found + first.length());
        replaced_file << line << std::endl;
    }

    return (0);
}
