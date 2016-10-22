
/* === fib === */
/* Compute the nth Fibonacci number, where
 * the 0th number is 0, the 1st is 1, and
 * each subsequent number is the sum of its
 * two predecessors.
 */
unsigned int fib(unsigned int n);

/* === fact === */
/* Compute n factorial. */
unsigned int fact(unsigned int n);

/* === int_new === */ 
/* Allocate space for an int on the heap,
 * initialize it with given value, 
 * and return a pointer to it.
 */
int *int_new(int init);

/* === upto === */
/* Build an array from 0 up to n,
 * inclusive of both upper and lower bounds.
 */
unsigned int *upto(unsigned int n);

/* === num_evens === 
 * Count the even numbers in the given array.
 */
unsigned int num_evens(unsigned int *a, unsigned int len);
