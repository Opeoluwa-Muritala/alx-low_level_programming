#include "lists.h"

size_t print_dlistint(const dlistint_t *h){
        dlistint_t current = *h;
        int count = 0;

        while (current != NULL){
                count++;
                printf("%d\n",current->n);
                current = current->next;
        }
        return (count);
}
