package MiprimerCodigo;

public class ManejaCoche {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Coche miCocheNormal;
		CocheEspecial miCocheEspecial;
		Coche miCocheDelPolimorfismo;
		miCocheNormal=new Coche("Renualt","megane",18000);
		miCocheEspecial=new CocheEspecial("BMW","i3",40000);
		miCocheDelPolimorfismo=new Coche("Focus");
		System.out.println("mi coche de viaje es un "+miCocheNormal.getMarca()+" de modelo "+miCocheNormal.getModelo()+" y cuesta "+miCocheNormal.getPrecio());
		System.out.println("mi coche de ciudad es "+miCocheEspecial.getMarca()+ " de modelo "+miCocheEspecial.getModelo()+" y vale "+miCocheEspecial.getPrecio());
		miCocheEspecial.setEspecial("subvencion de 5000 euros");
		System.out.println("pero mi coche de ciudad tiene una "+miCocheEspecial.getEspecial());
		System.out.println("el coche del que solo me sé el modelo es... "+miCocheDelPolimorfismo.getModelo());
		
		
		
		
		

	}

}
