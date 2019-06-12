#ifndef SHOPPING_H_
#define SHOPPING_H_

#include <vector>
#include "./goods.h"

// Shopping class presents List of shopping.
// Example:
//     Shopping tobuylist;
//     Goods obj1;
//     Goods obj2;
//     ...
//     tobuylist.PushList(obj1);
//     tobuylist.PushList(obj2);
//     tobuylist.PrintList();
class Shopping{
 public:
  Shopping();
  ~Shopping();
 
  bool Empty() const;  //it should be checked before call GetLastElement.
  void PushList(const Goods& object);
  const Goods& GetLastElement() const;
  void PrintList() const;
  void SortByPrice() const;
  void SortByIndex() const;

 private:
  std::vector<Goods> shopping_list_;
};

#endif  // SHOPPING_H_
