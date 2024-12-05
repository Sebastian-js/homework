class Auto extends Veicolo{

    int porte;
    String alimentazione;

    Auto(int id, String marca, int anno, int cyl, int porte, String alimentazione) {
        super(id, marca, anno, cyl);
        this.porte = porte;
        if(alimentazione.equalsIgnoreCase("Benzina"))
            this.alimentazione = "Benzina";
        else if (alimentazione.equalsIgnoreCase("Diesel"))
            this.alimentazione = "Diesel";
        else
            this.alimentazione = "Invalida";

    }

    int getPorte(){
        return porte;
    }
    String getAlimentazione(){
        return alimentazione;
    }

    public String toString(){
        return "[Auto: " + super.toString() + "\nNumero porte: " + porte + "\nAlimentazione: " + alimentazione + "]";
    }


}
