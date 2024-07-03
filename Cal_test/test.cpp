#include "pch.h"
#include "../TDD/cal.cpp"
#include <vector>

using namespace std;

TEST(TestCaseName, getSum) {

	vector<vector<int>> c = { 
		{0,0}, 
		{1,1},
		{2,1},
		{3,2}
	};

	for (int i = 0; i < c.size(); i++) {
		int input = c[i][0];
		int expected = c[i][1];
		
		EXPECT_EQ(expected, Fibo().fibo(input));
	}
}

