#include <stdio.h>
#include "ColourCoding_CoreDefinitions.h"
#include "ColourCoding_TestDefinitions.h"
#include "ColourCoding_GenerateManual.h"

void ColourCoding_GenerateRefernceManual(void)
{
    int MajorColor = 0;
    int MinorColor = 0;
    int ColourCodingNumber = 1;

    printf("\n\nPlease find the reference manual for the colour coding below \n\n");
    printf("Major colour\t\tMinor colour\t\tColourCodingNumber \n");
    for(MajorColor = 0; MajorColor < numberOfMajorColors; MajorColor++)
    {
        for(MinorColor = 0; MinorColor < numberOfMinorColors; MinorColor++)
        {
            printf("%s     \t\t%s       \t\t        %d      \n",MajorColorNames[MajorColor], MinorColorNames[MinorColor], ColourCodingNumber);
            ColourCodingNumber++;
        }
    }
}
