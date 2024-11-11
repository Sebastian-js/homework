public class Conto {
    private float saldo; //modificabile solo con metodi della classe

    Conto(float saldo){
        this.saldo = saldo;
    }

    float getSaldo(){
        return saldo;
    }

    float carica_conto(float somma){
        saldo += somma;
        System.out.println(saldo);
        return saldo;
    }

    float preleva_conto(float somma){
        saldo -= somma;
        System.out.println(saldo);
        return saldo;
    }

}
