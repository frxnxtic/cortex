#include "cortex.hpp"

void usage() {
    std::cout << "USAGE:\n";
    std::cout << "    ./cortex [input file]\n";
}

int main(int argc, char* argv[]) {
    if(argc < 2) {
        std::cout << "ERROR: no input file specified!\n";
        usage();
        return 1;
    }
    std::string filename = argv[1];    // read back
    std::vector<std::string> program;
    std::string line;
    std::ifstream reading_stream(filename, std::ios::binary);
    while(std::getline(reading_stream, line)) {
        program.push_back(line);
    } 

    for(const std::string& str : program) {
        std::cout << str << '\n';
    }

    return 0;
}
