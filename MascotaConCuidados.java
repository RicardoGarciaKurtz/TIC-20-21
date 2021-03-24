package MiprimerCodigo;

public class MascotaConCuidados extends Mascota{
	private String cuidados;
	public MascotaConCuidados(String especie, String nombre, int edad) {
		super(especie, nombre, edad);
		// TODO Auto-generated constructor stub
	}
	public String getCuidados() {
		return cuidados;
	}
	public void setCuidados(String cuidados) {
		this.cuidados = cuidados;
	}
	

}
