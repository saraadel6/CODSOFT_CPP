

#include <bits/stdc++.h>
using namespace std;

void display(char board[3][3]){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<board[i][j];
            if(j<2) cout<<" | ";
        }
        cout<<'\n';
        if(i<2) cout<<"---------\n";
    }
}

bool isWinner(char board[3][3],char player) {
    for (int i=0; i<3; i++) {
        if(board[0][i]==player && board[1][i]==player && board[2][i]==player)
            return true;
        if(board[i][0]==player && board[i][1]==player && board[i][2]==player)
            return true;
    }
    if(board[0][0]==player && board[1][1]==player && board[2][2]==player)
        return true;
    if(board[0][2]==player && board[1][1]==player && board[2][0]==player)
        return true;

    return false;
}

bool isDraw(char board[3][3]){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++) {
            if(board[i][j]==' ')
                return false;
        }
    }
    return true;
}

int main() {
    cout << "\n___Tic-Tac-Toe Game___\n\n";

    char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    char player = 'X';
    bool draw = false;

    while (!draw) {
        display(board);
        int row, col;

        cout << "Player " << player << ", enter row (0-2)\n";
        cin>>row;
        cout<<"enter column (0-2): \n";
        cin >> col;

        if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ') {
            board[row][col] = player;

            if (isWinner(board, player)) {
                display(board);
                cout << "Congratulations Player " << player << " wins!\n";
                draw = true;
            } else if (isDraw(board)) {
                display(board);
                cout << "It's a draw!" << endl;
                draw = true;
            } else {
                player = (player == 'X') ? 'O' : 'X';
            }
        } else {
            cout << "Invalid move! Try again.\n";
        }
    }

        cout << "Thanks for playing!" << endl;

    return 0;
}
