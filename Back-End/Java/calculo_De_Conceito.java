import java.util.Scanner;

public class calculo_De_Conceito {
    
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);

        float nota1, nota2, media;

        System.out.print("Digite a 1ª nota: ");
        nota1 = ler.nextInt();
        
        System.out.print("Digite a 2ª nota: ");
        nota2 = ler.nextInt();

        media = (nota1 + nota2) / 2;

        if (media >= 9)
            System.out.print("O Conceito é A");
        else if (media >= 7.5)
                System.out.print("O Conceito é B");
        else if (media >= 6)
                System.out.print("O Conceito é C");
        else if (media >= 4)
            System.out.print("O Conceito é D");
        else
            System.out.print("O Conceito é E");

        ler.close();
    }
    
}