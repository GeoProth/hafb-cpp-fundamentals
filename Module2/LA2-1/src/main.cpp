#include <iostream>
#include <string> // for string objects
//using namespace std;

/**
 * @brief Shows how to define and use a string object
 *
 * We will define string variables and then see what operators and
 * functions work with these variables.
 *
 * @return int 0 means function exited with success
 */
int main() {
  // create a variable of type string
  std::string name = "Weber Waldo";

  // print it out
  std::cout << name << std::endl;

  // get a string from a user
  std::cout << "Enter your full name: " << std::endl;
  // add two strings together
  getline(std::cin, name); //gets a full string from user with spaces
  std::cout << "Hi: " << name << std::endl;

  // add two strings together
  std::string title = "Dr. ";
  std::string formal;
  formal = title + name;
  std::cout << "Hi: " << formal << std::endl;

  // how long is the string
  std::cout << "The length of name is " << name.size() << std::endl;
  std::cout << "The size of title is " << title.size() << std::endl;
  std::cout << "The length of title is " << title.length() << std::endl;
  std::cout << "The length of formal is "<< formal.length() << std::endl;

  // use [] to get an individual character
  std::cout << "The first character of name is " << name[0] << std::endl;
  std::cout << "The third character of name is " << name[2] << std::endl;

  // get name and commute information from a user
  int minutes, miles;
  std::cout << "Enter your full name: " << std::endl;
  getline(std::cin, name);
  std::cout << "How long is your commute in minutes?: ";
  std::cin >> minutes;
  std::cout << "How many miles is your commute?: ";
  std::cin >> miles;
  std::cout << name << " has a " << minutes << " Minute, and " << miles << " mile commute" << std::endl;
  // the string function find
  std::string story = "the dragons are flying over the mountains. They are hunting for a place to settle for the waldo night.   What they see is endless horizon.";
  std::cout << "Waldo is at letter position: " << story.find("waldo") << " in the story string" << std::endl;
  // the string function replace

  std::cout << story << std::endl;
  std::string nick = "waldo";
  std::string new_nic = "jarold's mom";
  story.replace(story.find(nick), nick.size(), new_nic); // replace waldo with xxxxx

  std::cout << story << std::endl;

  return 0;
}

/*
      "The dragons are flying over the mountains. They are hunting for a "
      "place to settle for the waldo night. What they see is endless horizon."
*/
