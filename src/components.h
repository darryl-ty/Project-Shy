#pragma once
#ifndef COMPONENTS_H
#define COMPONENTS_H

#include <string>

namespace Names {
    struct KingdomNames{

    };
}

struct CharacterComponent {
    enum Race{
        HUMAN,
        ELF,
        DWARF,
        HALFLING,
        GOBLIN,
        ORC
    };

    std::string name;
    uint8_t age;

};

#endif
