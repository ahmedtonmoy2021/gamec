#include <iostream>
#include <stdlib.h>
#include <time.h>
 

char getUserChoice() ;
int getComputerChoice() ;
void showChoice(char choice) ;
void choosewinner(char player, char computer) ;
    
int main() 
{
    char player;
    char computer;
    player = getUserChoice();
    std::cout<<"you chose "; 
    showChoice(player);


    computer = getComputerChoice();
    std::cout<<"The computer chose ";
    showChoice(computer);

    choosewinner(player, computer);
   
    return 0;
}

char getUserChoice(){
    char player;
    std::cout << "Rock, Paper, or Scissors Game" << std::endl;
    std::cout << "********************************" << std::endl;
    std::cout << "r for rock" << std::endl;
    std::cout << "p for paper" << std::endl;
    std::cout << "s for scissors" << std::endl;
    std::cin >> player;
    if (player != 'r' && player != 'p' && player!='s')
    {
       std::cout << "Invalid input" << std::endl;
       return getUserChoice();
    }
    
    return player;

} ;
int getComputerChoice(){
    srand(time(0));
    int num = rand() % 3 + 1;
    
    switch (num)
    {
    case 1: return 'r';
        break;
    case 2: return 'p';
        break;
    case 3: return 's';
        break;
    
    default:
        break;
    }
    return 0;

} ;
void showChoice(char choice){
    switch (choice)
    {
    case 'r':
        std::cout << "Rock" << std::endl;
        break;
    case 'p':
        std::cout << "Paper" << std::endl;
        break;
    case 's':
        std::cout << "Scissors" << std::endl;
        break;
    
    default:
        break;
    }
} ;
void choosewinner(char player, char computer){
    switch (player)
    {
    case 'r': if(computer == 'r') std::cout << "Tie" << std::endl;
              else if(computer == 'p') std::cout << "Computer wins" << std::endl;
              else std::cout << "You win" << std::endl;
        break;
    case 'p': if(computer == 'r') std::cout << "You win" << std::endl;
              else if(computer == 'p') std::cout << "Tie" << std::endl;
              else std::cout << "Computer wins" << std::endl;
        break;
    case 's': if(computer == 'r') std::cout << "Computer wins" << std::endl;
              else if(computer == 'p') std::cout << "You win" << std::endl;
              else std::cout << "Tie" << std::endl;
        break;
    
    default:
        break;
    }
} ;