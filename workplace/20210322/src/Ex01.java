
class Car{
	private String name;
	Car(String name){
		this.name = name;
	}
}

class KiaCar extends Car{
	private int price;
	KiaCar(String name){
		super(name);
	}
	KiaCar(String name,int price){
		this(name);
		this.price = price;
	}
//	public String toString(){
//		return "name = "+name +" price = "+price;
//	}
}

public class Ex01 {
	public static void main(String[] args){
		KiaCar kia = new KiaCar("스포티지",2000);
		System.out.println(kia);
	}
}
