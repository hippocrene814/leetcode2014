class Solution {
public:
    bool isValidRow(vector<vector<char>> &board)
    {
        for(int i=0; i<9; i++)
        {
            int a[9] = {0};
            for(int j=0; j<9; j++)
            {
                if(board[i][j] != '.')
                {
                if(a[board[i][j]-'1'] == 1)
                    return false;
                a[board[i][j]-'1'] = 1;
                }
            }
        }
        return true;
    }
    bool isValidCol(vector<vector<char>> &board)
    {
        for(int j=0; j<9; j++)
        {
            int a[9] = {0};
            for(int i=0; i<9; i++)
            {
                if(board[i][j] != '.')
                {
                if(a[board[i][j]-'1'] == 1)
                    return false;
                a[board[i][j]-'1'] = 1;
                }
            }
        }
        return true;
    }
    bool isValidBox(vector<vector<char>> &board)
    {
        int a[2][9] = {{0, 0, 0, 3, 3, 3, 6, 6, 6}, {0, 3, 6, 0, 3, 6, 0, 3, 6}};
        for(int k=0; k<9; k++)
        {
            int b[9] = {0};
            for(int i=a[0][k]; i<(a[0][k]+3); i++)
            {
                for(int j=a[1][k]; j<(a[1][k]+3); j++)
                {
                    if(board[i][j] != '.')
                    {
                    if(b[board[i][j]-'1'] == 1)
                        return false;
                    b[board[i][j]-'1'] = 1;
                    }
                }
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char> > &board) {
        return isValidRow(board) && isValidCol(board) && isValidBox(board);
    }
};