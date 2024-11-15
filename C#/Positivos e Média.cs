using System;
using System.Globalization;

/*
    Leia 6 valores. Em seguida, mostre quantos destes valores digitados foram positivos. 
    Na próxima linha, deve-se mostrar a média de todos os valores positivos digitados, com um 
    dígito após o ponto decimal.
 */

namespace ExerciciosBeecrowd
{
    internal class Program
    {
        static void Main(string[] args)
        {
            double n, media = 0.0;
            int contador = 0; ;

            for (int i = 0; i < 6; i++)
            {
                n = double.Parse(Console.ReadLine());

                if (n > 0)
                {
                    contador += 1;
                    media += n;
                }
            }

            Console.WriteLine(contador + " valores positivos");
            Console.WriteLine((media / contador).ToString("f1", CultureInfo.InvariantCulture));
            Console.ReadKey();
        }
    }
}
