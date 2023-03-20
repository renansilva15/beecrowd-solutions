SELECT
  products.name

FROM products
JOIN providers ON providers.id = products.id_providers
WHERE providers.name LIKE 'P%' AND products.amount BETWEEN 10 AND 20;