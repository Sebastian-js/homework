class Moto extends Veicolo{

    int tempi;

    Moto(int id, String marca, int anno, int cyl, int tempi){
        super(id, marca, anno, cyl);
        this.tempi = tempi;
    }

    int getTempi(){
        return tempi;
    }

    public String toString(){
        return "[Moto: " + super.toString() + "\n     Tempi: " + tempi + "]";
    }
}
