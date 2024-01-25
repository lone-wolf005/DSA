class Solution {
private:
bool isSafe(char val,int x,int y,vector<vector<char>>&board){
    for(int i=0;i<9;i++){
        if(board[x][i]==val)return false;
        if(board[i][y]==val)return false;
        if(board[3*(x/3) + i/3][3*(y/3) + i%3]==val)return false;
    }
    return true;
}
public:
    bool solve (vector<vector<char>>&board){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.'){
                    for(int k=1;k<=9;k++){
                        char val = char(k+'0');
                        if(isSafe(val,i,j,board)){
                            board[i][j]=val;
                            bool solved = solve(board);
                            if(solved)return true;
                            else{
                                board[i][j]='.';
                            }
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
        
    }
};