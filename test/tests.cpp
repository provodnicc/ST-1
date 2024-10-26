// Copyright 2024 Pavel Smirnov
#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"


TEST(PrimeTest, CheckPrimeWithPrimeNumber) {
  EXPECT_TRUE(checkPrime(3));
}


TEST(PrimeTest, CheckPrimeWithCompositeNumber) {
  EXPECT_FALSE(checkPrime(4));
}


TEST(PrimeTest, NthPrimeNumber) {
  EXPECT_EQ(11, nPrime(5));
}


TEST(PrimeTest, NextPrimeNumber) {
  EXPECT_EQ(5, nextPrime(3));
}


TEST(PrimeTest, SumOfPrimeNumbers) {
  uint64_t maxBound = 18;
  uint64_t expectedSum = 2 + 3 + 5 + 7 + 11 + 13 + 17;
  EXPECT_EQ(expectedSum, sumPrime(maxBound));
}
