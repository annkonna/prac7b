Pointer Arithmetic to query data structures Practice
===

In this practice, you will implement a function to return 
a column value from the Employee data structure based on another
column's value. 

Requirements
---

You must implement the `get_salary()` function in `empquery.c`.  This
function will be passed a 'void *' named 'data' that contains
the Employee data structure and a second parameter of type long that
has an Employee ID. The function should return the salary of the
Employee ID identified by the second parameter.

The format of the data structure that stores the details of a particular
employee is as follows:

| long | char[50] | char[50] | char[50] | char[50] | long |

The structure above is repeated for each row in the data structure. End of data
is indicated by an Employee_id value of 0. 


Building, Running, and Testing
---

The command `make` will build a binary called `empquery` that you can
run using the command:

./empquery < employees.txt

If your function works correctly, the program would output a message
indicating the salary of the employee with employee id <employee id>
is <salary>.


Hints
---
Notice that each record in the data structure has the exact same number
of bytes and that number can be calculated by adding the number of bytes
taken up by each of the 6 columns. This information can be used
to traverse through the data structure's employee_id columns. Also, the
offset from the start of the record where the salary column is located
can be calculated by adding the number of bytes in the columns 1 thru 5. 

Remember that pointer math on a `void *` pointer is in terms of _bytes_,
while many data types (such as `size_t`!) are larger than one byte.  You
can add increments of `sizeof(type)` to adjust a `void` pointer by the
size of another type.

Pointer casting works like casting of any other type.  For example:

```C
int readptr(void *ptr) {
    return *(int *)ptr;
}
```

This function accepts a `void` pointer argument, but interprets the data
stored at the pointer as an `int` pointer.  A `void` pointer _cannot be
directly dereferenced_, you will _have_ to cast it in order to read the
data to which it points.

