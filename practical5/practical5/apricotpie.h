#ifndef APRICOTPIE_H
#define APRICOTPIE_H
#include "pie.h"

class ApricotPie : public Pie {
public:
  ApricotPie();
  ApricotPie(const ApricotPie &);
  ~ApricotPie() override;
  std::string description() const override; // see comments in applepie.h
  std::string tastiness() const override;
};

#endif // APRICOTPIE_H
