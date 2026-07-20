# Write your MySQL query statement below
SELECT emp.name AS Employee
FROM Employee as emp
JOIN Employee as man
ON emp.managerId=man.id
where emp.salary>man.salary