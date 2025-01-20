public class ProdottoAlimentare extends Prodotto{
    int dataScadenza;

    public ProdottoAlimentare(String id, String nome, float prezzo, int dataScadenza) {
        super(id, nome, prezzo);
        this.dataScadenza = dataScadenza;
    }

    @Override
    public float calcolaPrezzoFinale() {
        return super.calcolaPrezzoFinale() - (super.calcolaPrezzoFinale() * (float)0.10);
    }
}
