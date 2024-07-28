#include <iostream>
#include "iomanip"


char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);


int main() {

    char player;
    char computer;

    player = getUserChoice();
    std::cout << "Your Choice: ";
    showChoice(player);

    computer = getComputerChoice();
    std::cout << "Computer's Choice: ";
    showChoice(computer);

    chooseWinner(player, computer);

    return 0;
}

char getUserChoice(){

    char player;
    std::cout << " ";
    std::cout << "\t\t ROCK - PAPER - SCISSORS GAME! \t\t\n";
    std::cout << " ";

    do{
        std::cout << "Choose one of these . . . ->  \n";
        std::cout << "--------------------------\n";
        std::cout << "'R' or 'r' for ROCK \n";
        std::cout << "'P' or 'p' for PAPER \n";
        std::cout << "'S' or 's' for SCISSORS \n";
        std::cin >> player;

    } while(player != 'r' && player != 'p' && player != 's');


    return player;

}
char getComputerChoice(){

    int number = rand() % 3 + 1;

    switch(number){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }
    return 0;
}
void showChoice(char choice){

    switch (choice) {
        case 'r': std::cout << "ROCK\n";
            break;
        case 'p': std::cout <<"PAPER \n";
            break;
        case 's': std::cout << "SCISSORS \n";
            break;

    }
}
void chooseWinner(char player, char computer){

    switch (player) {
        case 'r': if(computer == 'r'){
            std::cout << "It is a tie! \n";
        } else if (computer == 'p'){
            std::cout << "You lose! \n";
        } else {
            std::cout << "You win! \n";
        }
            break;
        case 'p': if(computer == 'r'){
                std::cout << "You win! \n";
            } else if (computer == 'p'){
                std::cout << "It is a tie! \n";
            } else {
                std::cout << "You loose! \n";
            }
            break;
        case 's': if(computer == 'r'){
                std::cout << "You loose! \n";
            } else if (computer == 'p'){
                std::cout << "You win! \n";
            } else {
                std::cout << "It is a tie! \n";
            }
            break;
    }
}
