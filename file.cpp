//this game is tic tac toe
//creator: Zach Yarvis
//10/4/2024
#include <iostream>
#include <cstring>
using namespace std;
int checkwin(char board[3][3]);
float printBoard(char board[3][3]);
float place(char board[3][3],char turn);
int main(void){
  char turn ='x';
  char board[3][3] = {
    {'-','-','-'},
    {'-','-','-'},
    {'-','-','-'}
  };
  while (checkwin(board)==0){
  printBoard(board);
  }
  if(checkwin(board)==1){
    
  }
  if (checkwin(board)==2){

  }
}
float place(char board[3][3], char turn){
  int row;
  int col;
  cout<<"enter a row"<<endl;
  cin>>row;
  cout<<"enter a column"<<endl;
  cin>>col;
  if(board[row-1][col-1]=='-'){
    board[row-1][col-1]=turn;
    if (turn=='x'){
      turn='o';
    }
    else{
      turn='x';
    }
  }
  return turn;
  return board[3][3];
}

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
  if(board[2][2]=='x' && board[1][1]=='x'&& board[0][2]=='x'){
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
  if(board[2][2]=='o' && board[1][1]=='o'&& board[0][2]=='o'){
    return 2;
  }
  return 0;
}
//prints board
float printBoard(char board[3][3]){
  cout<<'\t'<<'1'<<'\t'<<'2'<<'\t'<<'3'<<endl;
  cout<<'1'<<'\t'<<board[0][0] <<'\t'<<board[0][1]<<'\t'<<board[0][2]<<endl;
  cout<<'2'<<'\t'<<board[1][0] <<'\t'<<board[2][1]<<'\t'<<board[1][2]<<endl;
  cout<<'3'<<'\t'<<board[2][0] <<'\t'<<board[2][1]<<'\t'<<board[2][2]<<endl;
}

