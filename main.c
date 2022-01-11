#include "Core_TelecomCableColourCoding.h"
#include "Test_TelecomCableColourCoding.h"

int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    ColourCoding_GenerateRefernceManual();

    return 0;
}
