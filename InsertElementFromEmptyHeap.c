#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int size;
    int max_size;
    int *array;
} heap;

#define INIT_HEAP_SIZE 11

static heap *heap_init() {
    heap *h = calloc(1, sizeof(heap));

    h->max_size = INIT_HEAP_SIZE;
    h->array = calloc(h->max_size, sizeof(int));

    return h;
}

static void heap_destroy(heap *h) {
    free(h->array);
    free(h);
}

static void heap_grow(heap *h) {
    h->max_size *= 2;
    h->array = realloc( h->array, h->max_size * sizeof(int) );
}

static void heap_insert(heap* h, int key) {
    if (h->size >= h->max_size) {
        heap_grow(h);
    }

    int new = h->size;
    h->size++;

    h->array[new] = key;

    int parent = (new-1)/2;
    while( new != 0 && h->array[parent] < key ) {
        h->array[new] = h->array[parent];
        h->array[parent] = key;

        new = parent;
        parent = (new-1)/2;
    }

    return;
}

int main(void) {
    heap *h = heap_init();

    heap_insert(h, 2);
    heap_insert(h, 7);
    heap_insert(h, 15);
    heap_insert(h, 21);
    heap_insert(h, 4);
    heap_insert(h, 6);
    heap_insert(h, 7);
    heap_insert(h, 3);
    heap_insert(h, 1);
    heap_insert(h, 13);
    heap_insert(h, 17);

    for( int i = 0; i < h->size; i++ ) {
        printf("%d: %d\n", i, h->array[i]);
    }

    heap_destroy(h);
}
