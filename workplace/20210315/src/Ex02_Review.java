class Box1{
	private String conts;
	
	Box1(String cont){
		this.conts = cont;
	}
	public String toString(){
		return conts;
	}
}


public class Ex02_Review {
	public static void main(String[] args){
		Box1[] ar = new Box1[5];
		System.out.println("length : "+ar.length);
	}
}
