import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Inserisci saldo conto corrente: ");
        Conto corrente = new Conto(sc.nextFloat());

        String scelta = sc.next();

        System.out.println(scelta.charAt(0));
    }
}