#ifndef WHIST_LOGIC_CARD_H
#define WHIST_LOGIC_CARD_H

#include "eCardSuit.h"

#include <stdint.h>
#include <string>
#include <iostream>

namespace Whist::Logic
{
    struct Card
    {
        Card() = default;
        virtual ~Card() = default;

        Card(eCardSuit type, int8_t number);

        // Compare according to betting precedence.
        int operator<=>(const Card& other) const;
        bool operator==(const Card& other) const;

        eCardSuit m_type{};
        int8_t m_number{};
    };
}

#endif // WHIST_LOGIC_CARD_H