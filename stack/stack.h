#ifndef STACK_H
#define STACK_H

/* This is C implementation of a stack data type containing integers
 * The stack is implemented using a dynamically allocated array.
 */
typedef struct
{
    /* The poiter to the base of the stack
     * A new element will be insterted at base + LSize location.
     * A pop will return the element from base + LSize - 1
     */
    int* base;

    /* The logical size of the stack.
     * It is intialized to 0 and increses on push.
     * It decreses on pop
     */
    int LSize;

    /* The allocated size.
     * It is doubled when top = Asize and an insertion happens.
     */
    int ASize;
} stack;

/* The stack constructor. Pass a pointer to the stack structure
 * and this function will intialize the variables properly.
 */
void stackNew(stack *);

/* The stack destructor. Pass a pointer to the stack structure and
 * this function will free the space occupied.
 */
void stackDispose(stack *);

/* The push operation
 */
void stackPush(stack *, int);

/* The pop operation
 */
int stackPop(stack *);

#endif // STACK_H
