INSERT INTO Rep (RID, RNAME, RAGE, SALARY) VALUES (11111, 'Mary Peters', 42, 150000);
COMMIT;

INSERT INTO Rep (RID, RNAME, RAGE, SALARY) VALUES (22222, 'Steve Markel', 25, 221000);
COMMIT;
INSERT INTO Rep (RID, RNAME, RAGE, SALARY) VALUES (33333, 'Melanie Good', 61, 188000);
COMMIT;
INSERT INTO Rep (RID, RNAME, RAGE, SALARY) VALUES (44444, 'John Doe', 36, 85000);
COMMIT;

INSERT INTO Area (ARID, ANAME, CITY, BUDGET) VALUES ('WDT', 'Down Town', 'Windsor', 500000.99);
COMMIT;
INSERT INTO Area (ARID, ANAME, CITY, BUDGET) VALUES ('SW', 'South Windsor', 'Windsor',                950000.00);
COMMIT;
INSERT INTO Area (ARID, ANAME, CITY, BUDGET) VALUES ('TN', 'Tecumseh North', 'Tecumseh', 420000.50);
COMMIT;

INSERT INTO Product (PRID, PNAME, PDESC, PRICE) VALUES (1, 'pots', 'cookware', 101.00);
COMMIT;
INSERT INTO Product (PRID, PNAME, PDESC, PRICE) VALUES (2, 'towels', 'bath supply', 45.50);
COMMIT;
INSERT INTO Product (PRID, PNAME, PDESC, PRICE) VALUES (3, 'apple basket', 'fruit', 30.30);
COMMIT;
INSERT INTO Product (PRID, PNAME, PDESC, PRICE) VALUES (4, 'potato bag', 'food', 5.50);
COMMIT;

INSERT INTO RepSellsArea (RID, ARID, hours, revenue) VALUES ('11111', 'TN', '12', 20000.00);
COMMIT;
INSERT INTO RepSellsArea (RID, ARID, hours, revenue) VALUES (11111, 'SW', 10, 1500.00);
COMMIT;
INSERT INTO RepSellsArea (RID, ARID, hours, revenue) VALUES (33333, 'SW', 33, 40000.00);
COMMIT;
INSERT INTO RepSellsArea (RID, ARID, hours, revenue) VALUES (44444, 'WDT', 28, 37200.00);
COMMIT;

INSERT INTO RepSellsProduct (RID, PRID, hours, revenue) VALUES (11111, 1, 6, 2000.00);
COMMIT;
INSERT INTO RepSellsProduct (RID, PRID, hours, revenue) VALUES (11111, 2, 10, 4500.00);
COMMIT;
INSERT INTO RepSellsProduct (RID, PRID, hours, revenue) VALUES (33333, 2, 20, 9000.00);
COMMIT;

INSERT INTO RepSellsProduct (RID, PRID, hours, revenue) VALUES (44444, 4, 12, 3300.00);
COMMIT;

INSERT INTO AreaSellsProduct (ARID, PRID, hours, revenue) VALUES ('WDT', 1, 18, 2000.00);
COMMIT;
INSERT INTO AreaSellsProduct (ARID, PRID, hours, revenue) VALUES ('WDT', 2, 12, 6600.00);
COMMIT;
INSERT INTO AreaSellsProduct (ARID, PRID, hours, revenue) VALUES ('SW', 2, 20, 9000.00);
COMMIT;
INSERT INTO AreaSellsProduct (ARID, PRID, hours, revenue) VALUES ('TN', 4, 12, 3300.00);
COMMIT;
