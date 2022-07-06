import java.util.Scanner;

public class calculo_Aumento_De_Salario {

    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);

        float salario, salarioComAumento, valorAumento, porcentagemAumento;

        porcentagemAumento = 0;

        System.out.print("Digite o valor do salário: ");
        salario = ler.nextFloat();

        if (salario <= 280)
            porcentagemAumento = 20;
        else if (salario > 280 && salario <= 700)
            porcentagemAumento = 15;
        else if (salario > 700 && salario <= 1500)
            porcentagemAumento = 10;
        else if (salario > 1500)
            porcentagemAumento = 5;

        valorAumento = (porcentagemAumento / 100) * salario;
        salarioComAumento = valorAumento + salario;

        System.out.println("Valor do salário pré-reajuste: " + salario);
        System.out.println("Valor do percentual de aumento aplicado: " + porcentagemAumento); 
        System.out.println("Valor do aumento aplicado: " + valorAumento); 
        System.out.println("Valor do salário pós-reajuste: " + salarioComAumento); 

        ler.close();
    }

}
