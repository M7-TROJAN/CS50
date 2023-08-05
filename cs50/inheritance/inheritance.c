#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define GENERATIONS 3
#define INDENT_LENGTH 4

typedef struct person
{
    struct person *parents[2];
    char alleles[2];
} person;

person *create_family(int generations);
void print_family(person *p, int generation);
void free_family(person *p);
char random_allele();

int main(void)
{
    // Seed random number generator
    srand(time(NULL));

    // Create a new family with three generations
    person *p = create_family(GENERATIONS);

    // Print family tree of blood types
    print_family(p, 0);

    // Free memory
    free_family(p);

    return 0;
}

person *create_family(int generations)
{
    // Allocate memory for new person
    person *p = malloc(sizeof(person));

    if (generations > 1)
    {
        // Set parent pointers for the current person
        p->parents[0] = create_family(generations - 1);
        p->parents[1] = create_family(generations - 1);

        // Randomly assign current person's alleles based on the alleles of their parents
        p->alleles[0] = p->parents[0]->alleles[rand() % 2];
        p->alleles[1] = p->parents[1]->alleles[rand() % 2];
    }
    else
    {
        // Set parent pointers to NULL
        p->parents[0] = NULL;
        p->parents[1] = NULL;

        // Randomly assign alleles
        p->alleles[0] = random_allele();
        p->alleles[1] = random_allele();
    }

    return p;
}

void free_family(person *p)
{
    if (p == NULL)
        return;

    free_family(p->parents[0]);
    free_family(p->parents[1]);
    free(p);
}

void print_family(person *p, int generation)
{
    if (p == NULL)
        return;

    // Print indentation
    for (int i = 0; i < generation * INDENT_LENGTH; i++)
        printf(" ");

    // Print person
    printf("Generation %d, blood type %c%c\n", generation, p->alleles[0], p->alleles[1]);

    // Print parents of current generation
    print_family(p->parents[0], generation + 1);
    print_family(p->parents[1], generation + 1);
}

char random_allele()
{
    char alleles[] = { 'A', 'B', 'O' };
    return alleles[rand() % 3];
}
