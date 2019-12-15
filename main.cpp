#include <chrono>
#include <ctime>
#include <iostream>

long calc_fibonacci(long n) {
   if(n < 2)
      return 1;
   return 
      calc_fibonacci(n - 1) +
       calc_fibonacci(n - 2);
}

int main() {
   auto start = std::chrono::system_clock::now();
   const long result 
      = calc_fibonacci(43);
   auto finish = std::chrono::system_clock::now();
   auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(finish - start);
   std::time_t start_time 
      =
      std::chrono::system_clock::to_time_t(start);
   std::cout << std::ctime(&start_time)
             << std::endl;
   std::cout << duration.count() << "ms."
             << " Result: " << result
             << std::endl;
   return 1;
   return 0;
}
