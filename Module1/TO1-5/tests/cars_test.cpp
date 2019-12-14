#include "cars.h"
// this tells catch to provide a main()
// only do this in one cpp file
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

TEST_CASE("Getting Lamborghini's horse power", "[TO1-5]") 
{
  INFO("TO Activity 3 Points");
  // Arrange
  int hp = 0;
  // Act
  hp = lamborghini::HorsePower();
  // Assert
  REQUIRE(hp == 759);
}

TEST_CASE("Getting Porshe's horse power", "[TO1-5]") 
{
  INFO("TO Activity 3 Points");
  // Arrange
  int hp = 0;
  // Act
  hp = porshe::HorsePower();
  // Assert
  REQUIRE(hp == 700);
}

TEST_CASE("Getting a sedan's horse power", "[TO1-5]") 
{
  INFO("TO Activity 3 Points");
  // Arrange
  int hp = 0;
  // Act
  hp = HorsePower();
  // Assert
  REQUIRE(hp == 120);
}