select products.name  from products AS prod 
inner join providers AS prov on prod.id_providers = prov.id 
 where prov.name like 'P%' and prod.amount between 10 and 20;