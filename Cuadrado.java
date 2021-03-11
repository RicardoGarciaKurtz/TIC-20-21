package MiprimerCodigo;

public class Cuadrado {
	private punto vertice;
	private double lado;
	public Cuadrado(punto vertice, double lado) {
		this.vertice=vertice;
		this.lado=lado;
	}
	/**
	 * @return the vertice
	 */
	public punto getVertice() {
		return vertice;
	}
	/**
	 * @param vertice the vertice to set
	 */
	public void setVertice(punto vertice) {
		this.vertice = vertice;
	}
	/**
	 * @return the lado
	 */
	public double getLado() {
		return lado;
	}
	/**
	 * @param lado the lado to set
	 */
	public void setLado(double lado) {
		this.lado = lado;
	}
	