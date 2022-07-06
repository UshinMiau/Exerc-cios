import java.util.Scanner;

public class conversor_Cm_Em_M {
    
    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);

        float metros;
        System.out.print("Digite um valor em metros: ");
        metros = ler.nextFloat();

        float conversaoCentimetros =  metros * 100;

        System.out.println(metros + " metros equivale a " + conversaoCentimetros + " em centímetros ");
        
        ler.close();
    }

}
