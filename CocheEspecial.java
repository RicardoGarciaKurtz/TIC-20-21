package MiprimerCodigo;
//herencia
public class CocheEspecial extends Coche {
	private String Especial;
	public CocheEspecial(String marca,String modelo,int precio) {
		super( marca, modelo, precio);
	}
	public String getEspecial() {
		return Especial;
	}
	public void setEspecial(String Especial) {
		this.Especial= Especial;
	}
	

}
