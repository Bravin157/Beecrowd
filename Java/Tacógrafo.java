/*
 Tacógrafos são dispositivos instalados em determinados tipos de veículos, que registram a
 velocidade, tempo e distância percorrida por tal veículo. É utilizada principalmente em
 veículos de transporte coletivo e de transporte de cargas, assim ajudando a evitar abusos de
 velocidade por parte dos motoristas.

 A empresa SBC (Sociedade Brasileira dos Caminhoneiros) decidiu encomendar uma versão um pouco mais
 básica (e barata) para seus associados não precisarem gastar tanto na instalação desses aparelhos.
 Essas versões modificadas registram apenas os intervalos de tempo e as velocidades médias do caminhão
 naqueles intervalos.

 Apesar das restrições dos aparelhos novos, a SBC quer poder saber qual foi a distância percorrida
 pelos caminhões. Você deverá escrever um programa que recebe uma série de intervalos de tempo com
 suas respectivas velocidades médias e calcula qual foi a distância total percorrida pelo caminhão
 de acordo com o tacógrafo.
 */



import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int x, y, resultado = 0;

        for (int i = 0; i < n; i++) {
            x = sc.nextInt();
            y = sc.nextInt();

            resultado += x * y;
        }
        System.out.println(resultado);
    }
}