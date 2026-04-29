#include <bits/stdc++.h>
using namespace std;

// Fast exponentiation (binary exponentiation)
long long power(long long base, long long exp)
{
    long long result = 1;
    while (exp > 0)
    {
        if (exp & 1)
            result *= base;
        base *= base;
        exp >>= 1;
    }
    return result;
}

// Sieve of Eratosthenes
vector<int> sieve(int n)
{
    vector<bool> prime(n + 1, true);
    vector<int> primes;
    prime[0] = prime[1] = false;
    for (int i = 2; i <= n; i++)
    {
        if (prime[i])
        {
            primes.push_back(i);
            for (int j = i * i; j <= n; j += i)
                prime[j] = false;
        }
    }
    return primes;
}

// Fast GCD using Euclidean algorithm
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

// Matrix multiplication
vector<vector<long long>> multiply(vector<vector<long long>> A, vector<vector<long long>> B)
{
    int n = A.size();
    vector<vector<long long>> C(n, vector<long long>(n, 0));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            for (int k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];
    return C;
}

// Matrix exponentiation
vector<vector<long long>> matrixPower(vector<vector<long long>> A, int exp)
{
    int n = A.size();
    vector<vector<long long>> result(n, vector<long long>(n, 0));
    for (int i = 0; i < n; i++)
        result[i][i] = 1; // identity matrix
    while (exp > 0)
    {
        if (exp & 1)
            result = multiply(result, A);
        A = multiply(A, A);
        exp >>= 1;
    }
    return result;
}

// Generate subsets using recursion
void generateSubsets(vector<int> &arr, int index, vector<int> &current)
{
    if (index == arr.size())
    {
        cout << "{ ";
        for (int x : current)
            cout << x << " ";
        cout << "}\n";
        return;
    }
    // Include element
    current.push_back(arr[index]);
    generateSubsets(arr, index + 1, current);
    current.pop_back();
    // Exclude element
    generateSubsets(arr, index + 1, current);
}

int main()
{
    cout << "=== Advanced Algorithms Playground ===\n";

    // Binary exponentiation
    cout << "Power(3, 13) = " << power(3, 13) << "\n";

    // Sieve
    cout << "Primes up to 50: ";
    vector<int> primes = sieve(50);
    for (int p : primes)
        cout << p << " ";
    cout << "\n";

    // GCD
    cout << "GCD(84, 30) = " << gcd(84, 30) << "\n";

    // Matrix exponentiation (Fibonacci)
    vector<vector<long long>> F = {{1, 1}, {1, 0}};
    int n = 10;
    vector<vector<long long>> Fn = matrixPower(F, n);
    cout << "Fibonacci(10) = " << Fn[0][1] << "\n";

    // Subset generation
    vector<int> arr = {1, 2, 3};
    vector<int> current;
    cout << "Subsets of {1,2,3}:\n";
    generateSubsets(arr, 0, current);

    return 0;
}
