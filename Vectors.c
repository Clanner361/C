/* Joey Cheung, 31 July 2024
 * This program sorts vectors based on their magnitude
 * Input:
 * Dimension of the vectors and the number of vectors
 * The vectors themselves
 * Output:
 * The vectors, sorted with increasing magnitude
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calc_magnitude(double* vector, int dim)
{
    double magnitude = 0;
    for(int i=0; i<dim; i++)
        magnitude += (*(vector+i)) * (*(vector+i));
    magnitude = sqrt(magnitude);
    return magnitude;
}

void swap(double** p, double** q)
{
    double* tmp;

    tmp = *p;
    *p  = *q;
    *q  = tmp;
}

void bubble(double** w, int num, int dim)
{
    for(int i=0; i<num-1; i++)
    {
        for(int j=num-1; j>i; j--)
        {
            double magnitude1 = calc_magnitude(w[j], dim);
            double magnitude2 = calc_magnitude(w[j-1], dim);
            if(magnitude2 > magnitude1)
                swap(&w[j], &w[j-1]);
        }
    }
}

void print_vectors(double** w, int num, int dim)
{
    for(int i=0; i<num; i++)
    {
        for(int j=0; j<dim; j++)
            printf("%e ", w[i][j]);
        printf("\n");
    }
}

int main (void)
{
	int dim, num;
	int i, j;
	double **w;

	scanf ("%d %d", &dim, &num);          /* read N and M */
	w = calloc (num, sizeof (double *));  /* allocate array of M pointers */
	for (i = 0; i < num; i++) {           
		/* allocate space for N dimensional vector */
		w[i] = calloc (dim, sizeof (double));
		/* read the vector */
		for (j = 0; j < dim; j++) {
			scanf ("%le", &w[i][j]);
		}
	} 

	/* FIXME
	 * Sort the vectors and print them.
	 */
    // double result = calc_magnitude(w[0], dim);
    // printf("%lf", result);
    bubble(w, num, dim);

    print_vectors(w, num, dim);

	return 0;
}
