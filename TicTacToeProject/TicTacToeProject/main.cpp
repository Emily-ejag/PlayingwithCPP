#include <iostream>
#include <string>

using namespace std;

const int ROWS = 3;
const int COLS = 3;

void runGame();
void initializeGameBoard(string gameBoard[ROWS][COLS]);
void printCurrentBoard(string gameBoard[ROWS][COLS]);
void getUserInput(string xTurn, string gameBoard[ROWS][COLS]);
bool cellAlreadyOccupied(int row, int col, string gameBoard[ROWS][COLS]);
string getWinner(string gameBoard[ROWS][COLS]);
bool isBoardFull(string gameBoard[ROWS][COLS]);

int main()
{
	cout << "Welcome to Emily's Tic Tac Toe Game \n good luck to team X and team O" << endl;
	runGame();
	return 0;
}

void runGame() {
	string gameBoard[ROWS][COLS];
	initializeGameBoard(gameBoard);
	string xtrue = "X";
	while (!isBoardFull(gameBoard) && getWinner(gameBoard) == " ")
	{
		printCurrentBoard(gameBoard);
		cout << "it is " + xtrue + " turn\n " << endl;
		getUserInput(xtrue, gameBoard);
		if (xtrue=="X")
		{
			xtrue = "O";
		}
		else {
			
			xtrue = "X";
		}

	}
	printCurrentBoard(gameBoard);
}

void initializeGameBoard(string gameBoard[ROWS][COLS]) {
	cout << "This is how the current board is looking\n" << endl;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			gameBoard[i][j] = " ";
		}
	}
}

void printCurrentBoard(string gameBoard[ROWS][COLS]) {
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (j != COLS-1)
			{
				cout << gameBoard[i][j] << " | ";
			}
			else {
				cout << gameBoard[i][j] << endl;
			}
		}
		if (i != ROWS - 1)
		{
			cout << "- - - - -" << endl;
		}
		
	}
	cout << endl;
}

void getUserInput(string xTurn, string gameBoard[ROWS][COLS]) {
	
	int row;
	int col;
	cout << "Please enter the row, then the column index from 0 to 2 separated by a space"  << endl;
	cin >> row;
	cin >> col;

	if (!cellAlreadyOccupied(row, col, gameBoard))
	{
		gameBoard[row][col] = xTurn;
		cout << " \n" + getWinner(gameBoard) +" \n" << endl;
	}
	else {
		if (!isBoardFull(gameBoard))
		{
			cout << "Oh oh, it seems that cell is already occupied, please try with an other cell" << endl;
			cout << "it is "+xTurn+" turn\n " << endl;
			getUserInput(xTurn, gameBoard);
		}
	}
	
}

bool cellAlreadyOccupied(int row, int col, string gameBoard[ROWS][COLS]) {
	if (gameBoard[row][col]!=" ")
	{
		return true;
	}
	else {
		return false;
	}
	
}

string getWinner(string gameBoard[ROWS][COLS]) {
	int count = 0 ;
	int count2 = 0;
	int count3 = 0;
	int count4 = 0;
	string winner= " ";
	//checking rows
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 1 ; j < COLS; j++)
		{
			if (gameBoard[i][j] == gameBoard[i][j-1] && gameBoard[i][j] != " ") {
				count = count + 1;
				winner = gameBoard[i][j];
			}
			else {
				count = 0;
			}
			//cout << "count = " << count << endl;
		}
		if (count == ROWS-1) {
			return "The winner is " + winner;
		}
	}
	//checking cols
	for (int i = 0; i < COLS; i++)
	{
		for (int j = 1; j < ROWS; j++)
		{
			if (gameBoard[j][i] == gameBoard[j - 1][i] && gameBoard[j][i] != " ") {
				count2 = count2 + 1;
				winner = gameBoard[j][i];
			}
			else {
				count2 = 0;
			}
			//cout << "count2 = " << count2 << endl;
		}
		if (count2 == COLS-1) {
			return "The winner is " + winner;
		}
	}
	//cheking diagonal
	for (int i = 1; i < COLS; i++)
	{
		if (gameBoard[i][i] == gameBoard[i-1][i - 1] && gameBoard[i][i] != " ") {
			count3 = count3 + 1;
			winner = gameBoard[i][i];
		}
		else {
			count3 = 0;
		}
		//cout << "count3 = " << count3 << endl;
	}
	if (count3 == COLS -1) {
		return "The winner is " + winner;
	}
	//other diagonal
	//2 0, 1 1, 0 2
	if (gameBoard[2][0] == gameBoard[1][1] && gameBoard[1][1] == gameBoard[0][2]  && gameBoard[1][1] != " ") {
		return "The winner is " + gameBoard[1][1];
	}

	if (isBoardFull(gameBoard))
	{
		return "Cat's Game, :( nobody won";
	}
	return " ";
}

bool isBoardFull(string gameBoard[ROWS][COLS]) {
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (gameBoard[i][j]==" ") {
				return false;
			}
		}
	}
	return true;
}