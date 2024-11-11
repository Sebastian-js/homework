import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        List<Student> students = new ArrayList<>();
        Scanner sc = new Scanner(System.in);

        System.out.println("Inserisci numero studenti: ");
        int n = sc.nextInt();

        for(int i=0; i<n; i++) {
            System.out.println("Inserisci nome cognome e classe dello studente: ");
            students.add(new Student(sc.next(), sc.next(), sc.next()));
        }

        
    }
}