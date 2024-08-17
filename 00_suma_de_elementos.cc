// Copyright (c) 2024 Carlos Arevalo
#include <iostream>

int main()
{
  const int kSize = 5;
  int number_collection[kSize];
  std::cout << "Enter five numbers leaving one space between each number:" << std::endl;

  for (int i = 0; i < kSize; ++i)
  {
    std::cin >> number_collection[i];
  }

  int collection_sum = 0;

  for (int i = 0; i < kSize; ++i)
  {
    collection_sum = collection_sum + number_collection[i];
  }

  std::cout << "Number Collection Sum: " << collection_sum << std::endl;
}