import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Garage garage = new Garage();
        Scanner in = new Scanner(System.in);

        int choice = 1;
        int vehicle;
        while(choice > 0){
            System.out.println("1 - Add vehicle; \n2 - Search vehicle; \n3 - Remove vehicle; \n4 - See garage; \n0 - Exit\n");
            choice = in.nextInt();
            switch(choice){
                case 1:
                    System.out.println("Enter vehicle type: \n1 - Auto \n2 - Furgone \n3 - Moto");
                    vehicle = in.nextInt();

                    switch(vehicle){
                        case 1:
                            System.out.println("Inserisci id, marca, anno, cilindrata(L), numero porte e tipo di alimentazione(Benzina o Diesel)");
                            Auto auto = new Auto(in.nextInt(), in.next(), in.nextInt(), in.nextInt(), in.nextInt(), in.next());
                            break;
                        case 2:
                            System.out.println("Inserisci id, marca, anno, cilindrata(L), portata(tonnellate)");
                            Furgone furgone = new Furgone(in.nextInt(), in.next(), in.nextInt(), in.nextInt(), in.nextInt());
                            break;
                        case 3:
                            System.out.println("Inserisci id, marca, anno, cilindrata(L), tempi");
                            Moto moto = new Moto(in.nextInt(), in.next(), in.nextInt(), in.nextInt(), in.nextInt());
                            break;
                    }

                    break;
                case 2:
                    System.out.println("Inserisci id, marca, anno, cilindrata(L)");

                    try {
                        System.out.println(garage.searchVeicolo(in.nextInt(), in.next(), in.nextInt(), in.nextInt()));
                    } catch (Exception e) {
                        throw new RuntimeException(e);
                    }

                    break;
                case 3:
                    System.out.println("Inserisci id, marca, anno, cilindrata(L)");

                    try {
                        garage.removeVeicolo(garage.searchVeicolo(in.nextInt(), in.next(), in.nextInt(), in.nextInt()));
                    } catch (Exception e) {
                        throw new RuntimeException(e);
                    }

                    break;
                case 4:
                    System.out.println(garage);

                    break;
                default:
                    System.out.println("Inserisci una scelta valida");
            }
        }
    }
}