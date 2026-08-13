# Write your MySQL query statement below
WITH first_order AS(
    SELECT MIN(order_date) AS first_order_date,customer_id
    FROM Delivery
    GROUP BY customer_id
)
SELECT ROUND(COUNT(CASE WHEN d.order_date=d.customer_pref_delivery_date THEN 1 END)/COUNT(*)*100,2) AS immediate_percentage
FROM Delivery AS d
JOIN first_order AS f
ON f.first_order_date=d.order_date AND f.customer_id=d.customer_id