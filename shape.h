#ifndef INHERITANCEANDOOD_SHAPE_H_
#define INHERITANCEANDOOD_SHAPE_H_

#include <string>

class Shape {
public:
  // Pure virtual finctions are that they must be redeclared by any concrete
  // class that inherits them, and they typically have no definition in abstract
  // classes.
  virtual void draw() const = 0;
  // Simple virtual functions provide an implementation that derived classes may
  // override.
  virtual void error(const std::string &msg);

  int objectID() const;
};

#endif // INHERITANCEANDOOD_SHAPE_H_