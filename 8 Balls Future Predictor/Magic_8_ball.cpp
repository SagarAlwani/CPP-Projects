#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>

int main() {
  std::srand(time(NULL));
  std::cout << "MAGIC 8-BALL: " << std::endl;

  int answer = std::rand() % 10;

  //std::cout << answer;

  if(answer == 0)
    std::cout << "It is certain." << std::endl;
  else if(answer == 1)
    std::cout << "Outlook good." << std::endl;
  else if(answer == 2)
    std::cout << "Better not tell you now." << std::endl;
  else if(answer == 3)
    std::cout << "Without a doubt." << std::endl;
  else if(answer == 4)
    std::cout << "Yes - definitely." << std::endl;
  else if(answer == 5)
    std::cout << "Concentrate and ask again." << std::endl;
  else if(answer == 6)
    std::cout << "Don't count on it." << std::endl;
   else if(answer == 7)
    std::cout << "As I see it, yes." << std::endl;
   else if(answer == 8)
    std::cout << "My sources say no." << std::endl;
  else
    std::cout << "Very doubtful." << std::endl;
  getch();
}
