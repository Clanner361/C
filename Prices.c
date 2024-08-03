/* Joey Cheung, 31 July 2024
 * Input: 
 * n (#products the shop sells) followed by the prices
 * m (#custumors) followed by how much of each product they but
 * 
 * Output:
 * The total price each customer has to pay
 */

#include <stdio.h>

int main(void)
{
    /*** Initialize the matrix and vector ***/
    int n; double prices[100];
    int m; int numbers[100][100];

    scanf("%d", &n);
    for(int i=0; i<n; i++)
        scanf("%lf", &prices[i]);

    scanf("%d", &m);
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
            scanf("%d", &numbers[i][j]);
    }

    // printf("%d \n", m);
    // for(int i=0; i<m; i++)
    // {
    //     for(int j=0; j<n; j++)
    //         printf("%d ", numbers[i][j]);
    //     printf("\n");
    // }

    // printf("%d \n", n);
    // for(int i=0; i<n; i++)
    //     printf("%lf ", prices[i]);

    /*** Perform the matrix-vector multiplication ***/
    
    for(int i=0; i<m; i++)
    {
        double total_price = 0.0;
        for(int j=0; j<n; j++)
            total_price += (numbers[i][j] * prices[j]);
        printf("%lf \n", total_price);
    }


    return 0;
}



