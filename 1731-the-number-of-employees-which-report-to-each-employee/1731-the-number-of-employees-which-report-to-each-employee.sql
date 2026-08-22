# Write your MySQL query statement below
WITH manager_dets AS(
    SELECT reports_to,
    COUNT(*) AS counts,
    ROUND(AVG(age),0) AS average_age
    FROM Employees
    WHERE reports_to IS NOT NULL
    GROUP BY reports_to
)
SELECT 
    m.reports_to AS employee_id,
    e.name AS name,
    m.counts AS reports_count,
    m.average_age
FROM manager_dets AS m
JOIN Employees AS e
ON m.reports_to=e.employee_id
ORDER BY m.reports_to 