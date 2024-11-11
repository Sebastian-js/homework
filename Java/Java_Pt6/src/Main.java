import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Rubric r = new Rubric();
        Contact contact;


        int input = 1;
        while (input != 0){
            System.out.print("1 - Aggiungi contatto\n2 - Rimuovi contatto\n3 - Visualizza contatti\n4 - Cerca contatto\n0 - Esci");
            input = sc.nextInt();
            switch (input){
                case 1:
                    System.out.println("Inserisci nome cognome e numero di telefono: ");
                    contact = new Contact(sc.next(), sc.next(), sc.next());
                    r.addContact(contact);
                    break;
                case 2:
                    System.out.println("Inserisci nome cognome: ");
                    try { //tries to execute the method and looks if any exceptions are thrown
                        r.removeContact(r.getContact(sc.next(), sc.next()));
                    } catch (Exception e) { //in case an exception is thrown it catches the message and saves it in the "e" object of Exception class
                        System.out.println(e.getMessage());
                    }
                    break;
                case 3:
                    System.out.println(r);
                    break;
                case 4:
                    System.out.println("Inserisci nome e cognome del contatto: ");
                    try {
                        System.out.println(r.getContact(sc.next(), sc.next()));
                    } catch (Exception e) {
                        System.out.println(e.getMessage());
                    }
                    break;
                default:
                    System.out.println("Inserisci una opzione valida");
            }
        }
    }
}