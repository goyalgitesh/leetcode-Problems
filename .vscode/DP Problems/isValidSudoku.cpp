#include <bits/stdc++.h>
using namespace std;

bool isValidSudoku(vector<vector<char>>& board) {
    int n = board.size();
    for(int i = 0; i < n; i++){
        unordered_set<char> row;
        unordered_set<char> col;
        unordered_set<char> box;
        for(int j = 0; j < n; j++){
            if(board[i][j] != '.'){
                if(row.find(board[i][j]) != row.end()) return false;
                row.insert(board[i][j]);
            }
            if(board[j][i] != '.'){
                if(col.find(board[j][i]) != col.end()) return false;
                col.insert(board[j][i]);
            }
            int x = i/3*3 + j/3;
            int y = i%3*3 + j%3;
            if(board[x][y] != '.'){
                if(box.find(board[x][y]) != box.end()) return false;
                box.insert(board[x][y]);
            }
        }
    }    

}
