class Printer{
	public void doA(){
		System.out.println("doA 함수 입니다.");
	}
	public void doB(){
		System.out.println("doB 함수 입니다.");
	}
	public static void doC(){
		System.out.println("doC 함수 입니다.");
	}
	public static void doD(){
		System.out.println("doD 함수 입니다.");
	}
}

public class Ex03 {
	public static void main(String[] args){
		Printer pi = new Printer();
		pi.doA();
		pi.doB();
//		Printer.doA();
//		Printer.doB();
		Printer.doC();
		Printer.doD();
	}
}
