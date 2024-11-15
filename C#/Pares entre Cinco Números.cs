using System;
using System.Globalization;

/*
    Faça um programa que leia 5 valores inteiros. Conte quantos destes valores digitados são 
    pares e mostre esta informação.
 */

namespace ExerciciosBeecrowd
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int contador = 0;
            int n;

            for (int i = 0; i < 5; i++)
            {
                n = int.Parse(Console.ReadLine());

                if (n % 2 == 0)
                {
                    contador += 1;
                }
            }

            Console.WriteLine(contador + " valores pares");
            Console.ReadKey();
        }
    }
}
