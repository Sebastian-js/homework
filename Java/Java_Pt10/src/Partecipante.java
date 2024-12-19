public class Partecipante {
    private String nome;
    private String cognome;
    private String affiliato;
    private Pagamento pagamento;
    private float quota_pagata = 0;
    private String evento;

    public Partecipante(String nome, String cognome, String affiliato, Pagamento pagamento, float quota_pagata, String evento) {
        this.nome = nome;
        this.cognome = cognome;
        this.affiliato = affiliato;
        this.quota_pagata = quota_pagata;
        this.evento = evento;
        this.pagamento = pagamento;
    }



}
