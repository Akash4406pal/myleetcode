# Write your MySQL query statement below
DELETE p1
FROM Person P1,Person P2
WHERE P1.email=P2.email
AND P1.id>p2.id;