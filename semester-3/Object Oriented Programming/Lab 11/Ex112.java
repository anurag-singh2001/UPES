import java.sql.*;
public class Ex112{
    public static void main(String[] args) {
        try{
            final String DB_URL = "jdbc:mysql://localhost:3306/Employee";
            final String USER = "root";
            final String Password = "1965";
            Class.forName("com.mysql.jdbc.Driver");
            Connection con = DriverManager.getConnection(DB_URL,USER,Password);
            Statement smt = con.createStatement();
            String sqlInsert = "insert into emp_db values(01,'Aman Chauhan','IT',2500),"+
                                "(02,'Yash Raj','Sales',2500),"+
                                "(03,'Aelish Kumar','IT',2500)";
            smt.executeUpdate(sqlInsert);
            System.out.println("Values Successfully Added");
            ResultSet rs = smt.executeQuery("Select * from emp_db");
            System.out.println("Values Stored in Employee Table :");
            while(rs.next()){
                System.out.println(rs.getInt(1)+" "+rs.getString(2)+" "+rs.getString(3)+" "+rs.getInt(4));
            }
            con.close();
        }
        catch(Exception e){
            System.out.println(e);
        }
    }
}