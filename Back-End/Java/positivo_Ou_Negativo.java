import java.util.Scanner;

public class positivo_Ou_Negativo {
    
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);

        float valor;

        System.out.print("Digite um valor: ");
        valor = ler.nextFloat();

        if (valor > 0)
            System.out.println("O valor " + valor + " é um número positivo.");
        else if (valor < 0)
            System.out.println("O valor " + valor + " é um número negativo.");
        else
            System.out.println("O valor " + valor + " é um número neutro.");

        ler.close();
    }

}
