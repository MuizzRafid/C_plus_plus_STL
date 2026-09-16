// A std::vector::iterator is indeed a custom class (or struct) provided by the C++ Standard Library. Under the hood, it is designed using a software design pattern called the Iterator Pattern.

// Its main goal is to act as a wrapper around raw memory pointers, giving you a clean, consistent interface while managing container specifics behind the scenes.

// What Inside a Vector's Iterator Class Looks Like
// While every C++ compiler (GCC, Clang, MSVC) writes its internal library code a bit differently, conceptually a vector's iterator class looks like this:

template <typename T>
class VectorIterator
{
private:
  T *ptr; // 1. The actual raw memory pointer stored inside

public:
  // Constructor wrapping a raw memory address
  VectorIterator(T *p) : ptr(p) {}

  // 2. Overloading * (Dereference Operator)
  T &operator*()
  {
    return *ptr; // Returns the actual value at memory address
  }

  // 3. Overloading ++ (Pre-increment Operator)
  VectorIterator &operator++()
  {
    ptr++; // Advances raw pointer by sizeof(T)
    return *this;
  }

  // 4. Overloading != (Comparison Operator)
  bool operator!=(const VectorIterator &other) const
  {
    return ptr != other.ptr; // Compares memory addresses
  }
};
// When you call v.begin(), the vector creates and returns an instance of this class holding the address of v[0].

// Why C++ Uses a Class Wrapper Instead of Just Raw Pointers
// Even though a std::vector iterator could technically just be a raw pointer (T*), turning it into a custom class brings critical benefits:

// 1. Universal Interface Across Different Containers
// Different data structures organize memory differently:

// std::vector: Elements sit side-by-side in contiguous memory. Moving to the next element means adding 4 bytes (pointer arithmetic).

// std::list (Doubly Linked List): Elements are scattered around RAM. Moving to the next element requires reading node links: ptr = ptr->next.

// std::set (Red-Black Tree): Moving to the next element requires navigating parent, left, and right tree nodes.

// By wrapping these inside custom iterator classes, all of them use the exact same syntax (++it, *it, !=). You don't need to know how the container is built to traverse it.

// 2. Debugging and Safety Features
// In Debug mode, C++ standard libraries use special iterator classes to catch common runtime bugs before they crash your program:

// Out-of-bounds protection: Trying to dereference v.end() throws a clear runtime error instead of silently corrupting RAM.

// Iterator Invalidation Tracking: The iterator class can know if its parent vector reallocated memory or shrank, warning you if you use an outdated iterator.