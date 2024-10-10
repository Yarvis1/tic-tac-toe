//this program plays tic tac toe
//creator: Zach Yarvis
//10/4/2024
#include <iostream>
#include <cstring>
using namespace std;

int checkwin(char board[3][3]);
void printBoard(char board[3][3]);
void place(char board[3][3], char &turn);
// initalize board and turn + while loop for turns
int main() {
  char playAgain='\n';
  int xWins=0;
  int oWins=0;
  char board[3][3] = {
        {'-','-','-'},
        {'-','-','-'},
        {'-','-','-'}
    };
    char turn = 'x';
    printBoard(board);
    while (checkwin(board) == 0) {
        place(board, turn);  
    }
    if (checkwin(board) == 1) {
        cout << "Player x wins!" << endl;
	xWins++;
	cout<< "o won: "<<oWins<<" times."<<endl;
	cout<< "x won: "<<xWins<<" times. play again?(y/n)"<<endl;
        cin>>playAgain;
        if (playAgain=='y'){
          main();
        }
        else{
          exit(0);
        }
    }
     else if (checkwin(board) == 2) {
        cout << "Player o wins!" << endl;
	oWins++;
	cout<< "x won: "<<xWins<<" times."<<endl;
	cout<< "o won: "<<oWins<<" times. play again?(y/n)"<<endl;
	cin>>playAgain;
	if (playAgain=='y'){
	  main();
	}
	else{
	  exit(0);
	}
}
}
//place
void place(char board[3][3], char &turn) {  // pass by refrence
    int row, col;
    cout << "Enter a row (1-3): ";
    cin >> row;
    cout << "Enter a column (1-3): ";
    cin >> col;
    
    if (board[row-1][col-1] == '-') {
        board[row-1][col-1] = turn;  // place turn
        if (turn == 'x') {
	  turn = 'o';  // switch turn
        } else {
            turn = 'x';  // switch turn
        }
    } else {
        cout << "Invalid move! Try again." << endl;
    }
    printBoard(board);
}
//checkwins
int checkwin(char board[3][3]){
  if(board[0][0]=='x' && board[0][1]=='x'&& board[0][2]=='x'){
    return 1;
  }
  if(board[1][0]=='x' && board[1][1]=='x'&& board[1][2]=='x'){
    return 1;
  }
  if(board[2][0]=='x' && board[2][1]=='x'&& board[2][2]=='x'){
    return 1;
  }
  if(board[0][0]=='x' && board[1][0]=='x'&& board[2][0]=='x'){
    return 1;
  }
  if(board[0][1]=='x' && board[1][1]=='x'&& board[2][1]=='x'){
    return 1;
  }
  if(board[0][2]=='x' && board[1][2]=='x'&& board[2][2]=='x'){
    return 1;
  }
  if(board[0][0]=='x' && board[1][1]=='x'&& board[2][2]=='x'){
    return 1;
  }
  if(board[2][0]=='x' && board[1][1]=='x'&& board[0][2]=='x'){
    return 1;
  }
  if(board[0][0]=='o' && board[0][1]=='o'&& board[0][2]=='o'){
    return 2;
  }
  if(board[1][0]=='o' && board[1][1]=='o' && board[1][2]=='o'){
    return 2;
  }
  if(board[2][0]=='o' && board[2][1]=='o'&& board[2][2]=='o'){
    return 2;
  }
  if(board[0][0]=='o' && board[1][0]=='o'&& board[2][0]=='o'){
    return 2;
  }
  if(board[0][1]=='o' && board[1][1]=='o'&& board[2][1]=='o'){
    return 2;
  }
  if(board[0][2]=='o' && board[1][2]=='o'&& board[2][2]=='o'){
    return 2;
  }
  if(board[0][0]=='o' && board[1][1]=='o' && board[2][2]=='o'){
    return 2;
  }
  if(board[2][0]=='o' && board[1][1]=='o'&& board[0][2]=='o'){
    return 2;
  }
  return 0;
}

//prints board
void printBoard(char board[3][3]){
  cout<<'\t'<<'1'<<'\t'<<'2'<<'\t'<<'3'<<endl;
  cout<<'1'<<'\t'<<board[0][0] <<'\t'<<board[0][1]<<'\t'<<board[0][2]<<endl;
  cout<<'2'<<'\t'<<board[1][0] <<'\t'<<board[1][1]<<'\t'<<board[1][2]<<endl;
  cout<<'3'<<'\t'<<board[2][0] <<'\t'<<board[2][1]<<'\t'<<board[2][2]<<endl;
}

