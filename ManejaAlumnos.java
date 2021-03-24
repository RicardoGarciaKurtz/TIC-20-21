package MiprimerCodigo;

public class ManejaAlumnos {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Alumno pepe;
		AlumnoBecado Juana;
		Fecha nacimientoJuana;
		Fecha nacimientoJose;
		nacimientoJose=new Fecha(14,3,2021);
		nacimientoJuana=new Fecha(13,12,1988);
		pepe=new Alumno("jose","Lopez","Garcia",nacimientoJose);
		Juana=new AlumnoBecado("Juana","perez","González",nacimientoJuana);
		System.out.println("Nuevo alumno: ");
		System.out.println(pepe.getNombre());
		System.out.println(pepe.getApellido1());
		System.out.println(pepe.getApellido2());
		System.out.println(pepe.getFechaNacimiento().getFechaConFormatoLargo());
		System.out.println("alumna becada");
		System.out.println(Juana.getNombre());
		System.out.println(Juana.getApellido1());
		System.out.println(Juana.getApellido2());
		System.out.println(Juana.getFechaNacimiento().getFechaConFormatoLargo());
		System.out.println("¿becada?"+Juana.isBeca());

	}

}
