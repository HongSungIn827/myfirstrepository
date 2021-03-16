import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.Scanner;

public class ManagerBtable {
	Scanner scan = new Scanner(System.in);
	Connection conn = null;
	PreparedStatement pstmt = null;
	
	
	public void insertBtable(){
		String idx = null;
		String voc = null;
		String syn = null;
		String sen = null;
		
		System.out.println("번호입력");
		idx = scan.nextLine();
		System.out.println("단어입력");
		voc = scan.nextLine();
		System.out.println("동의어입력");
		syn = scan.nextLine();
		System.out.println("문장입력");
		sen = scan.nextLine();
		
		Connection conn = null;
		PreparedStatement pstmt = null;
		
		// 소문자->대문자 전환 : ctrl + shift + x
		
		try{
			Class.forName("oracle.jdbc.driver.OracleDriver");
			conn = DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:xe","AI","1234");
			System.out.println("DB연결성공");
			pstmt = conn.prepareStatement("INSERT INTO BTABLE "+
										  "(IDX,VOC,SYN,SEN) "+
										  "VALUES "+
										  "(?,?,?,?)");
			pstmt.setString(1, idx);
			pstmt.setString(2, voc);
			pstmt.setString(3, syn);
			pstmt.setString(4, sen);
			
			pstmt.executeUpdate();
			
		}catch(Exception e){
			System.out.println("error 클래스 파일 없음");
		}
		finally{
			try {
				conn.close();
			} catch(SQLException e) {
				e.printStackTrace();
			}
		}
	}
	
	public void updateBtable(){
		String idx = null;
		String voc = null;
		String syn = null;
		String sen = null;
		
		System.out.println("번호입력");
		idx = scan.nextLine();
		System.out.println("단어입력");
		voc = scan.nextLine();
		System.out.println("동의어입력");
		syn = scan.nextLine();
		System.out.println("문장입력");
		sen = scan.nextLine();
		
		Connection conn = null;
		PreparedStatement pstmt = null;
		
		try{
			Class.forName("oracle.jdbc.driver.OracleDriver");
			conn = DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:xe","AI","1234");
			System.out.println("DB연결성공");
			pstmt = conn.prepareStatement("update btable "+
										  "set voc=?,syn=?,sen=?"+
										  "where idx = ?");
			pstmt.setString(1, voc);
			pstmt.setString(2, syn);
			pstmt.setString(3, sen);
			pstmt.setString(4, idx);
			
			pstmt.executeUpdate();
			
		}catch(Exception e){
			System.out.println("error 클래스 파일 없음");
		}
		finally{
			try {
				conn.close();
			} catch(SQLException e){
				e.printStackTrace();
			}
		}
	}
	
	public void deleteBtable(){
		
	}
	
	public void selectBtable(){
		Connection conn = null;					//DB 연결 객체
		PreparedStatement pstmt = null;			//SQL 구문작성 객체
		ResultSet rs = null;					//TABLE 내용담는 객체
		
		try{
			Class.forName("oracle.jdbc.driver.OracleDriver");
			conn = DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:xe","AI","1234");
			pstmt = conn.prepareStatement("select * from btable");
			rs = pstmt.executeQuery();
			while(rs.next()){
//				System.out.println("줄 번호 : " + rs.getRow());
				System.out.print(rs.getString(1)+" ");
				System.out.print(rs.getString(2)+" ");
				System.out.print(rs.getString(3)+" ");
				System.out.println(rs.getString(4));
			}
			
		}catch(Exception e){
			e.printStackTrace();
		}
		finally{
			try{
				if(rs != null) rs.close();
				if(pstmt != null) pstmt.close();
				if(conn != null) conn.close();
			}catch(Exception e){}
		}
	}
}
