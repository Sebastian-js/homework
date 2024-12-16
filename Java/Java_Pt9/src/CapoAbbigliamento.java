public class CapoAbbigliamento extends TipoCapoAbbigliamento{
    char taglia;
    int quantitaAcquistata = 0;
    int quantitaDisponibile;

    public CapoAbbigliamento(String marca, String modello, float prezzo, char taglia, int quantitaDisponibile) {
        super(marca, modello, prezzo);
        this.taglia = taglia;
        this.quantitaDisponibile = quantitaDisponibile;
    }

    public void setQuantitaDisponibile(int quantitaDisponibile) {
        this.quantitaDisponibile = quantitaDisponibile;
    }

    public int setQuantitaAcquistata(int quantitaAcquistata) throws OutOfStockException{
        if(quantitaAcquistata > quantitaDisponibile){
            throw new OutOfStockException();
        }
        this.quantitaAcquistata = quantitaAcquistata;
        setQuantitaDisponibile(quantitaAcquistata-quantitaAcquistata);
        return quantitaDisponibile;
    }

    public String toString(){
        return "\n[Capo: " + super.toString() + "\n     Taglia: " + taglia + "\n     Quantità Disponibile: " + quantitaDisponibile + "\n     Quantità Acquistata: " + quantitaAcquistata + "\n]";
    }
}
