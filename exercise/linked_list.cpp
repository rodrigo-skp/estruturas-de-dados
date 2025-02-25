#include "../include/linked_list.hpp"

int main(int argc, char const* argv[]) {

  LinkedList<int> lista;

  lista.push_front(10);
  lista.push_front(20);
  lista.push_front(30);
  lista.push_front(40);
  lista.pop_front();
  lista.insert(1, 100);
  lista.print();

}
