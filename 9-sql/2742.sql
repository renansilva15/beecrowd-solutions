SELECT
    life_registry.name,
    TRUNC(life_registry.omega * 1.618, 3) AS "The N Factor"

FROM life_registry
JOIN dimensions ON dimensions.id = life_registry.dimensions_id
WHERE dimensions.name IN ('C875', 'C774') AND life_registry.name LIKE 'Richard%'

ORDER BY life_registry.omega;