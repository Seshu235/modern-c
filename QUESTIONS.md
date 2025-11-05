# C Programming Interview Questions - Entry Level to Expert

## Entry Level

### Basic Syntax and Concepts
1. What is C programming language and what are its main features?
2. What is the difference between `printf()` and `scanf()`?
3. What are data types in C? List all primitive data types.
4. What is the difference between `int` and `float`?
5. What are escape sequences? Give examples.
6. What is the purpose of the `main()` function?
7. What are keywords in C? Can you name some?
8. What is the difference between `'a'` and `"a"`?
9. What are variables and how do you declare them?
10. What is the purpose of the semicolon in C?

### Operators
11. What are the different types of operators in C?
12. What is the difference between `++i` and `i++`?
13. What is the difference between `=` and `==`?
14. What are logical operators? How do they work?
15. What is the ternary operator? Provide its syntax.
16. What is operator precedence and associativity?
17. What is the difference between `&` and `&&`?
18. What is the modulo operator and when is it used?

### Control Structures
19. What is the difference between `if-else` and `switch-case`?
20. What are loops in C? Name all types.
21. What is the difference between `while` and `do-while` loops?
22. What is an infinite loop? How can you create one?
23. What is the purpose of `break` and `continue` statements?
24. Can you use multiple conditions in a `for` loop?
25. What is a nested loop?

### Functions
26. What is a function in C?
27. What is the difference between function declaration and definition?
28. What are actual and formal parameters?
29. What is function prototyping?
30. What does `void` mean in function declaration?
31. Can a function return multiple values?
32. What is recursion?
33. What is the difference between call by value and call by reference?

## Intermediate Level

### Arrays and Strings
34. What is an array? How do you declare it?
35. What is the difference between an array and a pointer?
36. How are strings stored in C?
37. What is the difference between `char str[] = "hello"` and `char *str = "hello"`?
38. How do you find the length of an array?
39. What are multidimensional arrays?
40. How do you pass an array to a function?
41. What is array decay?
42. What are the common string manipulation functions?
43. Why doesn't C have a built-in string type?

### Pointers
44. What is a pointer?
45. What is the difference between `*` and `&` operators?
46. What is a null pointer?
47. What is a void pointer?
48. What is a dangling pointer?
49. What is a wild pointer?
50. What is pointer arithmetic?
51. What are pointer-to-pointer (double pointers)?
52. What is the difference between `char *p` and `char p[]`?
53. Can we perform arithmetic operations on void pointers?
54. What is a function pointer?
55. How do you pass a pointer to a function?

### Structures and Unions
56. What is a structure in C?
57. What is the difference between structure and union?
58. How do you access structure members?
59. What is the `->` operator?
60. What is a nested structure?
61. Can structures contain pointers to the same structure type?
62. What is structure padding and alignment?
63. How do you pass structures to functions?
64. What is the `typedef` keyword?
65. What is the size of an empty structure?

### Memory Management
66. What is dynamic memory allocation?
67. What are `malloc()`, `calloc()`, `realloc()`, and `free()`?
68. What is the difference between `malloc()` and `calloc()`?
69. What happens if you forget to call `free()`?
70. What is a memory leak?
71. What is the difference between stack and heap memory?
72. What is memory fragmentation?
73. Can you resize memory allocated by `malloc()`?

### Preprocessor Directives
74. What is a preprocessor directive?
75. What is the difference between `#include <file>` and `#include "file"`?
76. What are macros? How are they different from functions?
77. What is conditional compilation?
78. What are `#ifdef`, `#ifndef`, `#endif`?
79. What is the `#define` directive?
80. What are predefined macros in C?
81. What is the difference between macro and const?

## Advanced Level

### Advanced Pointers
82. What is the difference between `const char *p`, `char * const p`, and `const char * const p`?
83. How do you create an array of function pointers?
84. What are callback functions?
85. How do you return a pointer from a function safely?
86. What is pointer aliasing?
87. What are restrict pointers?
88. Explain near, far, and huge pointers.
89. What is a pointer to an array versus an array of pointers?

### Storage Classes
90. What are storage classes in C?
91. What is the difference between `auto`, `static`, `extern`, and `register`?
92. What is the scope and lifetime of `static` variables?
93. What does `extern` do?
94. When should you use `register` keyword?
95. What is static function?
96. What is the default storage class for local and global variables?

### Advanced Memory Concepts
97. What is segmentation fault?
98. What is stack overflow?
99. What is buffer overflow?
100. How does memory alignment work?
101. What is cache-friendly code?
102. What is memory-mapped I/O?
103. What is the difference between shallow copy and deep copy?

### File Handling
104. How do you open and close a file in C?
105. What are different file opening modes?
106. What is the difference between `fopen()` and `open()`?
107. How do you check for end of file?
108. What are `fseek()`, `ftell()`, and `rewind()`?
109. What is the difference between text and binary file modes?
110. How do you handle file errors?
111. What is buffering in file operations?

### Bitwise Operations
112. What are bitwise operators?
113. How do you set, clear, and toggle a bit?
114. What is bit masking?
115. How do you check if a number is a power of 2 using bitwise operators?
116. What is the difference between `<<` and `>>`?
117. How do you swap two numbers without using a third variable?
118. What are bit fields in structures?

### Advanced Data Structures
119. How do you implement a linked list in C?
120. What is the difference between singly and doubly linked lists?
121. How do you detect a loop in a linked list?
122. How do you implement a stack using arrays?
123. How do you implement a queue?
124. What is a circular queue?
125. How do you implement a binary tree?
126. What is a hash table?

## Expert Level

### Compiler and Linking
127. What are the stages of compilation?
128. What is the difference between compilation and linking?
129. What are static and dynamic libraries?
130. What is name mangling?
131. What is the difference between `.a` and `.so` files?
132. What are object files?
133. How does the linker resolve symbols?
134. What is position-independent code (PIC)?

### Optimization and Performance
135. What is inline function? How is it different from macro?
136. What is loop unrolling?
137. How does compiler optimization work?
138. What is tail recursion?
139. What are volatile variables?
140. What is branch prediction?
141. How do you optimize memory usage in C?
142. What is cache locality and why does it matter?
143. What are compiler optimization flags?

### Advanced Language Features
144. What is variable-length array (VLA)?
145. What are flexible array members?
146. What is the `restrict` keyword?
147. What is `_Bool` type?
148. What are compound literals?
149. What is designated initialization?
150. What are inline functions in C99?
151. What is `static_assert`?

### Multi-threading and Concurrency
152. How do you create threads in C?
153. What are mutexes and semaphores?
154. What is a race condition?
155. What is deadlock? How do you prevent it?
156. What are atomic operations?
157. What is thread-local storage?
158. What is the difference between process and thread?
159. What are condition variables?

### System Programming
160. What are system calls?
161. What is the difference between library function and system call?
162. How does `fork()` work?
163. What are signals in Unix/Linux?
164. What is inter-process communication (IPC)?
165. What are pipes and named pipes?
166. What is shared memory?
167. What is memory mapping with `mmap()`?

### Undefined Behavior and Standards
168. What is undefined behavior in C?
169. What is sequence point?
170. What is the difference between C89, C99, C11, and C18 standards?
171. What happens when you access an array out of bounds?
172. What is strict aliasing rule?
173. What is implementation-defined behavior?
174. What is unspecified behavior?

### Advanced Debugging and Best Practices
175. How do you debug memory leaks?
176. What tools can you use for memory debugging (valgrind, etc.)?
177. What is code profiling?
178. What are common security vulnerabilities in C?
179. How do you prevent buffer overflow attacks?
180. What is defensive programming?
181. What are coding standards (MISRA C, etc.)?
182. How do you write portable C code?

### Complex Scenarios
183. How do you implement your own `malloc()`?
184. How would you design a memory allocator?
185. Explain how `setjmp()` and `longjmp()` work.
186. How do you implement exception handling in C?
187. How do you write a C program that modifies itself?
188. How do you create a state machine in C?
189. How would you implement polymorphism in C?
190. How do you handle errors without exceptions?

### Architecture and Low-Level Programming
191. What is endianness? How do you check for it?
192. What is structure packing pragma?
193. How do you write interrupt handlers in C?
194. What is the difference between embedded C and standard C?
195. How do you access hardware registers in C?
196. What is a watchdog timer?
197. How do you write bootloader code?
198. What are calling conventions?
199. What is stack frame?
200. How does function call work at assembly level?