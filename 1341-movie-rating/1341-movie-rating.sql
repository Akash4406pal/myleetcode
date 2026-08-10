-- # Write your MySQL query statement below
WITH avg_rating AS (
    SELECT M.title,AVG(mr.rating) AS avg_rating FROM MovieRating mr
    JOIN Movies as m
    ON mr.movie_id=m.movie_id
    WHERE mr.created_at BETWEEN '2020-02-01' AND '2020-02-29'
    GROUP BY m.movie_id
)
(SELECT u.name AS results FROM  Users as u
JOIN MovieRating as m
ON m.user_id=u.user_id
GROUP BY u.user_id
ORDER BY COUNT(*) DESC,u.name ASC
LIMIT 1)
UNION ALL
(SELECT title AS results FROM avg_rating
ORDER BY avg_rating DESC,title ASC
LIMIT 1
)