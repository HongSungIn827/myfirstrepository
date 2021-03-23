interface A{
	public void doA(String a);
}
public class Ex01 implements A{
	public static void main(String[] args){
		Ex01 ex01 = new Ex01();
		ex01.doA("test");
		
//		A a1 = new A();
		
		A a = new A(){
			public void doA(String s){
				
			}
		};
	}

	@Override
	public void doA(String a) {
		System.out.println("doA 함수 입니다");
		
	}
}
