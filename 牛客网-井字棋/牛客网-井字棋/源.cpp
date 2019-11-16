#define _CRT_SECURE_NO_WARNINGS 1
class Board {
public:
	bool checkWon(vector<vector<int> > board) {
		for (size_t col = 0; col < board[0].size(); ++col)
		{
			if (board[0][col] + board[1][col] + board[2][col] == 3)
				return true;
		}
		for (size_t row = 0; row < board.size(); ++row)
		{
			if (board[row][0] + board[row][1] + board[row][2] == 3)
				return true;
		}
		if (board[0][0] + board[1][1] + board[2][2] == 3)
			return true;
		else
			return false;
	}
};
