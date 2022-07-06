import java.util.Scanner;

public class calculo_De_Media {
    
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);

        float notaBimestre1, notaBimestre2, notaBimestre3, notaBimestre4;

        System.out.print("Digite a nota do 1° bimestre: ");
        notaBimestre1 = ler.nextFloat();
        System.out.print("Digite a nota do 2° bimestre: ");
        notaBimestre2 = ler.nextFloat();
        System.out.print("Digite a nota do 3° bimestre: ");
        notaBimestre3 = ler.nextFloat();
        System.out.print("Digite a nota do 4° bimestre: ");
        notaBimestre4 = ler.nextFloat();

        float somaNotas = (notaBimestre1 + notaBimestre2 + notaBimestre3 + notaBimestre4);
        float mediaNotas = (notaBimestre1 + notaBimestre2 + notaBimestre3 + notaBimestre4) / 4;
                
        System.out.println("A soma das notas foi: " + somaNotas);
        System.out.println("A média das notas foi: " + mediaNotas);

        ler.close();
    }

}
