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
		TEST_METHOD(ScissorsAndRock) // Scissors and Rock input (Check for Player2 as Rock wins)
		{
			//arrange
			char input1[] = "Scissors";
			char input2[] = "Rock";
			int EXPECTED = 0;

			//act
			int result = strcmp(RockPaperScissors(input1, input2), "Player2");

			//assert
			Assert::AreEqual(EXPECTED, result);
		}
		TEST_METHOD(RockAndScissors) // Rock and Scissors input (Check for Player1 as Rock wins)
		{
			//arrange
			char input1[] = "Rock";
			char input2[] = "Scissors";
			int EXPECTED = 0;

			//act
			int result = strcmp(RockPaperScissors(input1, input2), "Player1");

			//assert
			Assert::AreEqual(EXPECTED, result);
		}
		TEST_METHOD(RockAndRock) // Rock and Rock input (Check for Draw as same shapes)
		{
			//arrange
			char input1[] = "Rock";
			char input2[] = "Rock";
			int EXPECTED = 0;

			//act
			int result = strcmp(RockPaperScissors(input1, input2), "Draw");

			//assert
			Assert::AreEqual(EXPECTED, result);
		}
		TEST_METHOD(PaperAndPaper) // Paper and Paper input (Check for Draw as same shapes)
		{
			//arrange
			char input1[] = "Paper";
			char input2[] = "Paper";
			int EXPECTED = 0;

			//act
			int result = strcmp(RockPaperScissors(input1, input2), "Draw");

			//assert
			Assert::AreEqual(EXPECTED, result);
		}
		TEST_METHOD(ScissorsAndScissors) // Scissors and Scissors input (Check for Draw as same shapes)
		{
			//arrange
			char input1[] = "Scissors";
			char input2[] = "Scissors";
			int EXPECTED = 0;

			//act
			int result = strcmp(RockPaperScissors(input1, input2), "Draw");

			//assert
			Assert::AreEqual(EXPECTED, result);
		}
		TEST_METHOD(rockAndPaper) // rock and Paper input (Check for Invalid as rock instead of Rock)
		{
			//arrange
			char input1[] = "rock";
			char input2[] = "Paper";
			int EXPECTED = 0;

			//act
			int result = strcmp(RockPaperScissors(input1, input2), "Invalid");

			//assert
			Assert::AreEqual(EXPECTED, result);
		}
		TEST_METHOD(paperAndscissors) // paper and scissors input (Check for Invalid as paper instead of Paper and scissors instead of Scissors)
		{
			//arrange
			char input1[] = "paper";
			char input2[] = "scissors";
			int EXPECTED = 0;

			//act
			int result = strcmp(RockPaperScissors(input1, input2), "Invalid");

			//assert
			Assert::AreEqual(EXPECTED, result);
		}
		TEST_METHOD(pAndR) // p and R input (Check for Invalid as both inputs other than Rock, Paper, or Scissors)
		{
			//arrange
			char input1[] = "p";
			char input2[] = "R";
			int EXPECTED = 0;

			//act
			int result = strcmp(RockPaperScissors(input1, input2), "Invalid");

			//assert
			Assert::AreEqual(EXPECTED, result);
		}
		TEST_METHOD(numbers) // positive numbers input (Check for Invalid as both inputs other than Rock, Paper, or Scissors)
		{
			//arrange
			char input1[] = "1";
			char input2[] = "2";
			int EXPECTED = 0;

			//act
			int result = strcmp(RockPaperScissors(input1, input2), "Invalid");

			//assert
			Assert::AreEqual(EXPECTED, result);
		}
		TEST_METHOD(negativeAndZero) // negative number and zero input (Check for Invalid as both inputs other than Rock, Paper, or Scissors)
		{
			//arrange
			char input1[] = "-1";
			char input2[] = "0";
			int EXPECTED = 0;

			//act
			int result = strcmp(RockPaperScissors(input1, input2), "Invalid");

			//assert
			Assert::AreEqual(EXPECTED, result);
		}
		TEST_METHOD(negativeNumbers) // negative numbers (Check for Invalid as both inputs other than Rock, Paper, or Scissors)
		{
			//arrange
			char input1[] = "-1";
			char input2[] = "-10";
			int EXPECTED = 0;

			//act
			int result = strcmp(RockPaperScissors(input1, input2), "Invalid");

			//assert
			Assert::AreEqual(EXPECTED, result);
		}
	};
}