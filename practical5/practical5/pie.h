#ifndef PIE_H
#define PIE_H
#include <string>
#include <ostream>

class Pie {
public:
  Pie();
  Pie(const Pie &);
  virtual ~Pie(); // A virtual destructor is best practice for any class with polymorphism
                  // i.e. any class with virtual functions
  //virtual ~Pie() = default; // This form would use the implementation defined by the compiler
                              // Saves effort if you do not have any special desctrucutor requirements

  virtual std::string description() const = 0; // description is abstract therefore Pie is abstract.
                                               // since description does not change the object,
                                               // it should be const
  virtual std::string tastiness() const;
};

std::ostream& operator<<(std::ostream &out, const Pie &pie); // Use pass-by-reference as we do not need a copy,
                                                             // and use const since we do not want to modify pie.

#endif // PIE_H
