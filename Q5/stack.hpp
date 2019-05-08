//
// Created by Vahid on 5/3/2019.
//

#ifndef STACK_HPP
#define STACK_HPP

#include "stack.h"

template <typename T>
Stack<T>::Stack(const Stack& stack) {
  if (stack.head)
    {
      head = new Node {*stack.head}; // Copy the top node of the original
      Node* oldNode {stack.head}; // Points to the top node of the original
      Node* newNode {head}; // Points to the node in the new stack
      while (oldNode = oldNode->next) // If next was nullptr, the last node was copied
        {
	  newNode->next = new Node{*oldNode}; // Duplicate it
	  newNode = newNode->next; // Move to the node just created
        }
    }
}

template<class T>
void Stack<T>::push(const T &item) {
  Node* node{new Node(item)};
  node->next = head;
  head = node;
}

template <typename T>
T Stack<T>::pop() {
  if (isEmpty()) // If it's empty
    throw std::logic_error {"Stack empty"}; // Pop is not valid so throw exception
  auto* next {head->next}; // Save pointer to the next node
  T item {head->item}; // Save the T value to return later
  delete head; // Delete the current head
  head = next; // Make head point to the next node
  return item; // Return the top object
}

template<class T>
bool Stack<T>::isEmpty() const{
  return head == nullptr;
}

template<class T>
int Stack<T>::getcount() const{
  size_t count{};
  Node* copy_head{head};
  while(copy_head != nullptr) {
    copy_head = copy_head->next;
    count++;
  }
  return count;
}

template <typename T>
Stack<T>::~Stack() {
  while (head)
    { // While current pointer is not null
      auto* next = head->next; // Get the pointer to the next
      delete head; // Delete the current head
      head = next; // Make head point to the next node
    }
}

#endif //Q5_STACK_HPP
