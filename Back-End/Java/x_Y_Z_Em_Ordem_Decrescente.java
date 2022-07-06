import java.util.Scanner;

public class x_Y_Z_Em_Ordem_Decrescente {

    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);

        float x, y, z;

        System.out.print("Digite um valor para X: ");
        x = ler.nextFloat();

        System.out.print("Digite um valor para Y: ");
        y = ler.nextFloat();

        System.out.print("Digite um valor para Z: ");
        z = ler.nextFloat();

        if (x < y && x < z && y < z)
            System.out.println("Os números em ordem decrescente são: " + z + ", " + y + ", " + x);
        else if (x < y && x < z && z < y)
            System.out.println("Os números em ordem decrescente são: " + y + ", " + z + ", " + x);
        else if (y < x && y < z && x < z)
            System.out.println("Os números em ordem decrescente são: " + z + ", " + x + ", " + y);
        else if (y < x && y < z && z < x)
            System.out.println("Os números em ordem decrescente são: " + x + ", " + z + ", " + y);
        else if (z < x && z < y && x < y)
            System.out.println("Os números em ordem decrescente são: " + y + ", " + x + ", " + z);
        else if (z < x && z < y && y < x)
            System.out.println("Os números em ordem decrescente são: " + x + ", " + y + ", " + z);
        else if (x == y && x < z)
            System.out.println("Os números em ordem decrescente são: " + z + ", " + y + ", " + x);
        else if (x == z && x < y)
            System.out.println("Os números em ordem decrescente são: " + y + ", " + x + ", " + z);
        else if (y == z && y < x)
            System.out.println("Os números em ordem decrescente são: " + x + ", " + y + ", " + z);
        else 
            System.out.println("Os números em ordem decrescente são: " + x + ", " + x + ", " + z);
        
        ler.close();
    }

}