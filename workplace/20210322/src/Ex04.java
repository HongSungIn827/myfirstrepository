
public class Ex04 {
	public static void main(String[] args){
		Cake cakes[] = {new Cake(),new CheeseCake(),new Cake()};
		
		for(int i = 0 ; i<cakes.length ; i++)
			cakes[i].yummy();
		
		System.out.println();
		Cake cake11 = new CheeseCake();
		cake11.yummy();
		
		System.out.println();
		CheeseCake cc1 = new CheeseCake();
		cc1.doA();
	}
}
