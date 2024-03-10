// Copyright 2024 Pavel Smirnov
#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"


TEST(PrimeTest, CheckPrimeWithPrimeNumber) {
  uint64_t number = 13;
  EXPECT_TRUE(checkPrime(number));
}


TEST(PrimeTest, CheckPrimeWithCompositeNumber) {
  uint64_t number = 20;
  EXPECT_FALSE(checkPrime(number));
}


TEST(PrimeTest, NthPrimeNumber) {
  uint64_t number = 6;
  uint64_t expected = 13;
  EXPECT_EQ(expected, nPrime(n));
}


TEST(PrimeTest, NextPrimeNumber) {
  uint64_t value = 24;
  uint64_t expected = 29;
  EXPECT_EQ(expected, nextPrime(value));
}


TEST(PrimeTest, SumOfPrimeNumbers) {
  uint64_t maxBound = 21;
  uint64_t expectedSum = 2 + 3 + 5 + 7 + 11 + 13 + 17 + 19;
  EXPECT_EQ(expectedSum, sumPrime(maxBound));
}
