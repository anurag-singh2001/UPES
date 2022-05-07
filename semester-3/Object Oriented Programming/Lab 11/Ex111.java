import java.sql.*;
class Ex111{
    public static void main(String[] args) {
        try{
            final String DB_URL = "jdbc:mysql://localhost:3306/Employee";
            final String USER = "root";
            final String Password = "root";
            Class.forName("com.mysql.jdbc.Driver");
            Connection con = DriverManager.getConnection(DB_URL,USER,Password);
            Statement smt = con.createStatement();
            String sqlTable = "Create table emp_db"+
                "(emp_id int,"+
                "Name varchar(250),"+
                "Department varchar(30),"+
                "Increment int)";
            smt.executeUpdate(sqlTable);
            System.out.println("Table Successfully Created!");
            con.close();
        }
        catch(Exception e){
            System.out.println(e);
        }
    }
}