#ifndef GSTACK_H
#define GSTACK_H

/* This is C implementation of a generic stack data type. 
 * The stack is implemented using a dynamically allocated array.
 * When we push an element, we store the element in a dynamically
 * allocate memory, and we push the address of this space.
 * When we pop the address of an element.
 */
typedef struct
{
    /* The base points to an array of pointers pointing to the
     * elements storing the data
     */
    void* base;

    /* Allocated space
     */
    int ASize;

    /* The length of the stack
     */
    int LSize;
} GStack;
void stackNew(GStack *);
void stackDispose(GStack *);
void stackPush(GStack *, void *);
void *stackPop(GStack *);

#endif // GSTACK_H
