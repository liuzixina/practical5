#ifndef APPLEPIE_H
#define APPLEPIE_H
#include "pie.h"

class ApplePie : public Pie // don't forget to specify 'public' for the inheritance
{
public:
  ApplePie();
  ApplePie(const ApplePie &);
  ~ApplePie() override;
  virtual std::string description() const override; // when overriding a virtual function, should incude 'override'
                                                    // for protection, the compiler will perform additional checks
                                                    // specifying virtual at the beginning is optional.
  std::string tastiness() const override;
};

#endif // APPLEPIE_H
