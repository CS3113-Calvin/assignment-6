#include "Level_C.h"

#include "Utility.h"

#define LEVEL_WIDTH 32
#define LEVEL_HEIGHT 64

std::pair<int, int> LEVEL_C_DATA[] = {
    {33, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {16, 0}, {15, 0}, {15, 0}, {29, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {33, 0}, {16, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {30, 0}, {15, 0}, {30, 0}, {15, 0}, {30, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0},
{19, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {19, 0}, {30, 0}, {19, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {16, 0}, {15, 0}, {15, 0}, {16, 0}, {33, 0}, {15, 0}, {15, 0}, {30, 0}, {15, 0}, {15, 0}, {15, 0},
{15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {17, 0}, {18, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {16, 0}, {33, 0}, {15, 0}, {15, 0}, {33, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {33, 0}, {33, 0}, {15, 0}, {15, 0}, {15, 0},
{15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {31, 0}, {32, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {19, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {30, 0}, {15, 0}, {29, 0}, {16, 0}, {15, 0}, {30, 0}, {15, 0}, {19, 0}, {15, 0}, {16, 0}, {15, 0}, {15, 0},
{30, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {17, 0}, {18, 0}, {15, 0}, {33, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {17, 0}, {18, 0}, {19, 0}, {15, 0},
{16, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {19, 0}, {15, 0}, {31, 0}, {32, 0}, {15, 0}, {15, 0}, {29, 0}, {16, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {33, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {31, 0}, {32, 0}, {15, 0}, {29, 0},
{15, 0}, {15, 0}, {15, 0}, {15, 0}, {30, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {30, 0}, {15, 0}, {15, 0}, {19, 0}, {19, 0}, {15, 0}, {19, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {29, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0},
{15, 0}, {15, 0}, {15, 0}, {30, 0}, {17, 0}, {18, 0}, {15, 0}, {16, 0}, {16, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {19, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {16, 0}, {15, 0}, {15, 0}, {29, 0}, {19, 0}, {17, 0}, {18, 0}, {15, 0}, {15, 0},
{15, 0}, {15, 0}, {15, 0}, {33, 0}, {31, 0}, {32, 0}, {19, 0}, {19, 0}, {16, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {29, 0}, {15, 0}, {17, 0}, {18, 0}, {15, 0}, {31, 0}, {32, 0}, {15, 0}, {15, 0},
{15, 0}, {15, 0}, {15, 0}, {29, 0}, {15, 0}, {33, 0}, {33, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {16, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {31, 0}, {32, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0},
{30, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {33, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {16, 0}, {15, 0}, {33, 0}, {15, 0}, {15, 0}, {29, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0},
{15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {16, 0}, {15, 0}, {33, 0}, {15, 0}, {16, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {16, 0}, {19, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {19, 0},
{15, 0}, {15, 0}, {16, 0}, {30, 0}, {15, 0}, {30, 0}, {19, 0}, {33, 0}, {15, 0}, {30, 0}, {29, 0}, {33, 0}, {15, 0}, {30, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {16, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0},
{15, 0}, {15, 0}, {15, 0}, {15, 0}, {30, 0}, {15, 0}, {15, 0}, {19, 0}, {33, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {29, 0}, {15, 0}, {15, 0}, {16, 0}, {33, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0},
{15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {29, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {29, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {19, 0},
{19, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {30, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {30, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {16, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0},
{15, 0}, {19, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {33, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {29, 0}, {16, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0},
{15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {29, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {30, 0}, {15, 0}, {16, 0}, {30, 0}, {15, 0}, {15, 0}, {15, 0}, {29, 0}, {19, 0}, {15, 0}, {15, 0}, {16, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {33, 0},
{15, 0}, {15, 0}, {33, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {19, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {16, 0}, {15, 0}, {29, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0},
{15, 0}, {30, 0}, {30, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {19, 0}, {29, 0}, {29, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0},
{15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {16, 0}, {29, 0}, {17, 0}, {18, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {33, 0}, {33, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {30, 0}, {15, 0}, {30, 0}, {19, 0}, {15, 0}, {15, 0}, {15, 0},
{15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {31, 0}, {32, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {19, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {30, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0},
{15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {29, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {30, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {16, 0}, {30, 0}, {19, 0}, {15, 0}, {16, 0}, {19, 0}, {15, 0}, {15, 0}, {19, 0}, {15, 0}, {15, 0}, {29, 0}, {15, 0},
{15, 0}, {33, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {33, 0}, {15, 0}, {19, 0}, {30, 0}, {15, 0}, {15, 0}, {15, 0}, {16, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {30, 0}, {15, 0}, {15, 0}, {15, 0}, {19, 0}, {19, 0}, {29, 0}, {30, 0}, {15, 0}, {33, 0}, {16, 0},
{15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {19, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {16, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {29, 0}, {15, 0}, {15, 0}, {16, 0}, {19, 0},
{15, 0}, {15, 0}, {16, 0}, {15, 0}, {15, 0}, {16, 0}, {15, 0}, {15, 0}, {15, 0}, {30, 0}, {33, 0}, {15, 0}, {15, 0}, {15, 0}, {16, 0}, {15, 0}, {15, 0}, {15, 0}, {30, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {16, 0}, {15, 0}, {29, 0}, {33, 0}, {16, 0}, {19, 0}, {15, 0},
{15, 0}, {16, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {33, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {19, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0},
{15, 0}, {16, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {30, 0}, {15, 0}, {33, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0},
{15, 0}, {30, 0}, {15, 0}, {15, 0}, {17, 0}, {18, 0}, {16, 0}, {15, 0}, {15, 0}, {19, 0}, {15, 0}, {15, 0}, {16, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {30, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0},
{15, 0}, {15, 0}, {30, 0}, {15, 0}, {31, 0}, {32, 0}, {15, 0}, {15, 0}, {15, 0}, {16, 0}, {16, 0}, {15, 0}, {15, 0}, {16, 0}, {33, 0}, {15, 0}, {29, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {30, 0}, {15, 0}, {30, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {30, 0},
{15, 0}, {15, 0}, {29, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {19, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {30, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {19, 0}, {30, 0}, {15, 0}, {15, 0}, {29, 0}, {30, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0},
{15, 0}, {15, 0}, {15, 0}, {15, 0}, {17, 0}, {18, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {33, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {16, 0}, {15, 0}, {33, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {16, 0},
{15, 0}, {15, 0}, {15, 0}, {15, 0}, {31, 0}, {32, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {17, 0}, {18, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0},
{15, 0}, {19, 0}, {15, 0}, {15, 0}, {15, 0}, {16, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {16, 0}, {15, 0}, {15, 0}, {31, 0}, {32, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {30, 0}, {15, 0}, {15, 0},
{15, 0}, {19, 0}, {15, 0}, {15, 0}, {19, 0}, {30, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {17, 0}, {18, 0}, {15, 0}, {29, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {16, 0}, {15, 0}, {19, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {30, 0}, {15, 0}, {15, 0}, {30, 0}, {15, 0}, {15, 0},
{33, 0}, {16, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {16, 0}, {31, 0}, {32, 0}, {15, 0}, {19, 0}, {15, 0}, {30, 0}, {15, 0}, {15, 0}, {15, 0}, {33, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {33, 0}, {15, 0}, {30, 0}, {29, 0}, {15, 0}, {15, 0}, {15, 0},
{29, 0}, {30, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {29, 0}, {19, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {19, 0}, {15, 0}, {30, 0}, {33, 0}, {16, 0}, {15, 0},
{15, 0}, {15, 0}, {15, 0}, {33, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {19, 0}, {15, 0}, {17, 0}, {18, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {17, 0}, {18, 0}, {29, 0}, {33, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {30, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0},
{15, 0}, {17, 0}, {18, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {19, 0}, {31, 0}, {32, 0}, {15, 0}, {16, 0}, {15, 0}, {15, 0}, {31, 0}, {32, 0}, {15, 0}, {15, 0}, {15, 0}, {33, 0}, {29, 0}, {15, 0}, {15, 0}, {15, 0}, {19, 0}, {15, 0}, {16, 0}, {15, 0}, {15, 0}, {15, 0},
{19, 0}, {31, 0}, {32, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {19, 0}, {15, 0}, {30, 0}, {15, 0}, {19, 0}, {15, 0}, {30, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {16, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {16, 0},
{33, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {29, 0}, {15, 0}, {19, 0}, {15, 0}, {29, 0}, {19, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {19, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0},
{15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {33, 0}, {29, 0}, {15, 0}, {15, 0}, {29, 0}, {30, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {33, 0}, {30, 0}, {15, 0}, {15, 0}, {15, 0},
{15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {33, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {29, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0},
{15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {29, 0}, {15, 0}, {19, 0}, {15, 0}, {15, 0}, {15, 0}, {33, 0}, {15, 0}, {15, 0}, {29, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {29, 0}, {15, 0}, {16, 0}, {15, 0},
{15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {33, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {17, 0}, {18, 0}, {19, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0},
{15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {19, 0}, {15, 0}, {15, 0}, {19, 0}, {30, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {29, 0}, {29, 0}, {33, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {31, 0}, {32, 0}, {15, 0}, {19, 0}, {30, 0}, {16, 0}, {15, 0},
{16, 0}, {15, 0}, {15, 0}, {15, 0}, {29, 0}, {29, 0}, {15, 0}, {15, 0}, {15, 0}, {16, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {19, 0}, {19, 0}, {19, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {19, 0}, {15, 0}, {30, 0}, {15, 0}, {15, 0},
{15, 0}, {17, 0}, {18, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {29, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {16, 0}, {15, 0}, {30, 0}, {15, 0}, {15, 0}, {15, 0}, {30, 0}, {30, 0}, {15, 0}, {16, 0}, {29, 0}, {15, 0}, {15, 0}, {15, 0},
{15, 0}, {31, 0}, {32, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {29, 0}, {33, 0}, {15, 0}, {15, 0}, {15, 0}, {30, 0}, {15, 0}, {15, 0}, {15, 0}, {16, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {30, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0},
{15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {33, 0}, {15, 0}, {30, 0}, {15, 0}, {17, 0}, {18, 0}, {29, 0}, {30, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {33, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {30, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0},
{15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {30, 0}, {29, 0}, {30, 0}, {15, 0}, {15, 0}, {31, 0}, {32, 0}, {15, 0}, {29, 0}, {15, 0}, {33, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {33, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {33, 0}, {15, 0}, {15, 0}, {15, 0},
{15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {19, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {33, 0}, {15, 0}, {29, 0}, {30, 0}, {15, 0}, {15, 0},
{15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {30, 0}, {19, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {19, 0}, {15, 0}, {15, 0}, {33, 0}, {15, 0},
{15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0},
{15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {16, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0},
{15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {33, 0}, {33, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {17, 0}, {18, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0},
{19, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {29, 0}, {15, 0}, {15, 0}, {15, 0}, {16, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {19, 0}, {15, 0}, {15, 0}, {31, 0}, {32, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {19, 0}, {15, 0},
{15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {33, 0}, {15, 0}, {15, 0}, {16, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {19, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {19, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0},
{15, 0}, {15, 0}, {30, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {16, 0}, {15, 0}, {16, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {16, 0}, {17, 0}, {18, 0}, {15, 0}, {15, 0}, {33, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0},
{16, 0}, {15, 0}, {30, 0}, {15, 0}, {15, 0}, {16, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {30, 0}, {15, 0}, {15, 0}, {31, 0}, {32, 0}, {15, 0}, {30, 0}, {33, 0}, {29, 0}, {19, 0}, {15, 0}, {15, 0}, {15, 0},
{29, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {19, 0}, {16, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {29, 0}, {29, 0}, {15, 0}, {15, 0}, {15, 0}, {30, 0}, {15, 0}, {15, 0}, {19, 0}, {15, 0}, {15, 0}, {19, 0},
{15, 0}, {15, 0}, {15, 0}, {15, 0}, {17, 0}, {18, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {33, 0}, {15, 0}, {15, 0}, {33, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0},
{15, 0}, {15, 0}, {15, 0}, {15, 0}, {31, 0}, {32, 0}, {30, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {19, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {33, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0},
{15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {33, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {19, 0}, {16, 0}, {29, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}, {15, 0}
};

LevelC::~LevelC() {
}

void LevelC::initialize(Entity* player, GLuint g_fontsheet_texture_id, float view_x, float view_y) {
    std::cout << "Level A initialize: start" << std::endl;
    GLuint map_texture_id = Utility::load_texture("assets/images/PixelFarm_Tileset.png");
    m_state.map           = new Map(LEVEL_WIDTH, LEVEL_HEIGHT, LEVEL_C_DATA, map_texture_id, 1.0f, 14, 11);

    m_state.player = player;

    // Win flag //
    // Heart (16, -30)
    m_state.collectables = new Entity[1];
    GLuint flag_texture_id = Utility::load_texture("assets/images/Hearts_Red_1.png");
    m_state.collectables[0].set_entity_type(FLAG);
    m_state.collectables[0].m_animation_indices = NULL;
    m_state.collectables[0].m_texture_id = flag_texture_id;
    m_state.collectables[0].set_position(glm::vec3(16.0f, -30.0f, 0.0f));
    m_state.collectables[0].set_movement(glm::vec3(0.0f));
    m_state.collectables[0].set_speed(0.0f);
    m_state.collectables[0].set_width(1.0f);
    m_state.collectables[0].set_height(1.0f);
    m_state.collectables[0].set_scale(1.0f);
    m_state.collectables[0].update(0.0f, m_state.player, {}, 0, NULL, 0, m_state.map);

    /* Enemies' stuff */
    m_state.enemies = std::vector<Entity*>(ENEMY_COUNT);

    m_state.textures.push_back(Utility::load_texture("assets/images/enemy/ducky_3_spritesheet.png"));
    m_state.textures.push_back(Utility::load_texture("assets/images/enemy/chicken-walk.png"));
    m_state.textures.push_back(Utility::load_texture("assets/images/enemy/piggy_sheet.png"));

    for (int i = 0; i < ENEMY_COUNT; ++i) {
        // randomly add enemies around the player
        Entity* new_enemy = new Entity();
        // char* name = "ducky_3_spritesheet.png";
        // new_enemy->initialize(ENEMY, name, player, view_x, view_y);
        int new_enemy_texture = Utility::rand_int_range(0, m_state.textures.size() - 1);
        switch (new_enemy_texture) {
            case 0:
                new_enemy->initialize(ENEMY, "assets/images/enemy/ducky_3_spritesheet.png", player, view_x, view_y);
                break;
            case 1:
                new_enemy->initialize(ENEMY, "assets/images/enemy/chicken-walk.png", player, view_x, view_y);
                break;
            case 2:
                new_enemy->initialize(ENEMY, "assets/images/enemy/piggy_sheet.png", player, view_x, view_y);
                break;
        }
        new_enemy->m_texture_id = m_state.textures[new_enemy_texture];
        m_state.enemies[i] = new_enemy;
    }

    /**
     BGM and SFX
     */
    m_state.jump_sfx = Mix_LoadWAV("assets/audio/knifesharpener1.wav");

    m_view_x = view_x;
    m_view_y = view_y;

    std::cout << "Level C initialize: done" << std::endl;
}

void LevelC::update(float delta_time) {
    m_state.player->update(delta_time, m_state.player, m_state.enemies, ENEMY_COUNT, m_state.collectables, 1, m_state.map);

    // add more enemies randomly around the player
    for (int i = 0; i < m_state.enemies.size(); i++) {
        if (!m_state.enemies[i]->get_is_active()) {
            m_state.enemies[i]->spawn(m_state.player, m_view_x, m_view_y);
        }
        m_state.enemies[i]->update(delta_time, m_state.player, m_state.enemies, ENEMY_COUNT, NULL, 0, m_state.map);
    }
    // std::cout << "Level C update: done" << std::endl;
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
    // std::cout << "Level C render: done" << std::endl;
}
