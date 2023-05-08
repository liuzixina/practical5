#include "piefactory.h"
#include <algorithm>
#include <string>
#include <memory>

PieFactory::PieFactory() {
}

ApplePie PieFactory::createApplePie() const {
  return ApplePie{};
}

ApricotPie PieFactory::createApricotPie() const {
  return ApricotPie{};
}

RaspberryPie PieFactory::createRaspberryPie() const {
  return RaspberryPie{};
}

Pie* PieFactory::makePie(const std::string &type) const {
  std::string typeAsLower{toLower(type)};
  if (typeAsLower == "apple") {
	  return new ApplePie();
  }
  else if (typeAsLower == "apricot") {
    return new ApricotPie();
  }
  else if (typeAsLower == "raspberry") {
    return new RaspberryPie();
  }

  return nullptr;
}

std::unique_ptr<Pie> PieFactory::makePieUnique(const std::string &type) const {
  std::string typeAsLower{toLower(type)};
  
  // TODO

  return nullptr; // this will be implicitly wrapped in a unique_ptr object
//  return std::unique_ptr{}; // or you could make it explicit
}

std::shared_ptr<Pie> PieFactory::makePieShared(const std::string &type) const {
  std::string typeAsLower{toLower(type)};

  // TODO

  return nullptr; // this will be implicitly wrapped in a unique_ptr object
//  return std::shared_ptr{}; // or you could make it explicit
}

std::string PieFactory::toLower(const std::string &type) const {
  std::string typeAsLower{type};
  std::transform(typeAsLower.begin(), typeAsLower.end(), typeAsLower.begin(), ::tolower);
  return type;
}
