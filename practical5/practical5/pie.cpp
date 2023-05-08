#include "pie.h"
#include <iostream>

Pie::Pie()
{
  std::cout << "Creating Pie" << std::endl;
}

Pie::Pie(const Pie &) : Pie{}
{
  std::cout << "Copying Pie" << std::endl;
}

Pie::~Pie() {
  std::cout << "Destroying Pie" << std::endl;
}

std::string Pie::tastiness() const {
  return "-----";
}

std::ostream& operator<<(std::ostream &out, const Pie &pie) {
  return out << pie.description() << ", rating: " << pie.tastiness();
}
