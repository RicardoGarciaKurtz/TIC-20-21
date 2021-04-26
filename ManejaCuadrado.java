package MiprimerCodigo;

public class ManejaCuadrado {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Punto miVertice;
		Cuadrado miCuadrado;
		double coordY=3.0;
		double coordX=2.0;
		double lado=5.0;
		miVertice= new Punto(coordX,coordY);
		miCuadrado=new Cuadrado(miVertice,lado);
		System.out.println(miCuadrado.getArea());
	}

}
