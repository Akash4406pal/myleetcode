# Write your MySQL query statement below
SELECT r.contest_id,
ROUND(COUNT(*)/(SELECT COUNT(user_id) FROM Users)*100,2) AS percentage
FROM Users AS u
JOIN Register  AS r
ON u.user_id=r.user_id
GROUP BY r.contest_id
ORDER BY percentage DESC,r.contest_id