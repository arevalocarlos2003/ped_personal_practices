// Copyright (C) 2024 Carlos Arevalo
#include <iostream>

/*

  Descripción: Escribe un programa que solicite al usuario ingresar 6
  números enteros y los almacene en un array. Luego, muestra los números en
  el orden inverso.

*/

int main(int argc, char const *argv[])
{
  const int kSize = 6;
  int number_collection[kSize] = {0};

  std::cout << "Enter 6 numbers leaving a space between each number, then press [Enter]:" << std::endl;

  for (size_t i = 0; i < kSize; ++i)
  {
    std::cin >> number_collection[i];
  }

  std::cout << "Inverted Vector:" << std::endl;

  for (int i = kSize - 1; i >= 0; --i)
  {
    std::cout << number_collection[i] << " ";
  }

  std::cout << std::endl;

  return 0;
}