import java.util.Scanner;

public class calculo_Area_Quadrado {
    
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);

        int lado;
        System.out.print("Digite o valor do lado de um quadrado: ");
        lado = ler.nextInt();

        double area = Math.pow(lado, 2);
        
        System.out.println("A área de um quadrado de lado igual a " + lado + " é: " + area);
        System.out.println("E o dobro dessa área é: " + (area + area));
        
        ler.close();
    }

}
