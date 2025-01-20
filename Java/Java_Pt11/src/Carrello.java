import java.util.ArrayList;
import java.util.List;

public class Carrello {

    List<Prodotto> prodotti;

    public Carrello() {
        prodotti = new ArrayList<Prodotto>();
    }

    void aggiungiProdotto(Prodotto prodotto) {
        prodotti.add(prodotto);
    }

    Prodotto cercaProdottoId(String id) throws ProdottoNonTrovatoException{
        for(Prodotto p : prodotti){
            if(p.id.equalsIgnoreCase(id)){
                return p;
            }
        }

        throw new ProdottoNonTrovatoException();
    }

    Prodotto cercaProdottoNome(String nome) throws ProdottoNonTrovatoException{
        for(Prodotto p : prodotti){
            if(p.nome.equalsIgnoreCase(nome)){
                return p;
            }
        }

        throw new ProdottoNonTrovatoException();
    }

    void rimuoviProdottoNome(String nome) throws ProdottoNonTrovatoException{
        prodotti.remove(cercaProdottoNome(nome));
    }

    void rimuoviProdottoId(String id) throws ProdottoNonTrovatoException{
        prodotti.remove(cercaProdottoId(id));
    }


    float calcolaPrezzoTotale() {
        float prezzo = 0;
        for(Prodotto p : prodotti){
            prezzo += p.calcolaPrezzoFinale();
        }
        return prezzo;
    }



}
