
public class CheeseCake extends Cake{
	@Override
	public void yummy(){
		super.yummy();
		System.out.println("CheeseCake");
	}
	
	public void doA(){
		super.yummy();
		System.out.println("doA합수");
		yummy();
	}
}
