#ifndef TEST_TELECOMCABLECOLOURCODING_H_INCLUDED
#define TEST_TELECOMCABLECOLOURCODING_H_INCLUDED

extern void testNumberToPair(int pairNumber, enum MajorColor expectedMajor, enum MinorColor expectedMinor);
extern void testPairToNumber(enum MajorColor major, enum MinorColor minor, int expectedPairNumber);

#endif // TEST_TELECOMCABLECOLOURCODING_H_INCLUDED
