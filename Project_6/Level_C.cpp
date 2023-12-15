#include "Level_C.h"

#include "Utility.h"

#define LEVEL_WIDTH 38
#define LEVEL_HEIGHT 38

std::pair<int, int> LEVEL_C_DATA[] = {
    {95, 0}, {95, 0}, {95, 0}, {119, 0}, {36, 1}, {134, 0}, {106, 1}, {36, 0}, {37, 0}, {119, 1}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {24, 1}, {100, 0}, {100, 0}, {100, 0}, {100, 0}, {100, 0}, {100, 0}, {100, 0}, {100, 0}, {100, 0}, {100, 0}, {95, 0}, {95, 0}, {95, 0}, {24, 1}, {106, 0}, {134, 0}, {0, 0}, {0, 0}, {106, 1}, {36, 0}, {119, 1}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {24, 1}, {100, 0}, {100, 0}, {100, 0}, {100, 0}, {100, 0}, {100, 0}, {100, 0}, {100, 0}, {100, 0}, {100, 0}, {95, 0}, {119, 0}, {37, 0}, {36, 1}, {106, 0}, {97, 0}, {0, 0}, {0, 0}, {0, 0}, {106, 1}, {36, 0}, {37, 0}, {37, 0}, {37, 0}, {37, 0}, {37, 0}, {37, 0}, {37, 0}, {37, 0}, {37, 0}, {119, 1}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {119, 2}, {12, 1}, {100, 0}, {100, 0}, {100, 0}, {100, 0}, {100, 0}, {100, 0}, {100, 0}, {100, 0}, {100, 0}, {119, 0}, {36, 1}, {106, 0}, {118, 0}, {0, 0}, {97, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {118, 0}, {118, 0}, {118, 0}, {118, 0}, {118, 0}, {118, 0}, {118, 0}, {118, 0}, {118, 0}, {106, 1}, {36, 0}, {37, 0}, {37, 0}, {37, 0}, {37, 0}, {37, 0}, {37, 0}, {37, 0}, {37, 0}, {13, 0}, {13, 0}, {49, 0}, {12, 1}, {100, 0}, {100, 0}, {100, 0}, {12, 0}, {49, 0}, {24, 1}, {106, 0}, {0, 0}, {0, 0}, {0, 0}, {134, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {118, 0}, {118, 0}, {118, 0}, {118, 0}, {118, 0}, {118, 0}, {118, 0}, {118, 0}, {106, 1}, {36, 0}, {37, 0}, {37, 0}, {36, 1}, {100, 0}, {12, 0}, {49, 0}, {24, 1}, {106, 0}, {24, 1}, {106, 0}, {0, 0}, {0, 0}, {0, 0}, {134, 0}, {0, 0}, {0, 0}, {0, 0}, {44, 0}, {34, 0}, {0, 0}, {32, 0}, {57, 0}, {57, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {118, 0}, {118, 0}, {118, 0}, {118, 0}, {100, 0}, {36, 0}, {37, 0}, {36, 1}, {106, 0}, {36, 1}, {106, 0}, {0, 0}, {0, 0}, {108, 0}, {109, 0}, {110, 0}, {106, 1}, {30, 0}, {13, 0}, {49, 0}, {13, 0}, {49, 0}, {30, 1}, {105, 0}, {106, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {65, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {100, 0}, {118, 0}, {118, 0}, {118, 0}, {0, 0}, {123, 0}, {121, 0}, {123, 0}, {123, 0}, {123, 0}, {134, 0}, {121, 0}, {123, 0}, {123, 0}, {24, 0}, {95, 0}, {95, 0}, {24, 1}, {106, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {77, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {100, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {134, 0}, {134, 0}, {134, 0}, {134, 0}, {134, 0}, {134, 0}, {134, 0}, {134, 0}, {12, 0}, {119, 3}, {119, 0}, {37, 0}, {36, 1}, {106, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {33, 0}, {288, 0}, {125, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {100, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {134, 0}, {134, 0}, {134, 0}, {134, 0}, {15, 0}, {16, 0}, {16, 0}, {49, 0}, {0, 0}, {37, 0}, {36, 1}, {106, 0}, {118, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {64, 0}, {58, 0}, {106, 1}, {12, 0}, {49, 0}, {13, 0}, {12, 1}, {106, 0}, {59, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {100, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {134, 0}, {106, 1}, {16, 0}, {16, 0}, {119, 3}, {119, 0}, {37, 0}, {37, 0}, {36, 1}, {106, 0}, {118, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {59, 0}, {106, 1}, {12, 0}, {30, 1}, {19, 0}, {37, 0}, {37, 0}, {37, 0}, {37, 0}, {105, 0}, {105, 0}, {106, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {100, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {16, 0}, {13, 0}, {119, 3}, {119, 0}, {37, 0}, {36, 1}, {106, 0}, {118, 0}, {118, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {106, 1}, {105, 0}, {19, 0}, {36, 1}, {106, 0}, {0, 0}, {118, 0}, {78, 0}, {118, 0}, {118, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {100, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {95, 0}, {95, 0}, {119, 0}, {36, 1}, {106, 0}, {118, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {118, 0}, {0, 0}, {0, 0}, {0, 0}, {78, 0}, {0, 0}, {0, 0}, {0, 0}, {65, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {100, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {95, 0}, {95, 0}, {24, 1}, {106, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {78, 0}, {0, 0}, {0, 0}, {0, 0}, {77, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {100, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {95, 0}, {95, 0}, {24, 1}, {106, 0}, {125, 0}, {59, 0}, {264, 0}, {32, 0}, {57, 0}, {47, 0}, {32, 0}, {38, 0}, {288, 0}, {57, 0}, {32, 0}, {33, 0}, {44, 0}, {44, 0}, {44, 0}, {35, 0}, {64, 0}, {58, 0}, {78, 0}, {0, 0}, {32, 0}, {0, 0}, {57, 0}, {35, 0}, {64, 0}, {45, 0}, {38, 0}, {0, 0}, {99, 1}, {112, 0}, {99, 0}, {0, 0}, {0, 0}, {56, 0}, {95, 0}, {95, 0}, {119, 2}, {13, 0}, {13, 0}, {49, 0}, {49, 0}, {13, 0}, {13, 0}, {49, 0}, {49, 0}, {13, 0}, {49, 0}, {13, 0}, {49, 0}, {49, 0}, {13, 0}, {13, 0}, {13, 0}, {13, 0}, {49, 0}, {12, 1}, {78, 0}, {12, 0}, {49, 0}, {49, 0}, {49, 0}, {13, 0}, {49, 0}, {49, 0}, {30, 1}, {124, 0}, {124, 0}, {100, 0}, {124, 0}, {124, 0}, {124, 0}, {12, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {24, 1}, {78, 0}, {24, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {24, 1}, {124, 0}, {100, 0}, {100, 0}, {100, 0}, {100, 0}, {100, 0}, {12, 0}, {119, 3}, {95, 0}, {95, 0}, {119, 0}, {37, 0}, {37, 0}, {37, 0}, {37, 0}, {37, 0}, {37, 0}, {37, 0}, {37, 0}, {37, 0}, {119, 1}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {24, 1}, {78, 0}, {24, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {119, 0}, {99, 1}, {100, 0}, {100, 0}, {100, 0}, {100, 0}, {100, 0}, {12, 0}, {119, 3}, {95, 0}, {95, 0}, {95, 0}, {24, 1}, {106, 0}, {118, 0}, {118, 0}, {118, 0}, {118, 0}, {118, 0}, {118, 0}, {118, 0}, {106, 1}, {24, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {24, 1}, {78, 0}, {24, 0}, {95, 0}, {95, 0}, {119, 0}, {37, 0}, {36, 1}, {124, 0}, {100, 0}, {100, 0}, {12, 0}, {13, 0}, {13, 0}, {119, 3}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {24, 1}, {106, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {106, 1}, {12, 0}, {119, 3}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {119, 0}, {37, 0}, {36, 1}, {78, 0}, {36, 0}, {119, 1}, {95, 0}, {24, 1}, {124, 0}, {124, 0}, {100, 0}, {100, 0}, {100, 0}, {24, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {119, 2}, {12, 1}, {106, 0}, {64, 0}, {0, 0}, {0, 0}, {106, 1}, {105, 0}, {19, 0}, {37, 0}, {37, 0}, {37, 0}, {119, 1}, {95, 0}, {119, 0}, {37, 0}, {37, 0}, {36, 1}, {106, 0}, {118, 0}, {78, 0}, {106, 1}, {24, 0}, {95, 0}, {24, 1}, {100, 0}, {100, 0}, {100, 0}, {12, 0}, {13, 0}, {119, 3}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {119, 2}, {49, 0}, {12, 1}, {106, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {118, 0}, {118, 0}, {106, 1}, {36, 0}, {37, 0}, {36, 1}, {106, 0}, {118, 0}, {118, 0}, {0, 0}, {0, 0}, {78, 0}, {106, 1}, {24, 0}, {95, 0}, {119, 2}, {13, 0}, {13, 0}, {49, 0}, {119, 3}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {119, 2}, {12, 1}, {106, 0}, {38, 0}, {38, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {118, 0}, {118, 0}, {118, 0}, {0, 0}, {0, 0}, {0, 0}, {65, 0}, {0, 0}, {78, 0}, {106, 1}, {36, 0}, {119, 1}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {119, 2}, {49, 0}, {13, 0}, {12, 1}, {106, 0}, {34, 0}, {44, 0}, {35, 0}, {58, 0}, {276, 0}, {33, 0}, {47, 0}, {252, 0}, {0, 0}, {77, 0}, {0, 0}, {78, 0}, {0, 0}, {106, 1}, {24, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {119, 2}, {13, 0}, {13, 0}, {13, 0}, {49, 0}, {13, 0}, {49, 0}, {49, 0}, {13, 0}, {12, 1}, {106, 0}, {64, 0}, {32, 0}, {78, 0}, {35, 0}, {106, 1}, {24, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {119, 2}, {13, 0}, {13, 0}, {13, 0}, {49, 0}, {49, 0}, {13, 0}, {119, 3}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}, {95, 0}};

LevelC::~LevelC() {
}

void LevelC::initialize(Entity* player, GLuint g_fontsheet_texture_id, float view_x, float view_y) {
    GLuint map_texture_id = Utility::load_texture("assets/images/Cavernas_by_Adam_Saltsman.png");
    m_state.map           = new Map(LEVEL_WIDTH, LEVEL_HEIGHT, LEVEL_C_DATA, map_texture_id, 1.0f, 12, 32);

    m_state.player = player;
    m_state.player->set_position(glm::vec3(player->get_position().x, -1.0f, 0));
    // m_state.player->set_position(glm::vec3(11.0f, -23.0f, 0));

    // Treasure chest (9, -19)
    m_state.collectables = new Entity[1];
    GLuint flag_texture_id = Utility::load_texture("assets/images/Hearts_Red_1.png");
    m_state.collectables[0].set_entity_type(FLAG);
    m_state.collectables[0].m_animation_indices = NULL;
    m_state.collectables[0].m_texture_id = flag_texture_id;
    m_state.collectables[0].set_position(glm::vec3(9.0f, -19.0f, 0.0f));
    m_state.collectables[0].set_movement(glm::vec3(0.0f));
    m_state.collectables[0].set_speed(0.0f);
    m_state.collectables[0].set_acceleration(glm::vec3(0.0f, -9.81f, 0.0f));
    m_state.collectables[0].set_width(1.0f);
    m_state.collectables[0].set_height(1.0f);
    m_state.collectables[0].set_scale(1.0f);
    // m_state.collectables[0].update(0.0f, m_state.player, NULL, 0, NULL, 0, m_state.map);

    // enemies
    // m_state.enemies = new Entity[ENEMY_COUNT];
    // m_state.enemies[0].set_position(glm::vec3(13.0f, -23.0f, 0.0f));

    m_state.jump_sfx = Mix_LoadWAV("assets/audio/jumpland.wav");
}

void LevelC::update(float delta_time) {
    m_state.player->update(delta_time, m_state.player, m_state.enemies, ENEMY_COUNT, m_state.collectables, 1, m_state.map);

    for (int i = 0; i < ENEMY_COUNT; i++) {
        m_state.enemies[i]->update(delta_time, m_state.player, {}, 0, NULL, 0, m_state.map);
    }
}

void LevelC::render(ShaderProgram* program) {
    m_state.map->render(program);
    m_state.player->render(program);
    for (int i = 0; i < ENEMY_COUNT; i++) {
        m_state.enemies[i]->render(program);
    }
    for (int i = 0; i < 1; i++) {
        m_state.collectables[i].render(program);
    }
}
