# Write your MySQL query statement below
SELECT s.name FROM SalesPerson AS s
WHERE sales_id NOT IN(
SELECT o.sales_id  from Orders AS o
JOIN Company AS c
ON o.com_id=c.com_id
WHERE c.name='RED'
GROUP BY o.sales_id)