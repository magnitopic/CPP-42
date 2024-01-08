What containers should be used for each exercise:

_ex00_ -> std::map

Values in this exercise are stored as a `key` `value` pair. Key for the date and value for the price.

_ex01_ -> std::stack

Values in this exercise are best stored as a stack of values. Since numbers are added to the stack and then used in order of addition.

_ex02_ -> std::vector && std::list

Since two algorithms are required for this exercise, two containers are needed.

For merge sort, a vector is best since it's efficient for random access and appending elements at the end.

For insertion sort, a list is best since it's efficient for insertions and deletions at both ends.
