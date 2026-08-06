# Write your MySQL query statement below
SELECT request_at AS "Day",
ROUND(SUM(status in("cancelled_by_driver","cancelled_by_client"))/COUNT(*),2) 
AS "Cancellation Rate"
FROM Trips AS t
JOIN Users AS dr
ON dr.users_id=t.driver_id 
JOIN Users as cl 
ON cl.users_id=t.client_id
WHERE request_at BETWEEN '2013-10-01' AND '2013-10-03' AND cl.banned="No" AND dr.banned="No"
GROUP BY request_at
