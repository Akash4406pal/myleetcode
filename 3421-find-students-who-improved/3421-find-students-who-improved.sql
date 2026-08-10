# Write your MySQL query statement below
WITH first_exam AS(
SELECT student_id,subject,MIN(exam_date) AS examDate
FROM Scores
GROUP BY student_id,subject
HAVING COUNT(*)>=2),
last_exam AS(
SELECT student_id,subject,MAX(exam_date) AS examDate FROM Scores
GROUP BY student_id,subject
HAVING COUNT(*)>=2),
first_score AS(
    SELECT s.student_id,s.subject,s.score FROM first_exam as f
    JOIN Scores as s
    ON f.student_id=s.student_id AND f.subject=s.subject AND f.examDate=s.exam_date
),
last_score AS(
    SELECT s.student_id,s.subject,s.score FROM last_exam as l
    JOIN Scores as s
    ON l.student_id=s.student_id AND l.subject=s.subject AND l.examDate=s.exam_date
)
SELECT f.student_id,f.subject,f.score AS 'first_score',l.score AS 'latest_score' FROM first_score as f
JOIN last_score as l
ON f.student_id=l.student_id AND f.subject=l.subject
WHERE f.score<l.score
ORDER BY f.student_id ASC, f.subject ASC
