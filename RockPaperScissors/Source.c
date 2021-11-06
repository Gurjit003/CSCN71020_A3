// CSCN71020_A3 - Rock Paper Scissors program 
// Novemer 5 - 2021 - Gurjit Singh 

#include <stdio.h>
#include <string.h>

char* RockPaperScissors(char input1[], char input2[]);

int main(void)
{
	return (0);
}

char *RockPaperScissors(char input1[], char input2[])  
{
	int a, b;
	
	// For Rock and Paper input (Paper/Player2 wins)
	a = strcmp(input1, "Rock"); 
	b = strcmp(input2, "Paper"); 
	if ((a == 0) && (b == 0))
	{
		return "Player2";
	} 

	// For Paper and Rock input (Paper/Player1 wins)
	a = strcmp(input1, "Paper");
	b = strcmp(input2, "Rock");
	if ((a == 0) && (b == 0))
	{
		return "Player1";
	}

	// For Paper and Scissors input (Scissors/Player2 wins)
	a = strcmp(input1, "Paper");
	b = strcmp(input2, "Scissors");
	if ((a == 0) && (b == 0))
	{
		return "Player2";
	}

	// For Scissors and Paper input (Scissors/Player1 wins)
	a = strcmp(input1, "Scissors");
	b = strcmp(input2, "Paper");
	if ((a == 0) && (b == 0))
	{
		return "Player1";
	}

	// For Scissors and Rock input (Rock/Player2 wins)
	a = strcmp(input1, "Scissors");
	b = strcmp(input2, "Rock");
	if ((a == 0) && (b == 0))
	{
		return "Player2";
	}

	// For Rock and Scissors input (Rock/Player1 wins)
	a = strcmp(input1, "Rock");
	b = strcmp(input2, "Scissors");
	if ((a == 0) && (b == 0))
	{
		return "Player1";
	}

	// For Rock and Rock input (Same shape so draw)
	a = strcmp(input1, "Rock");
	b = strcmp(input2, "Rock");
	if ((a == 0) && (b == 0))
	{
		return "Draw";
	}

	// For Paper and Paper input (Same shape so draw)
	a = strcmp(input1, "Paper");
	b = strcmp(input2, "Paper");
	if ((a == 0) && (b == 0))
	{
		return "Draw";
	}

	// For Scissors and Scissors input (Same shape so draw)
	a = strcmp(input1, "Scissors");
	b = strcmp(input2, "Scissors");
	if ((a == 0) && (b == 0))
	{
		return "Draw";
	}
	else
	{
		return "Invalid"; // For inputs other than Rock, Paper, or Scissors 
	}	                  // Includes numbers, other words, correct input but wrong format (rock instead of Rock) 
}