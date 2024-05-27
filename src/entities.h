#pragma once
#ifndef ENTITIES_H
#define ENTITIES_H

#include <iostream>
#include <set>

namespace Entities{

    using entity = std::size_t;
    entity CURRENT_AVAILABLE_ENTITY = 0;

    static std::set<entity> ENTITY_SET;

    std::size_t createEntity(){
        CURRENT_AVAILABLE_ENTITY++;
        ENTITY_SET.emplace(CURRENT_AVAILABLE_ENTITY);
        return CURRENT_AVAILABLE_ENTITY;
    }

    std::size_t getSetSize(){
        return ENTITY_SET.size();
    }


}


#endif
