import java.util.Scanner;

public class maior_E_Menor_Numero_Entre_X_Y_Z {

    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);

        float x, y, z;

        System.out.print("Digite um valor para X: ");
        x = ler.nextFloat();

        System.out.print("Digite um valor para Y: ");
        y = ler.nextFloat();
        
        System.out.print("Digite um valor para Z: ");
        z = ler.nextFloat();

        if (x > y && x > z) 
            System.out.println("O maior número é o X: " + x);
        else if (y > x && y > z) 
            System.out.println("O maior número é o Y: " + y);
        else if (z > x && z > y) 
            System.out.println("O maior número é o Z: " + z);
        else if (x == y && x > z)
            System.out.println("O maior número é o X e o Y: " + x);
        else if (x == z && x > y)
            System.out.println("O maior número é o X e o Z: " + x);
        else if (y == z && y > x)
            System.out.println("O maior número é o Y e o Z: " + y);
        else
            System.out.println("Os três números são iguais, não existe um maior que o outro.");

        if (x < y && x < z)
            System.out.println("O menor número é o X: " + x);
        else if (y < x && y < z) 
            System.out.println("O menor número é o Y: " + y);
        else if (z < x && z < y) 
            System.out.println("O menor número é o Z: " + z);
        else if (x == y && x < z)
            System.out.println("O menor número é o X e o Y: " + x);
        else if (x == z && x < y)
            System.out.println("O menor número é o X e o Z: " + x);
        else if (y == z && y < x)
            System.out.println("O menor número é o Y e o Z: " + y);
        else
            System.out.println("Os três números são iguais, não existe um menor que o outro.");
        
        ler.close();
    }

}
