#ifndef RASPBERRYPIE_H
#define RASPBERRYPIE_H
#include "pie.h"

class RaspberryPie : public Pie
{
public:
  RaspberryPie();
  RaspberryPie(const RaspberryPie &);
  ~RaspberryPie() override;
  std::string description() const override; // see comments in 'applepie.h'
  std::string tastiness() const override;
};

#endif // RASPBERRYPIE_H
