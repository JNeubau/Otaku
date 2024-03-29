#ifndef QUEUE_HPP
#define QUEUE_HPP

#include <stdio.h>
#include <stdlib.h>

struct part {
    int ts, src_id, cuchy;
    struct part *prev=nullptr;
    struct part *next=nullptr;
};

struct Queue {
    int size;
    struct part *head;
};

// tworzy kolejkę
struct Queue* create_queue();
// sprawdza czy lista jest pusta
bool is_empty(struct Queue *queue);
// wypisuje kolejkę
void print_queue(struct Queue *queue);
// stwórz nową część kolejki
struct part* create_part(int ts, int src_id, int cuchy);
// dodaje element według etykiety czasowej, sort(ts, id)
void add_by_time(struct Queue *queue, int ts, int src_id, int cuchy);
// zwraca indeks elemntu w kolejce według id procesu
int find_by_src(struct Queue *queue, int dupa);
int find_by_rank(struct Queue *queue);
// zdejmuje element według id procesu
void pop_by_src(struct Queue *queue, int src_id);
// zwraca wybrany element w kolejce według pozycji
struct part* get_by_id(struct Queue *queue, int idx);

#endif
