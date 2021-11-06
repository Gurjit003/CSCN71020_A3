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
		TEST_METHOD(PaperAndRock) // Paper and Rock input (Check for Player1 as Paper wins)
		{
			//arrange
			char input1[] = "Paper";
			char input2[] = "Rock";
			int EXPECTED = 0;

			//act
			int result = strcmp(RockPaperScissors(input1, input2), "Player1");

			//assert
			Assert::AreEqual(EXPECTED, result);
		}
		TEST_METHOD(PaperAndScissors) // Paper and Scissors input (Check for Player2 as Scissors wins)
		{
			//arrange
			char input1[] = "Paper";
			char input2[] = "Scissors";
			int EXPECTED = 0;

			//act
			int result = strcmp(RockPaperScissors(input1, input2), "Player2");

			//assert
			Assert::AreEqual(EXPECTED, result);
		}
		TEST_METHOD(ScissorsAndPaper) // Scissors and Paper input (Check for Player1 as Scissors wins)
		{
			//arrange
			char input1[] = "Scissors";
			char input2[] = "Paper";
			int EXPECTED = 0;

			//act
			int result = strcmp(RockPaperScissors(input1, input2), "Player1");

			//assert
			Assert::AreEqual(EXPECTED, result);
		}
	};
}