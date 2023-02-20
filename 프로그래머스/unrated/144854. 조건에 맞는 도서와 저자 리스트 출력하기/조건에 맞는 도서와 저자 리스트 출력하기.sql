-- 코드를 입력하세요
SELECT b.book_id AS BOOK_ID, a.author_name AS AUTHOR_NAME, DATE_FORMAT(b.published_date,'%Y-%m-%d')  AS PUBLISHED_DATE
FROM book b INNER JOIN author a
ON b.author_id = a.author_id
WHERE b.category = '경제' 
ORDER BY PUBLISHED_DATE ASC