// Copyright (C) 2024 Carlos Arevalo
#include <iostream>

/*

  Descripción: Escribe un programa que permita al usuario ingresar 8
  números flotantes y los almacene en un array. Luego, calcula y muestra
  el promedio de esos números.

*/

int main(int argc, char const *argv[])
{
  const int kSize = 8;

  float number_collection[kSize] = {0};

  std::cout << "Enter 8 numbers leaving a space between each number, then press [Enter]:" << std::endl;

  for (int i = 0; i < kSize; ++i)
  {
    std::cin >> number_collection[i];
  }

  float number_collection_sum = 0;
  float average_collection_value = 0;

  for (int i = 0; i < kSize; ++i)
  {
    number_collection_sum = number_collection_sum + number_collection[i];
  }

  average_collection_value = number_collection_sum / kSize;

  std::cout << "Average collection value: " << average_collection_value << std::endl;

  return 0;
}