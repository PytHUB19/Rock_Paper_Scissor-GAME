#include <iostream>
#include <string>
using namespace std;

void start() {
    cout << "************Rock, Paper, Scissor GAME********************\n";
    cout << "*********************************************************\n";

}
void body(char player, char computer) {
    
    switch (player) {
    case 'r': cout << "Your choice= ROCK\n";
        break;
    case 'p': cout << "Your choice= PAPER\n";
        break;
    case 's':  cout << "Your choice= SCISSOR\n";
        break;

    }
    srand(time(0));
    int num = rand()%3 + 1;
    switch (num) {
    case 1: computer = 'r'; cout << "computer choice= ROCK\n";
        break;
    case 2: computer = 'p'; cout << "Computer choice= PAPER\n";
        break;
    case 3: computer = 's'; cout << "Computer choice= SCISSOR\n";
        break;

    }

    if (player == computer) { cout << "Its a tie!"; }
    else if (player == 'r' && computer =='s') { cout << "You Win!"; }
    else if (player == 'p' && computer == 'r') { cout << "You Win!"; }
    else if (player == 's' && computer == 'p') { cout << "You Win!"; }
    else { cout << "You Lose"; }
}

int main() {
    start();
    char player; char computer = 'c'; int m = 0;
    while (true) {
        cout << "Enter your choice: ('r' for rock, 's' for scissor, and 'p' for paper)\n";
        cin >> player;
        body(player, computer);
        cout << "\n***************************************************************************\n";
        cout << "Enter '1' to play again(or Enter '0' to exit): ";
        cin >> m;
        if (m != 1) {
            cout << "\nThanks for playing our game!";
            cout << "\n***************************************************************************\n";
            break;
           
        }
        
    }


    return 0;
}
