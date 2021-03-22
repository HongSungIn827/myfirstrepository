
public class Manager {
	public static void main(String[] args){
		Friend[] friends = new Friend[10];
		
		friends[0] = new UniFriend("대학친구1","01011110247","컴공");
		friends[1] = new UniFriend("대학친구2","01022220247","컴공");
		
		friends[1] = new ComFriend("직장친구2","01033330247","개발1");
		friends[1] = new ComFriend("직장친구2","01044440247","개발2");
		
		for(int i = 0 ; i < friends.length ; i++){
			System.out.println("friends["+i+"]"+friends[i]);
		}
	}
}
