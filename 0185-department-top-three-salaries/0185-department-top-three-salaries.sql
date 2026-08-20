# Write your MySQL query statement below
SELECT Department, Employee, Salary
FROM (
    SELECT 
        d.name AS Department,
        e.name AS Employee,
        e.salary AS Salary,
        DENSE_RANK() OVER (
            PARTITION BY d.id 
            ORDER BY e.salary DESC
        ) AS rnk
    FROM Department d
    JOIN Employee e
        ON e.departmentId = d.id
) x
WHERE rnk <= 3;