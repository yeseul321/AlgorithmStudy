-- 코드를 입력하세요
SELECT P.PRODUCT_CODE, (P.PRICE * G.amount) as SALES
FROM PRODUCT as P join (SELECT PRODUCT_ID, SUM(SALES_AMOUNT) as amount from offline_sale group by product_id) as G on P.product_id = G.product_id
order by sales desc, P.product_code;