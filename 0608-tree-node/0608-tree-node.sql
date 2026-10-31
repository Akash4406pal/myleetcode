# Write your MySQL query statement below
WITH dets AS(
    SELECT t.id,(t.p_id IS NOT NULL )AS hasparent,t.id NOT IN(SELECT p_id FROM Tree WHERE p_id IS NOT NULL GROUP BY p_id) AS isLeaf 
    FROM Tree AS t
)
SELECT  d.id,
CASE WHEN d.hasparent=TRUE AND d.isLeaf=FALSE THEN 'Inner'
WHEN d.hasparent=FALSE THEN 'Root'
WHEN d.isLeaf=TRUE THEN 'Leaf'
END AS type
FROM dets AS d
