
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
		System.out.println("�ֹε�� ��ȣ : "+regiNum);
		
		if(passNum != 0){
			System.out.println("���� ��ȣ : "+passNum + '\n');
		}
		else{
			System.out.println("������ ������ ���� �ʽ��ϴ�.");
		}
	}
	
	public static void main(String[] args){
		Person jung = new Person(1783419,1234567);
		
		Person hong = new Person(7654321);
		
		jung.showPersonalInfo();
		hong.showPersonalInfo();
	}
}
