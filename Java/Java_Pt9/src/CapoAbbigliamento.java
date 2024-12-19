public class CapoAbbigliamento extends TipoCapoAbbigliamento{
    char taglia;
    int quantitaAcquistata = 0;
    int quantitaDisponibile;

    public CapoAbbigliamento(String marca, String modello, float prezzo, String taglia, int quantitaDisponibile) {
        super(marca, modello, prezzo);
        this.taglia = taglia.charAt(0);
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
        setQuantitaDisponibile(quantitaDisponibile-quantitaAcquistata);
        return quantitaDisponibile;
    }

    public String toString(){
        return "\n[Capo: " + super.toString() + "\n     Taglia: " + taglia + "\n     Quantità Disponibile: " + quantitaDisponibile + "\n     Quantità Acquistata: " + quantitaAcquistata + "\n]";
    }
}
