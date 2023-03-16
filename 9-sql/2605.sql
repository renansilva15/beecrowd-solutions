SELECT
	products.name,
	providers.name

FROM products
join categories
	ON categories.id = products.id_categories
join providers
	ON providers.id = products.id_providers

where products.id_categories = 6;