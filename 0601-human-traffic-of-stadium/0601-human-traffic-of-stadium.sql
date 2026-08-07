# Write your MySQL query statement below
WITH cond1 AS(
SELECT
    id,
    visit_date,
    people,
    (id - ROW_NUMBER() OVER(ORDER BY id)) AS group_id
FROM Stadium
WHERE people>=100),
cond2 AS(
    SELECT group_id
    FROM cond1
    GROUP BY group_id
    HAVING count(*)>=3
)
SELECT 
    id,
    visit_date,
    people 
FROM cond1 WHERE group_id IN(SELECT group_id FROM cond2)
ORDER BY visit_date;