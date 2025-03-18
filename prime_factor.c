#include <stdio.h>

long long largestPrimeFactor(long long n) {
  long long maxPrime = -1;

  while (n % 2 == 0) {
    maxPrime = 2;
    n /= 2;
  }

  for (long long i = 3; i * i <= n; i += 2) {
    while (n % i == 0) {
      maxPrime = i;
      n /= i;
    }
  }

  if (n > 2)
    maxPrime = n;

  return maxPrime;
}

int main() {
  long long num;
  printf("Enter a number: ");
  scanf("%lld", &num);
  printf("Largest Prime Factor: %lld\n", largestPrimeFactor(num));
  return 0;
}
