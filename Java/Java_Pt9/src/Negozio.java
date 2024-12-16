import java.util.ArrayList;
import java.util.List;

public class Negozio {
    List<CapoAbbigliamento> negozio;

    public Negozio() {
        negozio = new ArrayList<CapoAbbigliamento>();
    }

    void addCapo(CapoAbbigliamento c){
        negozio.add(c);
    }

    CapoAbbigliamento getCapo(String modello) throws NotAvailableException, OutOfStockException{
        for (CapoAbbigliamento c : negozio) {
            if (c.modello.equalsIgnoreCase(modello)) {
                return c;
            }
            if(c.quantitaDisponibile==0){
                throw new OutOfStockException();
            }
        }
        throw new NotAvailableException();
    }

    void removeCapo(String modello) throws OutOfStockException, NotAvailableException {
        negozio.remove(getCapo(modello));
    }

    void setPrezzo(CapoAbbigliamento c, float prezzo) {
        negozio.get(negozio.indexOf(c)).setPrezzo(prezzo);
    }

    void setSconto(CapoAbbigliamento c, int percentuale) throws Exception {
        negozio.get(negozio.indexOf(c)).applicaSconto(percentuale);
    }

    void setVendita(CapoAbbigliamento c, int quantita) throws OutOfStockException {
        negozio.get(negozio.indexOf(c)).setQuantitaAcquistata(quantita);
    }

    void setQuantitaDisponibile(CapoAbbigliamento c, int quantita){
        negozio.get(negozio.indexOf(c)).setQuantitaDisponibile(quantita);
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        for (CapoAbbigliamento c : negozio) {
            sb.append(c.toString());
        }
        return sb.toString();
    }
}
