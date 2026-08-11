# Write your MySQL query statement below
WITH salary_ranked AS(
    SELECT departmentId,name,salary,
    DENSE_RANK() OVER(PARTITION BY departmentId ORDER BY salary DESC) AS salary_rank
    FROM Employee
)
SELECT d.name AS 'Department',s.name AS 'Employee',s.salary AS 'Salary'
FROM Department AS d
JOIN salary_ranked AS s
ON d.id=s.departmentId
WHERE s.salary_rank<=3