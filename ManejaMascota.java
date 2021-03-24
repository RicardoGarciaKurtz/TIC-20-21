package MiprimerCodigo;

public class ManejaMascota {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Mascota miLindoGatito;
		MascotaConCuidados miLindaTortuga;
		miLindoGatito=new Mascota("gato","Silvestre",1);
		miLindaTortuga=new MascotaConCuidados("tortuga ","rayo ",17);
		System.out.println("Uy, Uy, mi "+ miLindoGatito.getEspecie()+ " hace uy uy");
		System.out.println("y se llama "+miLindoGatito.getNombre());
		miLindaTortuga.setCuidados(" no estresarla ");
		System.out.println("mi "+miLindaTortuga.getEspecie()+"se llama "+miLindaTortuga.getNombre()+"y conviene "+miLindaTortuga.getCuidados());

	}

}
