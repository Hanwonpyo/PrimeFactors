﻿#include "pch.h"
#include<vector>
#include "../PrimeFactor/prime-factors.cpp"
using namespace std;
class PrimeFixture : public testing::Test
{
public:
	PrimeFactor prime_factor;
	vector<int> expected;

};

TEST_F(PrimeFixture, 0f1)
{
	expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}
TEST_F(PrimeFixture, 0f2)
{
	expected = {2};
	EXPECT_EQ(expected, prime_factor.of(2));
}
TEST_F(PrimeFixture, 0f3)
{
	expected = {3};
	EXPECT_EQ(expected, prime_factor.of(3));
}
