
public class Test {
	int a;
	
	public void vartest(){
		this.a++;
	}
	
	public static void main(String[] args){
		Test myTest = new Test();
		myTest.a = 3;
		myTest.vartest();
		System.out.println(myTest.a);
	}
}
