import java.util.Scanner;

public class caixa_Eletronico {
    
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);

        int cedula = 100;
        int totalCedula = 0; 
        int valorSaque = 0;

        System.out.print("Qual valor deseja sacar? ");
        valorSaque = ler.nextInt();

        while (true) {
            if (valorSaque >= cedula) {  
                valorSaque -= cedula;
                totalCedula += 1;
            }
            else {
                if (totalCedula > 0) {
                    System.out.println("Total de " + totalCedula + " cédulas de R$" + cedula);
                    totalCedula = 0;
                }
                
                if (valorSaque == 0) {
                    break;
                }

                if (cedula == 100) {
                    cedula = 50;
                }
                else if (cedula == 50) {
                    cedula = 10;
                }
                else if (cedula == 10) {
                    cedula = 5;
                }
                else {
                    cedula = 1;
                }
            }
        }
        ler.close();
    }
    
}