#include "apricotpie.h"
#include <iostream>

ApricotPie::ApricotPie()
{
  std::cout << "Creating ApricotPie" << std::endl;
}

ApricotPie::ApricotPie(const ApricotPie &) : ApricotPie{}
{
  std::cout << "Copying ApricotPie" << std::endl;
}

ApricotPie::~ApricotPie() {
  std::cout << "Destroying ApricotPie" << std::endl;
}

std::string ApricotPie::description() const {
  return "Apricot Pie";
}

std::string ApricotPie::tastiness() const {
  return "***  ";
}
