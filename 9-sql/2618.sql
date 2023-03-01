SELECT
  products.name,
  providers.name,
  categories.name

FROM products
JOIN providers ON providers.id = products.id_providers
JOIN categories ON categories.id = products.id_categories

WHERE providers.name = 'Sansul SA' AND categories.name = 'Imported';