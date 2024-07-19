#include <stdio.h>
#include <limits.h>
int matrixChainMultiplication(int dims[], int n)
{
    int m[n][n];
    for (int i = 1; i < n; i++)
        m[i][i] = 0; 
    for (int L = 2; L < n; L++)
    {
        for (int i = 1; i < n - L + 1; i++)
        {
            int j = i + L - 1;
            m[i][j] = INT_MAX;
            for (int k = i; k <= j - 1; k++)
            {
                int q = m[i][k] + m[k + 1][j] + dims[i - 1] * dims[k] * dims[j]; 
                if (q < m[i][j])
                    m[i][j] = q;
            }
        }
    }
 
    return m[1][n - 1];
}
int main()
{
    int dims[] = { 10, 30, 5, 60 };
    int n = sizeof(dims) / sizeof(dims[0]);
    printf("Minimum number of multiplications needed to multiply the matrices: %d\n", matrixChainMultiplication(dims, n));
    return 0;
}
