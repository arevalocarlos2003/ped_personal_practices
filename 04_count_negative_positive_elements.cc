#include <iostream>

/*
  Descripción: Escribe un programa que permita al usuario ingresar 12
  números enteros y los almacene en un array. Luego, cuenta y muestra
  cuántos de los números son positivos y cuántos son negativos.
*/

int main(int argc, char const *argv[])
{
  const int kSize = 12;
  int num_collection[kSize] = {0};

  std::cout << "Enter 12 numbers leaving a space between each other, then press [Enter]:" << std::endl;

  for (int i = 0; i < kSize; ++i)
  {
    std::cin >> num_collection[i];
  }

  int positive_number_counter = 0;
  int negative_number_counter = 0;

  for (int i = 0; i < kSize; ++i)
  {
    if (num_collection[i] > 0)
    {
      positive_number_counter++;
    }

    if (num_collection[i] < 0)
    {
      negative_number_counter++;
    }
  }

  std::cout << "\x1b[32mPositive numbers: " << positive_number_counter << "\x1b[0m" << std::endl;
  std::cout << "\x1b[31mNegative numbers: " << negative_number_counter << "\x1b[0m" << std::endl;

  return 0;
}