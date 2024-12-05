import java.util.ArrayList;
import java.util.List;

public class Garage {
    List<Veicolo> garage;
    int posti = 0;

    Garage() {
        garage = new ArrayList<>();
    }

    void addVeicolo(Veicolo veicolo) throws Exception{
        if(posti<15) {
            garage.add(veicolo);
            posti++;
        }
        else{
            throw new Exception("Garage Full");
        }
    }

    Veicolo searchVeicolo(int id, String marca, int anno, int cyl) throws Exception{
        for (Veicolo v : garage) {
            if (v.getId() == id && v.getMarca().equalsIgnoreCase(marca) && v.getAnno() == anno && v.getCyl() == cyl) {
                return v;
            }
        }
        throw new Exception("Veicolo non trovato");
    }

    void removeVeicolo(Veicolo veicolo) throws Exception{
        if(posti>0){
            garage.remove(posti);
            posti--;
        }
        else{
            throw new Exception("Garage Empty");
        }
    }

    public String toString(){
        StringBuilder sb = new StringBuilder();
        int i;
        for (i = 0;i<garage.size(); i++) { //s for each iteration is an object of the list
            sb.append(garage.get(i));
        }
        return sb.toString();
    }

}
