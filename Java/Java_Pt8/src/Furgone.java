class Furgone extends Veicolo{

    float capacita;

    Furgone(int id, String marca, int anno, int cyl, float capacita){
        super(id, marca, anno, cyl);
        this.capacita = capacita;
    }

    float getCapacita(){
        return capacita;
    }

    public String toString(){
        return "[Furgone: " + super.toString() + "\n     Capacita: " + capacita + "*1000kg]";
    }
}
