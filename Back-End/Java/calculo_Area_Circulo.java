import java.util.Scanner;

public class calculo_Area_Circulo {
    
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);

        double r, a;

        System.out.print("Digite o raio de um círculo: ");
        r = ler.nextDouble();

        a = (Math.pow(r, 2) * Math.PI);

        System.out.println("A área de um círculo de raio " + r + " é: " + a);
        
        ler.close();
    }

}
