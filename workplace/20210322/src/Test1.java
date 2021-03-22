
class Test1 {
	public int vartest(int a){
		//	메소드 내에서만 쓰이는 변수를 로컬 변수라고 한다.
		a++;
		return a;
	}
	
	public static void main(String[] args){
		int a = 3;
		Test1 myTest = new Test1();
		a = myTest.vartest(a);
//		myTest.vartest(a);
		System.out.println(a);
	}
}
