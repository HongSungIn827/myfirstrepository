
public class Employee {
	private String name;
	private String Jumin;
	private int sal;
	public void setName(String name){
		this.name = name;
	}
	
	public void setJumin(String jumin) {
		Jumin = jumin;
	}

	public void setSal(int sal) {
		this.sal = sal;
	}

	public void doPrint(){
		System.out.println("�̸�"+name);
		System.out.println("�ֹ�"+Jumin);
		System.out.println("����"+sal);
	}
}
