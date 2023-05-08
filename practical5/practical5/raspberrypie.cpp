#include "raspberrypie.h"
#include <iostream>

RaspberryPie::RaspberryPie()
{
  std::cout << "Creating RaspberryPie" << std::endl;
}

RaspberryPie::RaspberryPie(const RaspberryPie &) : RaspberryPie{}
{
  std::cout << "Copying ApplePie" << std::endl;
}

RaspberryPie::~RaspberryPie() {
  std::cout << "Destroying RaspberryPie" << std::endl;
}
std::string RaspberryPie::description() const {
  return "Raspberry Pie";
}

std::string RaspberryPie::tastiness() const {
  return "**   ";
}
