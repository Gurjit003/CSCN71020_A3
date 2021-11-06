// CSCN71020_A3 - Rock Paper Scissors program 
// Novemer 5 - 2021 - Gurjit Singh 

#include "pch.h"
#include "CppUnitTest.h"

extern "C" char *RockPaperScissors(char input1[], char input2[]);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
	TEST_CLASS(UnitTests)
	{
	public:
		TEST_METHOD(RockAndPaper) // Rock and Paper input (Check for Player2 as Paper wins)
		{
			//arrange
			char input1[] = "Rock";
			char input2[] = "Paper";
			int EXPECTED = 0;

			//act
			int result = strcmp(RockPaperScissors(input1, input2), "Player2");

			//assert
			Assert::AreEqual(EXPECTED, result);
		}
	};
}