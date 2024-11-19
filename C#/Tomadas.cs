using System;
using System.Globalization;

/*
 
   Finalmente, o time da Universidade conseguiu a classificação para a Final Nacional da Maratona de Programação da SBC. Os três membros do time e o técnico estão ansiosos para bem representar a Universidade, e além de treinar muito, 
    preparam com todos os detalhes a sua viagem a São Paulo, onde será realizada a Final Nacional.

    Eles planejam levar na viagem todos os seus vários equipamentos eletrônicos: celular, tablet, notebook, ponto de acesso wifi, câmeras, etc, e sabem que necessitarão de várias tomadas de energia para conectar todos esses equipamentos. 
    Eles foram informados de que ficarão os quatro no mesmo quarto de hotel, mas já foram alertados de que em cada quarto há apenas uma tomada de energia disponível.

    Precavidos, os três membros do time e o técnico compraram cada um uma régua de tomadas, permitindo assim ligar vários aparelhos na única tomada do quarto de hotel; eles também podem ligar uma régua em outra para aumentar ainda mais o número de 
    tomadas disponíveis. No entanto, como as réguas têm muitas tomadas, eles pediram para você escrever um programa que, dado o número de tomadas em cada régua, determine o número máximo de aparelhos que podem ser conectados à energia num mesmo instante.

    Entrada
    A entrada consiste de uma linha com quatro números inteiros T1, T2, T3, T4, indicando o número de tomadas de cada uma das quatro réguas (2 ≤ Ti ≤ 6).

    Saída
    Seu programa deve produzir uma única linha contendo um único número inteiro, indicando o número máximo de aparelhos que podem ser conectados à energia num mesmo instante.

 */

namespace ExerciciosBeecrowd
{
    internal class Program
    {
        static void Main(string[] args)
        {

            int contador = 0;
            string[] valores = Console.ReadLine().Split(' ');
            int n1 = int.Parse(valores[0]);
            int n2 = int.Parse(valores[1]);
            int n3 = int.Parse(valores[2]);
            int n4 = int.Parse(valores[3]);

            for (int i = 1; i < n1; i++)
            {
                contador++;
            }
            for (int i = 1; i < n2; i++)
            {
                contador++;
            }
            for (int i = 1; i < n3; i++)
            {
                contador++;
            }
            for (int i = 1; i <= n4; i++)
            {
                contador++;
            }

            Console.WriteLine(contador);
            Console.ReadLine();
        }
    }
}
