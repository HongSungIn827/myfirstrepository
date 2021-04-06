class MobilePhone{
	protected int number;
	MobilePhone(int number){
		this.number = number;
	}
	public void answer(){
		System.out.println("전화번호"+ number+"가 응답하고 있습니다.");
	}
}
class Aphone extends MobilePhone{
	Aphone(int number){
		super(number);
		
	}
}
public class Ex02 extends MobilePhone{
	private String ver;
	Ex02(String ver,int number){
		super(number);
		this.ver = ver;
	}
	public void version(){
		System.out.println("version = "+ver);
	}
	public static void main(String[] args){
		Ex02 sp = new Ex02("버전8.0",1099462662);
		sp.answer();
		sp.version();
		
		MobilePhone mp = new Ex02("버전 7.0",01035370247);
		Ex02 sp1 = (Ex02)mp;
		sp1.version();
	}
}
