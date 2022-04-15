#include "assignment/fibonacci.hpp"

#include <cmath>    // pow, sqrt, round
#include <cstdint>  // int64_t

namespace assignment {

  int64_t fib_binet(int n) {

    if (n <= 1) {
      return n;
    }
    double  fib = round((pow((1+ sqrt(5)),n) - pow((1-sqrt(5)), n))/( pow(2,n) * sqrt(5)));
    return fib;
  }

  int64_t fib_iterative(int n) {

    if (n <= 1) {
      return n;
    }
    int64_t fib_prev = 0;
    int64_t fib_curr = 1;
    for(int i = 0; i < n; i++) {
      fib_curr += fib_prev;
      fib_prev = fib_curr - fib_prev;
    }
    return fib_prev;

    // буфер для хранения двух последних значения ряда Фибоначчи
    //int64_t fib_prev = 0;
    //int64_t fib_curr = 1;
  }

  int64_t fib_recursive(int n) {
    if(n < 2){
      return n;
    }
    return fib_recursive(n - 1) + fib_recursive(n - 2);
  }

  int64_t fib_recursive_memoization(int n, std::vector<int64_t>& cache) {

    if (n <= 1) {
      cache[0] = 0;
      cache[1] = 1;
      return cache[n];
    }
      cache[n] = fib_recursive_memoization(n - 1, cache) + fib_recursive_memoization(n - 2, cache);
      return cache[n];
  }

  int64_t fib_matrix(int n) {

    if (n <= 1) {
      return n;
    }

    // Напишите здесь свой код ...

    // Tip: используйте реализованную функцию matrix_pow

    return 0;
  }

}  // namespace assignment
