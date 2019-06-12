#include <iostream>
#include <algorithm>
#include "./shopping.h"


Shopping::Shopping()
{
}

Shopping::~Shopping()
{
}

bool Empty() const {
 return shopping_list_.empty(); 
}

// Push Goods object to shopping_list_ vector
void Shopping::PushList(const Goods& object) {
  shopping_list_.push_back(object);
}

// Get Goods object from end of shopping_list_ vector
const Goods& Shopping::GetLastElement() const{
  return shopping_list_.back();
}

// Print shopping_list_ Elements
void Shopping::PrintList() const {
  for (auto i = shopping_list_.begin();
      i != shopping_list_.end(); i++) {
    std::cout << "Goods #" << i->GetIndex() << " - Price : " <<
    i->GetPrice() << std::endl;
  }
}

// Sort shopping_list_ Elements by Price
// Apply Selection Sort algorithm
void Shopping::SortByPrice() const {
  std::sort(shopping_list_.begin(), shopping_list_.end(), [](const Goods& a, const Goods& b) {
    return a.GetPrice() < b.GetPrice();
  });
}

// Sort shopping_list_ Elements by Index
// Apply Selection Sort algorithm
void Shopping::SortByIndex() {
  std::sort(shopping_list_.begin(), shopping_list_.end(), [](const Goods& a, const Goods& b) {
    return a.GetIndex() < b.GetIndex();
  });

}
