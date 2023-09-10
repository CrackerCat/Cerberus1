#ifndef CERBERUS_BIN_TYPES_H
#define CERBERUS_BIN_TYPES_H

#include <cstdint>
#include <string>

struct FUNCTION {
    uint64_t start;
    uint64_t end;
    std::string name;
};

struct SECTION {
    uint64_t start;
    uint64_t end;
    std::string name;
};

struct LIBRARY {
    std::string name;
    std::string version;
};

enum BIN_TYPE {
    UNKNOWN_TYPE,
    ELF,
    PE,
};

#endif //CERBERUS_BIN_TYPES_H
