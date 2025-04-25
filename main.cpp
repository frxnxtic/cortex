#include "cortex.hpp"

int main() {
    std::string filename = "./programs/01-simple.cortex";    // read back
    std::vector<std::string> program;
    std::string line;
    std::ifstream reading_stream(filename, std::ios::binary);
    while(!reading_stream.eof()) {
        reading_stream >> line;
        program.push_back(line);
    } 

    for(std::string str : program) {
        std::cout << str;
        std::cout << '\n';
    }

    std::cout << "Cortex is ready!\n";
    return 0;
}
