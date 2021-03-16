class SuperCls{
	SuperCls(){System.out.println("부모기본생성자");}
	SuperCls(int a){System.out.println("부모a = "+a);}
	SuperCls(int a, int b){
		System.out.println("부모a = "+a); 
		System.out.println("부모b = "+b);}
}
class SubCls extends SuperCls{
	SubCls(){
		super();
		System.out.println("자식기본생성자");
	}
	SubCls(int a){
		super(a);
		System.out.println("a = "+a);
	}
	SubCls(int a, int b){
		super(a,b);
		System.out.println("a = "+a);
		System.out.println("b = "+b);
	}
}
public class Ex03 {
	
	public static void main(String[] args){
		new SubCls();
		new SubCls(10);
		new SubCls(10,20);
	}
}
