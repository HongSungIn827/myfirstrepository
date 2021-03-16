
public class Man extends BusinessMan {
	
	private String company;
	private String position;
	
	Man(){
		super();
		System.out.println("MAN 생성자");
	}
	
	Man(String company, String position, String name){
		this.company = company;
		this.position = position;
		super.name = name; 
	}
	
	public void tellYourInfo(){
		System.out.println("company "+company);
		System.out.println("position "+position);
		tellName();
	}
	
	public static void main(String[] args){
		Man man = new Man("카카오","개발팀","홍성인");
		man.tellYourInfo();
	}

}
