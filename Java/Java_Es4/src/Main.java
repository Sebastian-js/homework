import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str_uno = sc.next();
        String str_due = sc.next();

        String concat = str_uno + str_due; //concatenazione tra due stringhe

        if(str_uno.equals(str_due)) { //comparazione tra stringhe
            System.out.println(str_uno + " e " + str_due + " sono uguali");
        } else {
            System.out.println(str_uno + " e " + str_due + " sono diverse");
        }

        if(str_uno.contains(str_due)) { //controllo se una stringa contiene un'altra
            System.out.println(str_uno + " contiene " + str_due);
        }

        int i=str_uno.indexOf(str_due); //torna la posizione della seconda stringa contenuta nella prima, da contare come vettore dove i inizia da 0
        System.out.println(str_due + " si trova alla posizione: " + i);
    }
}