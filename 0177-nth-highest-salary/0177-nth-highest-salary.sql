CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
      Set N=N-1;
  RETURN (
      # Write your MySQL query statement below.
        select Distinct salary
        from Employee
        order by salary Desc
        limit N,1
  );
END
