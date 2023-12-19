/*  a shallow copy constructor creates a new object and copies the values of the members from the original object to the new one.
  However, if the object contains pointers, a shallow copy only copies the memory addresses of the pointed data, not the data itself
This means both the original and copied objects share the same dynamically allocated memory, leading to potential issues if one object modifies the shared data.

  
On the other hand, a deep copy constructor creates a new object and copies not only the values of the members but also duplicates the dynamically allocated memory pointed to by the pointers.
This ensures that the original and copied objects have their own separate copies of the data, preventing unintended side effects when one object modifies the data.



  In summary, the main difference lies in how they handle dynamically allocated memory and pointers. Shallow copy shares the same memory, while deep copy creates independent copies of the data

*/
