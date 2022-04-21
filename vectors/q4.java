import java.sql.*;

class student {
    public static void main(String[] args)
    {
        try{
        class.forName("sun.jdbc.odbc.JdbcOdbcDriver");
        Connection con=DriverManager.getConnection("Jdbc:Odbc:stu");
        Statement st=con.createStatement();
        ResultSet rs=st.excecuteQuery("select * from studin");
        while(rs.next())
            {
                String name=rs.getString(1);
                String rollno=rs.getString(2);
                int m1=rs.getInt(3);
                int m2=rs.getInt(4);
                int m3=rs.getInt(5);
                String dept=rs.getString(6);
                int year=rs.getInt(7);
                System.out.ptintln("Name:" name);
                System.out.ptintln("Roll No.:" rollno);
                System.out.ptintln("Marks1 :" m1);
                System.out.ptintln("Marks2 :" m2);
                System.out.ptintln("Marks3 :" m3);
                System.out.ptintln("Department :" dept);
                System.out.ptintln("Year :" year);
            }
        }
        catch(Exception e){
            System.out.println ("Exception" e);
        }
    }
}