class A{
	public static int a = 10;
	
	public static void doA(){
		System.out.println("static doA �Դϴ�.");
	}
	
	private void doB(){
		System.out.println("private doB�Դϴ�.");
	}
	
	public void doC(){
		System.out.println("public doC�Դϴ�.");
	}
}

public class Ex01 {
	public static void main(String[] args){
		A.doA();
		System.out.println(A.a);
		A a = new A();
//		a.doB();
		a.doC();
	}
}