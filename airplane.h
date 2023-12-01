#ifndef INHERITANCEANDOOD_AIRPLANE_H_
#define INHERITANCEANDOOD_AIRPLANE_H_

enum Airport { LAX, SFO, SJC };

class Airplane {
public:
  virtual void fly(const Airport &destination) = 0;

protected:
  void defaultFly(const Airport &destination);
};

#endif // INHERITANCEANDOOD_AIRPLANE_H_