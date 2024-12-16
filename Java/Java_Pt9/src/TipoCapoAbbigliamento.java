public class TipoCapoAbbigliamento {
    String marca;
    String modello;
    float prezzo;

    public TipoCapoAbbigliamento(String marca, String modello, float prezzo) {
        this.marca = marca;
        this.modello = modello;
        this.prezzo = prezzo;
    }

    public float getPrezzo() {
        return prezzo;
    }

    public void setPrezzo(float prezzo) {
        this.prezzo = prezzo;
    }

    float applicaSconto(int percentuale) throws Exception {
        if(percentuale<0||percentuale>100){
            throw new Exception("Sconto invalido");
        }
        setPrezzo(prezzo-((prezzo*percentuale)/100));
        return prezzo;
    }

    public String toString() {
        return "\n     Marca: " + marca + "\n     Modello: " + modello + "\n     Prezzo: €" + prezzo;
    }
}
