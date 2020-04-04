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
    for (int i=0;i<(int)_list.size();i++) {
      cout << i << ": "<< _list[i].url << "\n";
    }

}

void TopTenList::display_backward() {
  int size = (int)_list.size()-1;
  for (int i=size; i>=0; i--) {
    cout << i << ": "<< _list[i].url << "\n";
  }

}

void TopTenList::set_at(int index, Hyperlink link)
{
  _list[index-1] = link;
}

Hyperlink TopTenList::get(int index)
{
  return _list[index-1];
}
