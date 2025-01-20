public class ProdottoElettronico extends Prodotto{

    int garanziaInMesi;

    public ProdottoElettronico(String nome, String id, float prezzo, int garanziaInMesi) {
        super(id, nome, prezzo);
        this.garanziaInMesi = garanziaInMesi;
    }

    @Override
    public float calcolaPrezzoFinale() {
        return super.calcolaPrezzoFinale() - (super.calcolaPrezzoFinale() * (float)0.22);
    }
}
