/*Illustration of Rock Paper Scissors Lizard Spock*/

#include <stdlib.h>
#include <ctime>
#include <cstdio>
#include <iostream>
int main() {
	int t;
	std::cout << "How many times do you want to play this Game: ";
	std::cin >> t;
	while(t != 0) {
		srand(time(NULL));
  int computer = rand() % 3 + 1;
  int user ;

  std::cout << "====================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "====================\n";

  std::cout << "1) " << "\U0000270A" << " Rock\n";
  std::cout << "2) " << "\U0001F91A" << " Paper\n";
  std::cout << "3) " << "\U0000270C" << " Scissors";

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
  else
  std::cout << "GO Home";
   --t;
   system("PAUSE");
   system("cls");
	}
}
