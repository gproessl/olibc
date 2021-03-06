#ifndef OLIBC_LIST_H
#define OLIBC_LIST_H

#include <stdint.h>
#include <stdlib.h>

#include "iterator.h"

typedef struct list_t list_t;

/**
 * Creates a list.
 * The list created here needs to be dropped (@see drop).
 * @return the newly created list.
 */
list_t *list_new();

/**
 * Returns the size of a list.
 * @param this the list referenced.
 * @return the size of the list.
 *         returns 0 if the list is not initialized.
 */
size_t list_size(list_t *this);

/**
 * Appends an element to a list.
 * Appends an element at the end (offset list_size(this) - 1) of a list.
 * @param this the list referenced.
 * @param elem the element to be appended.
 */
void list_append(list_t *this, void *elem);

/**
 * Prepends an element to a list.
 * Prepends an element at the start (offset 0) of a list.
 * @param this the list referenced.
 * @param elem the element to be prepended.
 */
void list_prepend(list_t *this, void *elem);

/**
 * Retrieves an element from a list.
 * Retrieves an element at position i from a list.
 * @param this the list referenced.
 * @param i the offset starting from 0
 * @return the element at position i.
 *         0 if list_size(this) <= i or the list is not initialized.
 */
void *list_at(list_t *this, size_t i);

/**
 * Returns an iterator for a list
 * @see iterator
 * @param this the list referenced.
 * @return an iterator of a list.
 *         0 if the list is not initialized.
 */
void *list_iterator(list_t *this);

#endif
