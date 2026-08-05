# Write your MySQL query statement below
SELECT man.name FROM Employee as emp
JOIN Employee as man
ON emp.managerId=man.id
GROUP BY emp.managerId HAVING COUNT(*)>=5