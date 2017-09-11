/*
 Patrick Tate
 1411-004
 Rock Paper Scissors Game
 Lab Partner: Paul
 */

#include <iostream>

using namespace std;

int main()
{
    //variables to holder R/P/S for each user and the choice to continue or end the game
    char user1Choice, user2Choice, playAgain;
    
    //making sure the program runs at least once
    do {
        cout << "Welcome to the rock, paper, scissors game.\n";
        cout << "Rules of the game: rock beats scissors, paper beats rock, and scissors beats paper.\n";
        cout << "Ready to play? Enter Y or y to start the game. Enter 'N' or 'n' to end program.\n";
        cin  >> playAgain;
        if ((playAgain == 'N') || (playAgain == 'n')) {
            return 0;
        }
        
        //set the game up and explain the rules
        cout << endl << "Rules of the game: enter 'S' or 's' for scissors\n";
        cout << "\t\t\t" << "     " << ": enter 'R' or 'r' for rock\n";
        cout << "\t\t\t" << "     " << ": enter 'P' or 'P' for paper\n";
        cout << endl << "Player 1, please enter your choice.\n";
        cin  >> user1Choice;
        //keep each players choice consistent for logical comparisons
        user1Choice = toupper(user1Choice);
        
        //validate user 1 entry BUT DOESNT WORK YET!!!!!!!!!!!!!
        while (user1Choice != ('R' | 'P' | 'S')) {
            cout << "Please enter a valid value, R,P, or S\n\n";
            cin  >> user1Choice;
            toupper(user1Choice);
        }
        
        cout << "Now player 2 enter your choice\n";
        cin  >> user2Choice;
        //keeps each players choice consistent for logical comparisons
        user2Choice = toupper(user2Choice);
        
        
        switch (user2Choice) {
            case 'R' :
                if (user2Choice == user1Choice) {
                    cout << "It's a tie!\n\n";
                }
                else if (user1Choice == 'P'){
                    cout << "Player 1 wins! Congratulations!\n\n";
                }
                else if (user1Choice == 'S'){
                    cout << "Player 2 wins! Congratulations!\n\n";
                }
                break;
                
            case 'P' :
                if (user2Choice == user1Choice) {
                    cout << "It's a tie!\n\n";
                }
                else if (user1Choice == 'S'){
                    cout << "Player 1 wins! Congratulations!\n\n";
                }
                else if (user1Choice == 'R'){
                    cout << "Player 2 wins! Congratulations!\n\n";
                }
                break;
                
            case 'S' :
                if (user2Choice == user1Choice) {
                    cout << "It's a tie!\n\n";
                }
                else if (user1Choice == 'R'){
                    cout << "Player 1 wins! Congratulations!\n\n";
                }
                else if (user1Choice == 'P'){
                    cout << "Player 2 wins! Congratulations!\n\n";
                }
                break;
                
            default :
                cout << "Invalid entry, please enter a valid value\n" << endl;
        }
        
        cout << "Thank you for playing. Play again? Y or N" << endl;
        cin  >> playAgain;
        playAgain = toupper(playAgain);
        
        
    } while ((playAgain == 'y') || (playAgain == 'Y'));
    
    
    
    
    
    return 0;
}
