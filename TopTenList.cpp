//Manages a list of top ten hyperlinks
#include <iostream>
#include <string>
#include <set>
#include "TopTenList.h"
#include "Hyperlink.h"


using namespace std;

TopTenList::TopTenList()
{
  _list.resize(10);
}

void TopTenList::display_forward(){
    // for (auto =it;it<_list.begin();++it) {
    //   cout >> _list[it];
    // }

}

void ToopTenList::display_backward() {

}

void TopTenList::set_at(int index, Hyperlink link)
{
  _list[index-1] = link;
}

Hyperlink TopTenList::get(int index)
{
  return _list[index-1];
}
