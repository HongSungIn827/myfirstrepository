
class Person {
	private int regiNum;
	private int passNum;
	
	Person(int rnum, int pnum){
		regiNum = rnum;
		passNum = pnum;
	}
	
	Person(int rnum){
		regiNum = rnum;
		passNum = 0;
	}
	
	void showPersonalInfo(){
		System.out.println("주민등록 번호 : "+regiNum);
		
		if(passNum != 0){
			System.out.println("여권 번호 : "+passNum + '\n');
		}
		else{
			System.out.println("여권을 가지고 있지 않습니다.");
		}
	}
	
	public static void main(String[] args){
		Person jung = new Person(1783419,1234567);
		
		Person hong = new Person(7654321);
		
		jung.showPersonalInfo();
		hong.showPersonalInfo();
	}
}
