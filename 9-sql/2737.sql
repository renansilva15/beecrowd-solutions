SELECT
  name,
  customers_number

FROM (
  SELECT
    name,
    customers_number,
    1 AS filter

  FROM lawyers
  WHERE customers_number = (SELECT MAX(customers_number) FROM lawyers)

  UNION

  SELECT
    name,
    customers_number,
    2 AS filter

  FROM lawyers
  WHERE customers_number = (SELECT MIN(customers_number) FROM lawyers)

  UNION

  SELECT
    'Average',
    ROUND(AVG(customers_number)),
    3 AS filter

  FROM lawyers

  ORDER BY FILTER
) AS min_max_average;