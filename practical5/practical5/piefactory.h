#ifndef PIEFACTORY_H
#define PIEFACTORY_H
#include "applepie.h"
#include "apricotpie.h"
#include "raspberrypie.h"
#include <string>
#include <memory>

class PieFactory {
public:
  PieFactory();
  ApplePie createApplePie() const;
  ApricotPie createApricotPie() const;
  RaspberryPie createRaspberryPie() const;
  Pie* makePie(const std::string &type) const;
  std::unique_ptr<Pie> makePieUnique(const std::string &type) const;
  std::shared_ptr<Pie> makePieShared(const std::string &type) const;

private:
  std::string toLower(const std::string &type) const;
};

#endif // PIEFACTORY_H
