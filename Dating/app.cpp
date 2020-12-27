#include <iostream>
#include "profile.hpp"

int main() {

  Profile sam("Sagar Alwani", 19, "Rajasthan", "India", "he/him");
  sam.add_hobby("listening to audiobooks and podcasts");
  sam.add_hobby("Playing Guitar");
  sam.add_hobby("reading a speculative fiction novel");
  sam.add_hobby("Watching Tollywood movies.");
  sam.add_hobby("Watching Cartoons.");
  std::cout << sam.view_profile();

}
