#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;


int main(){
    srand(time(0)); //random number generator

    int guessUser , compChoice;

    cout<<"🎮 Welcome to Tic Tac Toe game 🎮"<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<"Choose Number between 1 - 3"<<endl;
    cout<<"1 = Rock \t 2 = Paper \t 3 = Scissor."<<endl;
    cin>>guessUser;
    
    compChoice = rand() % 3 + 1;

    if(guessUser == 1){
        cout<<"Rock";
    }else if(guessUser == 2){
        cout<<"Paper";
    }else if(guessUser == 3){
        cout<<"Scissor";
    }else{
        cout<<"Invalid Choise! 😜";
    }
    cout<<endl;

    if(guessUser == compChoice){
        cout<<"Game Tie! Try again";
    }else if((guessUser == 1 && compChoice == 3) || 
        (guessUser == 2 && compChoice == 1) || 
        (guessUser == 3 && compChoice == 2)){
            cout<<"🎉 You win !";
        }else{
            cout<<"💻 Computer Win!  Refressh the game and play again!";
        }
        cout<<endl;

    cout<<"Thanks for Playing! 😊"<<endl;

    return 0;
}