
public class Test {
	public int sum(int a,int b){
		return a+b;
	}
	
	public String say(){
		return "Hi";
	}
	
	public void sum1(int e,int f){
		System.out.println(e+"와"+f+"의 합은"+(e+f)+"입니다.");
	}
	
	public void say1(){
		System.out.println("Seize the day!");
	}
	
	public static void main(String[] args){
		int a = 3;
		int b = 4;
		
		Test myTest = new Test();
		int c = myTest.sum(a, b);
		
		Test myTest1 = new Test();
		String d = myTest1.say();
		
		Test myTest2 = new Test();
		myTest2.sum1(5, 7);
		
		Test myTest3 = new Test();
		myTest3.say1();
		
		System.out.println(c);
		System.out.println(d);
	}
}
