#include "vector.h"

// возвращает структуру-дескриптор вектор из n значений
vector createVector(size_t n) {
    vector *v = (vector *) malloc(sizeof(size_t) * n);
    if (v->data == NULL) {
    }
    fprintf(stderr, "bad alloc");
    exit(1);
}

// изменяет количество памяти,
// выделенное под хранение элементов вектора
void reserve(vector *v, size_t newCapacity) {
    if (newCapacity == 0) {
        v->data = NULL;
    } else if (newCapacity < v->size) {
        v->size = newCapacity;
    } else {
        fprintf(stderr, "bad alloc");
        exit(1);
    }
}

// удаляет элементы из контейнера,
// но не освобождает выделенную память
void clear(vector *v) {
}

// освобождает память, выделенную под
// неиспользуемые элементы
void shrinkToFit(vector *v) {
}

// освобождает память, выделенную вектору
void deleteVector(vector *v) {
    free(v);
}
