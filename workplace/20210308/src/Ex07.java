
public class Ex07 {
	Ex07(){}
	Ex07(int a){System.out.println("a = "+a);}
	public static void doA(int a){
		System.out.println("a = "+a);
	}
	public static void doA(int a,int b){
		System.out.println("a = "+a);
		System.out.println("b = "+b);
	}
	public static void main(String[] args){
		doA(5);
		doA(5,10);
		new Ex07();
		new Ex07(10);
	}
}
