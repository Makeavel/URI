select products.name , providers.name , products.price from products
inner join providers ON products.id_providers = providers.id
inner join categories ON products.id_categories = categories.id
where price > 1000 and categories.name like "Super Luxury"