# Write your MySQL query statement below
WITH temp AS(
    SELECT requester_id AS id
    FROM RequestAccepted
UNION ALL 
    SELECT accepter_id
    FROM RequestAccepted
)
SELECT 
id,COUNT(*) AS num
FROM temp
GROUP BY id
ORDER BY COUNT(*) DESC
LIMIT 1