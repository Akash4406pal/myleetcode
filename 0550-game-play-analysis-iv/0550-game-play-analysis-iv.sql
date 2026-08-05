# Write your MySQL query statement below
WITH player_det AS(
    SELECT player_id,MIN(event_date) AS login_date FROM Activity
    GROUP BY player_id
)
SELECT ROUND(count(*)/(SELECT COUNT(*) FROM player_det),2) AS fraction
FROM Activity AS a
JOIN player_det as pd
ON pd.player_id=a.player_id
AND a.event_date = DATE_ADD(pd.login_date, INTERVAL 1 DAY)