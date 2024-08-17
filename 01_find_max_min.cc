// Copyright (c) 2024 Carlos Arevalo
#include <iostream>

/*
  Descripción: Escribe un programa que solicite al usuario ingresar 10 números
  enteros y los almacene en un array. Luego, encuentra y muestra el número máximo
  y el número mínimo en el array.
*/

int main(int argc, char const *argv[])
{
  const int kSize = 10;
  // This one is for prevent, garbage values
  int num_collection[kSize] = {0};

  std::cout << "Enter 10 numbers leaving a space between each number, then press [ENTER]:" << std::endl;

  for (int i = 0; i < kSize; ++i)
  {
    std::cin >> num_collection[i];
  }

  int min = 0;
  int max = 0;

  for (int i = 0; i < kSize; ++i)
  {
    if (num_collection[i] > max)
    {
      max = num_collection[i];
    }

    if (num_collection[i] <= min)
    {
      min = num_collection[i];
    }
  }

  std::cout << "Maximum number of the collection: " << max << std::endl;
  std::cout << "Minimum number of the collection: " << min << std::endl;
  return 0;
}
