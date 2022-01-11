#include "ColourCoding_CoreDefinitions.h"
#include "ColourCoding_TestDefinitions.h"
#include "ColourCoding_GenerateManual"

int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    ColourCoding_GenerateRefernceManual();

    return 0;
}
