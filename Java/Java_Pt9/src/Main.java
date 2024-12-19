import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        Negozio negozio = new Negozio();
        int choice = 1;
        CapoAbbigliamento c;
        while (choice != 0) {
            System.out.println("1 - Aggiungi capo \n2 - Modifica prezzo di un modello \n3 - Applica sconto a un modello \n4 - Segna la vendita di un capo \n5 - Modifica quantità disponibile di un capo \n6 - Cerca un capo \n7 - Vedi capi disponibili \n0 - Esci");
            choice = sc.nextInt();
            switch (choice) {
                case 1:
                    System.out.println("Inserisci marca(String), modello(String), prezzo(float), taglia(char) e quantità disponibile(int)");
                    c = new CapoAbbigliamento(sc.next(), sc.next(), sc.nextFloat(), sc.next(), sc.nextInt());
                    negozio.addCapo(c);
                    break;
                case 2:
                    System.out.println("Inserisci modello(String) e nuovo prezzo(float)");
                    c = negozio.getCapo(sc.next());
                    negozio.setPrezzo(c, sc.nextFloat());
                    break;
                case 3:
                    System.out.println("Inserisci modello(String) e percentuale sconto(int)");
                    c = negozio.getCapo(sc.next());
                    negozio.setSconto(c, sc.nextInt());
                    break;
                case 4:
                    System.out.println("Inserisci modello(String) e quantità venduta(int)");
                    c = negozio.getCapo(sc.next());
                    negozio.setVendita(c, sc.nextInt());
                    break;
                case 5:
                    System.out.println("Inserisci modello(String) e quantità disponibile(int)");
                    c = negozio.getCapo(sc.next());
                    System.out.println(c.quantitaDisponibile + "disponibile");
                    negozio.setQuantitaDisponibile(c, sc.nextInt());
                    break;
                case 6:
                    System.out.println("Inserisci modello(String)");
                    c = negozio.getCapo(sc.next());
                    System.out.println(c);
                    break;
                case 7:
                    System.out.println(negozio);
                default:
                    System.out.println("Inserisci un numero valido");
                    break;
            }
        }

    }
}