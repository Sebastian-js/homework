import java.awt.*;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);


        System.out.println("Inserisci coord. x e y del primo punto: ");
        Punto a = new Punto(sc.nextFloat(), sc.nextFloat());
        System.out.println("Inserisci coord. x e y del secondo punto: ");
        Punto b = new Punto(sc.nextFloat(), sc.nextFloat());

        System.out.println("La distanza tra i due punti è " + a.calcDistanceTwoPoints(b));
    }
}