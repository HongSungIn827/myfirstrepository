import java.lang.*;

class AAA{
	public static void doA(String a){
		System.out.println(a);
	}
}

public class Ex05 {
	int a = 10;
	public void doB(){
		System.out.println(this.a);
	}
	public static AAA aa = new AAA();
	
	public static void main(String[] args){
		
		System.out.println("test");
		Ex05.aa.doA("test");
	}
}
