#pragma once

#include "resource.h"

void WinMenu(HWND);
HMENU MENU;

constexpr auto HOME = 200;
constexpr auto XPTOLEVEL = 201;
constexpr auto LEVELTOXP = 202;
constexpr auto CREDSTOLEVEL = 203;
constexpr auto LEVELTOCREDS = 204;


namespace func {

	//Calculates how many credits are earned at one rank (no summation).
	inline unsigned long long rankToCredits(unsigned long long rank);

	//Calculates the rank using the credit earnings.
	inline unsigned long long creditsToRank(unsigned long long credits);

	//Calculates how many credits are earned between strtRank and trgtRank (summated).
	inline unsigned long long rankToCreditsSummate(unsigned long long strtRank, unsigned long long trgtRank);

	//Calculates XP between a rank + rankProgress and a target.
	inline unsigned long long XPCalculation(unsigned long long rank, unsigned long long rankProgress, unsigned long long target);

	//Calculates the rank using an amount of XP. (Default max = 5 000 050 000 000)
	inline unsigned long long RankCalculation(unsigned long long xp, unsigned long long max);

}