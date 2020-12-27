/*Illustration of Rock Paper Scissors Lizard Spock*/

#include <stdlib.h>
#include <ctime>
#include <iostream>
#include <stdio.h>
//#include <curses.h>
int main() {
  int t;
  std::cout << "How many times do you want to play this: ";
  std::cin >> t;
  while(t != 0) {
    srand(time(NULL));
  int computer = rand() % 5 + 1;
  int user ;

  std::cout << "====================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "====================\n";

  std::cout << "1) " << "\U0000270A" << " Rock\n";
  std::cout << "2) " << "\U0001F91A" << " Paper\n";
  std::cout << "3) " << "\U0000270C" << " Scissors\n";
  std::cout << "4) " << "\U0001F90F" << " Lizard\n";
  std::cout << "5) " << "\U0001F596" << " Spock\n";

  std::cout << "\nshoot! "; 

  std::cin >> user;
  
  if((user == 1) and (computer == 2)) {
    std::cout << "Computer: \U0001F91A" << " (Paper)\n";
    std::cout << "You: \U0000270A" << " (Rock)\n";
    std::cout << "Computer wins!! \U0001F648\n";
  }
  else if((user == 2) and (computer == 1)) {
    std::cout << "Computer: \U0000270A" << " (Rock)\n";
    std::cout << "User: \U0001F91A" << " (Paper)\n";
    std::cout << "You Win!! \U0001F607\n";
  }
  else if((user == 1) and (computer == 3)) {
    std::cout << "Computer: \U0000270C" << " (Scissors)\n";
    std::cout << "User: \U0000270A" << " (Rock)\n";
    std::cout << "You win!! \U0001F607\n";
  }
  else if((user == 3) and (computer == 1)) {
    std::cout << "User: \U0000270C" << " (Scissors)\n";
    std::cout << "Computer: \U0000270A" << " (Rock)\n";
    std::cout << "Computer Win!! \U0001F648\n";
  }
  else if((user == 2) and (computer == 3)) {
    std::cout << "Computer: \U0000270C" << " (Scissors)\n";
    std::cout << "User: \U0001F91A" << " (Paper)\n";
    std::cout << "Computer Win!! \U0001F648\n";  
  }
  else if((user == 3) and (computer == 2)) {
  	std::cout << "Computer: \U0001F91A" << " (Paper)\n";
    std::cout << "User: \U0000270C" << " (Scissors)\n";
    std::cout << "You win!! \U0001F607\n";
  }
  else if((user == 1) and (computer == 1)) {
  	std::cout << "Computer: \U0000270A" << " (Rock)\n";
  	std::cout << "You: \U0000270A" << " (Rock)\n";
	std::cout << "It's a Tie Breaker'!! \U0001F60D\n";
  }
  else if((user == 2) and (computer == 2)) {
  	std::cout << "Computer: \U0001F91A" << " (Paper)\n";
  	std::cout << "User: \U0001F91A" << " (Paper)\n";
  	std::cout << "It's a Tie Breaker'!! \U0001F60D\n";
  }
  else if((user == 3) and (computer == 3)) {
  	std::cout << "Computer: \U0000270C" << " (Scissors)\n";
  	std::cout << "User: \U0000270C" << " (Scissors)\n";
  	std::cout << "It's a Tie Breaker'!! \U0001F60D\n";
  }
  else if((user == 4) and (computer == 1)) {
    std::cout << "Computer: \U0000270A" << " (Rock)\n";
  	std::cout << "User: \U0001F90F" << " (Lizard)\n";
  	std::cout << "Computer Wins: Rock crushes Lizard!! \U0001F632\n";
  }
  else if((user == 1) and (computer == 4)) {
    std::cout << "Commputer: \U0001F90F" << " (Lizard)\n";
  	std::cout << "User: \U0000270A" << " (Rock)\n";
  	std::cout << "User Wins: Rock crushes Lizard!! \U0001F632\n";
  }
    else if((user == 1) and (computer == 5)) {
    std::cout << "Computer: \U0001F596" << " (Spock)\n";
    std::cout << "User: \U0000270A" << " (Rock)\n";
  	std::cout << "Computer Wins: Spock Vapourizes ROck!! \U00002668\n";
  }
  else if((user == 5) and (computer == 1)) {
    std::cout << "Computer: \U0000270A" << " (Rock)\n";
    std::cout << "User: \U0001F596" << " (Spock)\n";
  	std::cout << "User Wins: Spock Vapourizes Rock!! \U00002668\n";
  }
  else if((user == 2) and (computer == 4)) {
    std::cout << "Commputer: \U0001F90F" << " (Lizard)\n";
    std::cout << "User: \U0001F91A" << " (Paper)\n";
  	std::cout << "Computer Wins: Lizard Eats Paper!! \U0001F98E\n";
  }
   else if((user == 4) and (computer == 2)) {
   std::cout << "Computer: \U0001F91A" << " (Paper)\n";
   std::cout << "User: \U0001F90F" << " (Lizard)\n";
   std::cout << "user Wins: Lizard Eats Paper!! \U0001F98E\n";
  }
  else if((user == 2) and (computer == 5)) {
   std::cout << "Computer: \U0001F596" << " (Spock)\n";
   std::cout << "User: \U0001F91A" << " (Paper)\n";
   std::cout << "user Wins: Paper disproves spock!! \U0001F4DD\n"; 
  }
   else if((user == 5) and (computer == 2)) {
   std::cout << "Computer: \U0001F91A" << " (Paper)\n";
   std::cout << "User: \U0001F596" << " (Spock)\n";
   std::cout << "user Wins: Paper disproves spock!! \U0001F4DD\n";
  }
  else if((user == 3) and (computer == 5)) {
   std::cout << "Computer: \U0001F596" << " (Spock)\n";
   std::cout << "User: \U0000270C" << " (Scissors)\n";
   std::cout << "Computer Wins: Spock smashes scissors!!  \U0001F528\n";
  }
  else if((user == 5) and (computer == 3)) {
   std::cout << "Computer: \U0000270C" << " (Scissors)\n";
   std::cout << "User: \U0001F596" << " (Spock)\n";
   std::cout << "User Wins: Spock smashes scissors!!  \U0001F528\n";
  }
  else if((user == 3) and (computer == 4)) {
   std::cout << "Computer: \U0001F90F" << " (Lizard)\n";
   std::cout << "User: \U0000270C" << " (Scissors)\n";
   std::cout << "User Wins: Scissors depricates Lizard!!  \U0000270C\n";
  }
  else if((user == 4) and (computer == 3)) {
   std::cout << "User: \U0000270C" << " (Scissors)\n";
   std::cout << "Computer: \U0001F90F" << " (Lizard)\n";
   std::cout << "Computer Wins: Scissors depricates Lizard!!  \U0000270C\n";
  }
  else if((user == 4) and (computer == 5)) {
   std::cout << "Computer: \U0001F596" << " (Spock)\n";
   std::cout << "User: \U0001F90F" << " (Lizard)\n";
   std::cout << "Computer Wins: Spock smashes Lizard!!  \U0001F528\n";
  }
  else if((user == 5) and (computer == 4)) {
    std::cout << "Computer: \U0001F90F" << " (Lizard)\n";
   std::cout << "User: \U0001F596" << " (Spock)\n";
   std::cout << "User Wins: Spock smashes Lizard!!  \U0001F528\n"; 
   }
   else if((user == 4) and (computer == 4)) {
     std::cout << "Computer: \U0001F90F" << " (Lizard)\n";
     std::cout << "User: \U0001F90F" << " (Lizard)\n";
     std::cout << "It's a Tie Breaker'!! \U0001F60D\n";
   }
   else if((user == 5) and (computer == 5)) {
     std::cout << "Computer: \U0001F596" << " (Spock)\n";
     std::cout << "User: \U0001F596" << " (Spock)\n";
     std::cout << "It's a Tie Breaker'!! \U0001F60D\n";
   }
  else 
  std::cout << "GO Home";
 /* getch();
  system("clear");*/
  std::cout << std::endl;
  --t;
  }
}
