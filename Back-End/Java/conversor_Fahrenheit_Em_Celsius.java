import java.util.Scanner;

public class conversor_Fahrenheit_Em_Celsius {

    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);

        float f, c;
        System.out.print("Digite um valor de temperatura em graus Fahrenheit: ");
        f = ler.nextFloat();

        c = 5 * ((f - 32) / 9);

        System.out.println(f + " graus Fahrenheit equivale a " + c + " graus Celsius.");

        ler.close();
    }

}
