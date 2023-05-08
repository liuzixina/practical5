#include "applepie.h"
#include <iostream>

ApplePie::ApplePie()
{
  std::cout << "Creating ApplePie" << std::endl;
}

ApplePie::ApplePie(const ApplePie &) : ApplePie{}
{
  std::cout << "Copying ApplePie" << std::endl;
}

ApplePie::~ApplePie() {
  std::cout << "Destroying ApplePie" << std::endl;
}

std::string ApplePie::description() const {
  return "Apple Pie";
}

std::string ApplePie::tastiness() const {
  return "*****";
}
