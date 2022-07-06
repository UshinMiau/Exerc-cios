import java.util.Scanner;

public class calculo_De_Aprovacao {
    
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);

        float nota1, nota2, media;

        System.out.print("Digite a 1º nota: ");
        nota1 = ler.nextFloat();
        
        System.out.print("Digite a 2º nota: ");
        nota2 = ler.nextFloat();

        media = (nota1 + nota2) / 2;

        if (media == 10)
            System.out.println("Aprovado com distinção.");
        else if (media >= 7)
            System.out.println("Aprovado.");
        else
            System.out.println("Reprovado.");

        ler.close();
    }

}
