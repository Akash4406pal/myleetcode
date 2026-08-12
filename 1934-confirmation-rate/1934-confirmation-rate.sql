# Write your MySQL query statement below
WITH conf_rate AS(
    SELECT user_id, ROUND(COUNT(CASE WHEN action = 'confirmed' THEN 1 END)/COUNT(*),2) AS rate 
    FROM Confirmations
    GROUP BY user_id
)
SELECT s.user_id,IFNULL(c.rate,0) AS confirmation_rate
FROM Signups AS s
LEFT JOIN Conf_rate AS c
ON s.user_id=c.user_id
