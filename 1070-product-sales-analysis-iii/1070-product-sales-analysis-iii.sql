# Write your MySQL query statement below
WITH first_year AS(
    SELECT product_id,MIN(year) AS early_year
    FROM Sales
    GROUP BY product_id
)
SELECT s.product_id,f.early_year AS first_year,s.quantity,s.price
FROM Sales AS s 
JOIN first_year AS f
ON s.year=f.early_year AND s.product_id=f.product_id

