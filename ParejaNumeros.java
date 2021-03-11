package MiprimerCodigo;

public class ParejaNumeros {
	//aqui van los atributos
	private double num1;
	private double num2;
	
	//el constructor
	public ParejaNumeros(double num1,double num2){
		this.num1=num1;
		this.num2=num2;
	}
	/*int getNum1(){
		return(num1);
	} */
	//metodos getters and setters
	
	/*
	 * @return the num1
	 */
	public double getNum1() {
		return num1;
	}

	/**
	 * @param num1 the num1 to set
	 */
	public void setNum1(int num1) {
		this.num1 = num1;
	}

	/**
	 * @return the num2
	 */
	public double getNum2() {
		return num2;
	}

	/**
	 * @param num2 the num2 to set
	 */
	public void setNum2(int num2) {
		this.num2 = num2;
	}


	//Resto de métodos
	public double devuelveSuma() {
		return(num1+num2);
	}
	public double devuelveResta() {
			return(num1-num2);
	}
	public double devuelveMultiplicacion() {
		return(num1*num2);
	}
	public double devuelveDivision() {
		double division;
		division=num1/num2;
		return(division);
	}
	}
	