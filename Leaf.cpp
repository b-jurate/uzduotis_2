#include "Leaf.h"

Leaf::Leaf(const std::string &name, double price) : name(name), price(price) {}

void Leaf::showDetails() {
  std::cout<< name << " "<< price << "eur"<< std::endl;
}

double Leaf::getPrice() {
  return price;
}
