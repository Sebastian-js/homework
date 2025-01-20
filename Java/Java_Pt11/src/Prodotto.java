public abstract class Prodotto {
    String id;
    String nome;
    float prezzo;

    public Prodotto(String id, String nome, float prezzo) {
        this.id = id;
        this.nome = nome;
        this.prezzo = prezzo;
    }

    public float calcolaPrezzoFinale() {
        return prezzo;
    }
}
