BEGIN TRANSACTION;
CREATE TABLE IF NOT EXISTS "personne" (
	"id_personne"	INT,
	"nom"	VARCHAR(50),
	"email"	VARCHAR(50),
	"prenom"	VARCHAR(50),
	PRIMARY KEY("id_personne")
);
CREATE TABLE IF NOT EXISTS "liste_ville" (
	"id_liste_ville"	INT,
	"ville"	VARCHAR(50),
	PRIMARY KEY("id_liste_ville")
);
CREATE TABLE IF NOT EXISTS "remise_unitaire" (
	"id_remise_unitaire"	INT,
	"nb_min"	INT,
	"nb_max"	INT,
	"valeur_remise_unitaire"	DECIMAL(15, 2),
	PRIMARY KEY("id_remise_unitaire")
);
CREATE TABLE IF NOT EXISTS "role" (
	"Id_role"	COUNTER,
	"departement"	VARCHAR(50),
	PRIMARY KEY("Id_role")
);
CREATE TABLE IF NOT EXISTS "remise" (
	"id_remise"	INT,
	"nom"	VARCHAR(50),
	"valeur"	DECIMAL(15, 2),
	PRIMARY KEY("id_remise")
);
CREATE TABLE IF NOT EXISTS "facture" (
	"id_facture"	INT,
	"nom_client"	VARCHAR(50),
	"code_client"	INT,
	"adresse_livraison"	VARCHAR(50),
	"adresse_facturation"	VARCHAR(50),
	"montant_total_HT"	DECIMAL(15, 2),
	"montant_total_TVA"	DECIMAL(15, 2),
	"montant_total_TTC"	DECIMAL(15, 2),
	"date_commande"	DATE,
	PRIMARY KEY("id_facture")
);
CREATE TABLE IF NOT EXISTS "adresse" (
	"id_adresse"	INT,
	"numero"	INT,
	"type_voie"	VARCHAR(50),
	"nom_voie"	VARCHAR(50),
	"code_postal"	VARCHAR(50),
	"id_liste_ville"	INT NOT NULL,
	FOREIGN KEY("id_liste_ville") REFERENCES "liste_ville"("id_liste_ville"),
	PRIMARY KEY("id_adresse")
);
CREATE TABLE IF NOT EXISTS "personnel" (
	"id_personnel"	INT,
	"date_embauche"	INT,
	"id_superieur"	INT,
	"mot_de_passe"	VARCHAR(50),
	"Id_role"	INT NOT NULL,
	"id_adresse"	INT NOT NULL,
	"id_personne"	INT NOT NULL,
	UNIQUE("id_personne"),
	FOREIGN KEY("id_adresse") REFERENCES "adresse"("id_adresse"),
	FOREIGN KEY("Id_role") REFERENCES "role"("Id_role"),
	PRIMARY KEY("id_personnel"),
	FOREIGN KEY("id_personne") REFERENCES "personne"("id_personne")
);
CREATE TABLE IF NOT EXISTS "client" (
	"id_client"	INT,
	"date_naissance"	DATE,
	"id_adresse"	INT NOT NULL,
	"id_adresse_1"	INT NOT NULL,
	"id_personne"	INT NOT NULL,
	UNIQUE("id_personne"),
	PRIMARY KEY("id_client"),
	FOREIGN KEY("id_adresse_1") REFERENCES "adresse"("id_adresse"),
	FOREIGN KEY("id_personne") REFERENCES "personne"("id_personne"),
	FOREIGN KEY("id_adresse") REFERENCES "adresse"("id_adresse")
);
CREATE TABLE IF NOT EXISTS "commande" (
	"id_commande"	INT,
	"reference"	VARCHAR(50),
	"date_emission"	DATE,
	"date_livraison"	DATE,
	"id_client"	INT NOT NULL,
	PRIMARY KEY("id_commande"),
	FOREIGN KEY("id_client") REFERENCES "client"("id_client")
);
CREATE TABLE IF NOT EXISTS "article" (
	"id_article"	INT,
	"reference"	VARCHAR(50),
	"designation"	VARCHAR(50),
	"prix_ht"	DECIMAL(15, 2),
	"quantite_stock"	DECIMAL(15, 2),
	"seuil_reapprovisionnement"	INT,
	"reduc_nombre"	LOGICAL,
	"id_unite"	INT NOT NULL,
	"id_couleur"	INT NOT NULL,
	PRIMARY KEY("id_article"),
	FOREIGN KEY("id_couleur") REFERENCES "couleur"("id_couleur"),
	FOREIGN KEY("id_unite") REFERENCES "unite"("id_unite")
);
CREATE TABLE IF NOT EXISTS "couleur" (
	"id_couleur"	INT,
	"nom_couleur"	VARCHAR(50),
	PRIMARY KEY("id_couleur")
);
CREATE TABLE IF NOT EXISTS "unite" (
	"id_unite"	INT,
	"nom_unite"	VARCHAR(50),
	PRIMARY KEY("id_unite")
);
CREATE TABLE IF NOT EXISTS "nature" (
	"id_nature"	INT,
	"nom_nature"	VARCHAR(50),
	PRIMARY KEY("id_nature")
);
CREATE TABLE IF NOT EXISTS "caracterise" (
	"id_article"	INT,
	"id_nature"	INT,
	PRIMARY KEY("id_article","id_nature"),
	FOREIGN KEY("id_nature") REFERENCES "nature"("id_nature"),
	FOREIGN KEY("id_article") REFERENCES "article"("id_article")
);
CREATE TABLE IF NOT EXISTS "payement" (
	"id_payement"	INT,
	"date_reglement"	DATE,
	"montant"	DECIMAL(15, 2),
	"moyen"	VARCHAR(50),
	"id_commande"	INT NOT NULL,
	PRIMARY KEY("id_payement"),
	FOREIGN KEY("id_commande") REFERENCES "commande"("id_commande")
);
CREATE TABLE IF NOT EXISTS "s_applique" (
	"id_commande"	INT,
	"id_remise"	INT,
	"id_remise_1"	INT,
	PRIMARY KEY("id_commande"),
	FOREIGN KEY("id_remise_1") REFERENCES "remise"("id_remise"),
	FOREIGN KEY("id_commande") REFERENCES "commande"("id_commande"),
	FOREIGN KEY("id_remise") REFERENCES "remise"("id_remise")
);
CREATE TABLE IF NOT EXISTS "conteneur" (
	"id_conteneur"	INT,
	"quantite"	DECIMAL(15, 2),
	"remise_unitaire_exceptionel"	DECIMAL(15, 2),
	"remise_unitaire_nombre"	DECIMAL(15, 2),
	"id_commande"	INT,
	"id_article"	INT,
	PRIMARY KEY("id_conteneur"),
	FOREIGN KEY("id_commande") REFERENCES "commande"("id_commande"),
	FOREIGN KEY("id_article") REFERENCES "article"("id_article")
);
INSERT INTO "personne" ("id_personne","nom","email","prenom") VALUES (1,'Buckoke','dbuckoke0@umich.edu','Duffie');
INSERT INTO "personne" ("id_personne","nom","email","prenom") VALUES (2,'Fateley','tfateley1@prlog.org','Tate');
INSERT INTO "personne" ("id_personne","nom","email","prenom") VALUES (3,'Keemer','tkeemer2@comsenz.com','Tanitansy');
INSERT INTO "personne" ("id_personne","nom","email","prenom") VALUES (4,'Copnall','zcopnall3@hatena.ne.jp','Zorina');
INSERT INTO "personne" ("id_personne","nom","email","prenom") VALUES (5,'Elderfield','aelderfield4@reference.com','Abbe');
INSERT INTO "personne" ("id_personne","nom","email","prenom") VALUES (6,'Hessenthaler','khessenthaler5@chicagotribune.com','Karry');
INSERT INTO "personne" ("id_personne","nom","email","prenom") VALUES (7,'Simms','gsimms6@people.com.cn','Gertruda');
INSERT INTO "personne" ("id_personne","nom","email","prenom") VALUES (8,'Telega','ttelega7@vistaprint.com','Thelma');
INSERT INTO "personne" ("id_personne","nom","email","prenom") VALUES (9,'Burlingame','iburlingame8@msn.com','Isaak');
INSERT INTO "personne" ("id_personne","nom","email","prenom") VALUES (10,'Stainland','sstainland9@etsy.com','Smith');
INSERT INTO "personne" ("id_personne","nom","email","prenom") VALUES (11,'Shovelbottom','ishovelbottoma@diigo.com','Isis');
INSERT INTO "personne" ("id_personne","nom","email","prenom") VALUES (12,'Haet','fhaetb@sfgate.com','Franz');
INSERT INTO "personne" ("id_personne","nom","email","prenom") VALUES (13,'Gleadhall','rgleadhallc@joomla.org','Rogerio');
INSERT INTO "personne" ("id_personne","nom","email","prenom") VALUES (14,'Jiruca','mjirucad@europa.eu','Martie');
INSERT INTO "personne" ("id_personne","nom","email","prenom") VALUES (15,'Collum','acollume@prnewswire.com','Augustina');
INSERT INTO "personne" ("id_personne","nom","email","prenom") VALUES (16,'Chetham','gchethamf@ehow.com','Glenda');
INSERT INTO "personne" ("id_personne","nom","email","prenom") VALUES (17,'Antognelli','gantognellig@ft.com','Gordy');
INSERT INTO "personne" ("id_personne","nom","email","prenom") VALUES (18,'Sarten','bsartenh@sciencedaily.com','Bax');
INSERT INTO "personne" ("id_personne","nom","email","prenom") VALUES (19,'Kix','tkixi@tuttocitta.it','Towney');
INSERT INTO "personne" ("id_personne","nom","email","prenom") VALUES (20,'Salmon','hsalmonj@icq.com','Hally');
INSERT INTO "personne" ("id_personne","nom","email","prenom") VALUES (21,'Espinal','cespinalk@deliciousdays.com','Cassie');
INSERT INTO "personne" ("id_personne","nom","email","prenom") VALUES (22,'Grelak','ogrelakl@example.com','Opaline');
INSERT INTO "personne" ("id_personne","nom","email","prenom") VALUES (23,'Bisco','abiscom@engadget.com','Aluino');
INSERT INTO "personne" ("id_personne","nom","email","prenom") VALUES (24,'Bodycote','kbodycoten@ustream.tv','Keelia');
INSERT INTO "personne" ("id_personne","nom","email","prenom") VALUES (25,'Duffield','sduffieldo@360.cn','Shea');
INSERT INTO "personne" ("id_personne","nom","email","prenom") VALUES (26,'Garrison','rgarrisonp@pinterest.com','Rebekah');
INSERT INTO "personne" ("id_personne","nom","email","prenom") VALUES (27,'Lamble','llambleq@ifeng.com','Lindon');
INSERT INTO "personne" ("id_personne","nom","email","prenom") VALUES (28,'Mollene','gmollener@php.net','Godart');
INSERT INTO "personne" ("id_personne","nom","email","prenom") VALUES (29,'Drable','mdrables@ycombinator.com','Mamie');
INSERT INTO "personne" ("id_personne","nom","email","prenom") VALUES (30,'Dimmne','edimmnet@live.com','Edin');
INSERT INTO "personne" ("id_personne","nom","email","prenom") VALUES (31,'Sejean','aniss.Sejean@viacesi.fr','Aniss');
INSERT INTO "personne" ("id_personne","nom","email","prenom") VALUES (32,'Eudier','axel.eudier@viacesi.fr','Axel');
INSERT INTO "personne" ("id_personne","nom","email","prenom") VALUES (33,'Barrull','clyde.barrull@viacesi.fr','Clyde');
INSERT INTO "personne" ("id_personne","nom","email","prenom") VALUES (34,'Abba','lilia.abba@viacesi.fr','Lilia');
INSERT INTO "liste_ville" ("id_liste_ville","ville") VALUES (1,'Paris');
INSERT INTO "liste_ville" ("id_liste_ville","ville") VALUES (2,'Berlin');
INSERT INTO "liste_ville" ("id_liste_ville","ville") VALUES (3,'Rome');
INSERT INTO "liste_ville" ("id_liste_ville","ville") VALUES (4,'Rio');
INSERT INTO "liste_ville" ("id_liste_ville","ville") VALUES (5,'Mexico');
INSERT INTO "liste_ville" ("id_liste_ville","ville") VALUES (6,'Rouen');
INSERT INTO "liste_ville" ("id_liste_ville","ville") VALUES (7,'Anvers');
INSERT INTO "liste_ville" ("id_liste_ville","ville") VALUES (8,'Rotterdam');
INSERT INTO "liste_ville" ("id_liste_ville","ville") VALUES (9,'Bruxelles');
INSERT INTO "liste_ville" ("id_liste_ville","ville") VALUES (10,'La Valette');
INSERT INTO "liste_ville" ("id_liste_ville","ville") VALUES (11,'Sydney');
INSERT INTO "liste_ville" ("id_liste_ville","ville") VALUES (12,'Fort-de-France');
INSERT INTO "liste_ville" ("id_liste_ville","ville") VALUES (13,'Calcuta');
INSERT INTO "liste_ville" ("id_liste_ville","ville") VALUES (14,'Sasebo');
INSERT INTO "liste_ville" ("id_liste_ville","ville") VALUES (15,'Madrid');
INSERT INTO "role" ("Id_role","departement") VALUES (0,'admin');
INSERT INTO "role" ("Id_role","departement") VALUES (1,'manager');
INSERT INTO "role" ("Id_role","departement") VALUES (2,'employe');
INSERT INTO "remise" ("id_remise","nom","valeur") VALUES (1,'black Friday',40);
INSERT INTO "remise" ("id_remise","nom","valeur") VALUES (2,'tva',20);
INSERT INTO "remise" ("id_remise","nom","valeur") VALUES (3,'anniversaire_client',10);
INSERT INTO "remise" ("id_remise","nom","valeur") VALUES (4,'anniversaire_commande',5);
INSERT INTO "remise" ("id_remise","nom","valeur") VALUES (5,'solde',15);
INSERT INTO "facture" ("id_facture","nom_client","code_client","adresse_livraison","adresse_facturation","montant_total_HT","montant_total_TVA","montant_total_TTC","date_commande") VALUES (1,'Janicek','client-kkb66','9104 Pankratz Plaza','5477 Springview Place',674,694,694,'10/10/2022');
INSERT INTO "facture" ("id_facture","nom_client","code_client","adresse_livraison","adresse_facturation","montant_total_HT","montant_total_TVA","montant_total_TTC","date_commande") VALUES (2,'Grimbaldeston','client-tca78','29753 Waxwing Alley','85893 Sycamore Parkway',229,260,260,'2/17/2022');
INSERT INTO "facture" ("id_facture","nom_client","code_client","adresse_livraison","adresse_facturation","montant_total_HT","montant_total_TVA","montant_total_TTC","date_commande") VALUES (3,'Lacy','client-zbb71','1 Magdeline Parkway','1 Surrey Junction',120,145,145,'3/24/2022');
INSERT INTO "facture" ("id_facture","nom_client","code_client","adresse_livraison","adresse_facturation","montant_total_HT","montant_total_TVA","montant_total_TTC","date_commande") VALUES (4,'Lawlee','client-omp21','20 Sunnyside Circle','8927 Parkside Way',80,92,92,'9/18/2022');
INSERT INTO "facture" ("id_facture","nom_client","code_client","adresse_livraison","adresse_facturation","montant_total_HT","montant_total_TVA","montant_total_TTC","date_commande") VALUES (5,'Wieprecht','client-gol04','12 Pepper Wood Center','91 Grayhawk Terrace',40,45,45,'11/18/2022');
INSERT INTO "facture" ("id_facture","nom_client","code_client","adresse_livraison","adresse_facturation","montant_total_HT","montant_total_TVA","montant_total_TTC","date_commande") VALUES (6,'Dalmon','client-pok34','3781 6th Alley','536 Mosinee Way',80,92,92,'9/20/2022');
INSERT INTO "facture" ("id_facture","nom_client","code_client","adresse_livraison","adresse_facturation","montant_total_HT","montant_total_TVA","montant_total_TTC","date_commande") VALUES (7,'Cartner','client-uew35','01667 Barnett Park','3374 Karstens Court',65,80,80,'11/8/2022');
INSERT INTO "facture" ("id_facture","nom_client","code_client","adresse_livraison","adresse_facturation","montant_total_HT","montant_total_TVA","montant_total_TTC","date_commande") VALUES (8,'Poulton','client-qfk47','62610 Brickson Park Alley','1191 Arkansas Way',80,84,84,'5/16/2022');
INSERT INTO "facture" ("id_facture","nom_client","code_client","adresse_livraison","adresse_facturation","montant_total_HT","montant_total_TVA","montant_total_TTC","date_commande") VALUES (9,'Dumberell','client-wkx67','86 Carioca Place','4770 Scott Terrace',120,142,142,'6/27/2022');
INSERT INTO "facture" ("id_facture","nom_client","code_client","adresse_livraison","adresse_facturation","montant_total_HT","montant_total_TVA","montant_total_TTC","date_commande") VALUES (10,'Dobbson','client-zmw63','213 Judy Drive','30 Johnson Court',70,79,79,'10/21/2022');
INSERT INTO "facture" ("id_facture","nom_client","code_client","adresse_livraison","adresse_facturation","montant_total_HT","montant_total_TVA","montant_total_TTC","date_commande") VALUES (11,'Dinsale','client-kqr98','60 1st Road','598 Loeprich Parkway',100,109,178,'7/14/2022');
INSERT INTO "facture" ("id_facture","nom_client","code_client","adresse_livraison","adresse_facturation","montant_total_HT","montant_total_TVA","montant_total_TTC","date_commande") VALUES (12,'Attwooll','client-emc52','711 Pine View Center','92 Waywood Way',50,63,63,'9/9/2022');
INSERT INTO "facture" ("id_facture","nom_client","code_client","adresse_livraison","adresse_facturation","montant_total_HT","montant_total_TVA","montant_total_TTC","date_commande") VALUES (13,'Bonnavant','client-kup93','3 Buena Vista Crossing','1663 Parkside Way',100,105,105,'11/14/2022');
INSERT INTO "facture" ("id_facture","nom_client","code_client","adresse_livraison","adresse_facturation","montant_total_HT","montant_total_TVA","montant_total_TTC","date_commande") VALUES (14,'Callard','client-cvs34','981 Lerdahl Center','1 Muir Center',110,130,153,'10/5/2022');
INSERT INTO "facture" ("id_facture","nom_client","code_client","adresse_livraison","adresse_facturation","montant_total_HT","montant_total_TVA","montant_total_TTC","date_commande") VALUES (15,'de Clercq','client-zbo19','19 Jackson Terrace','852 Linden Place',127,147,147,'2/17/2022');
INSERT INTO "facture" ("id_facture","nom_client","code_client","adresse_livraison","adresse_facturation","montant_total_HT","montant_total_TVA","montant_total_TTC","date_commande") VALUES (16,'Dyke','client-thd46','977 Oak Valley Lane','16531 Pine View Park',130,142,142,'9/1/2022');
INSERT INTO "facture" ("id_facture","nom_client","code_client","adresse_livraison","adresse_facturation","montant_total_HT","montant_total_TVA","montant_total_TTC","date_commande") VALUES (17,'Lamden','client-pdr38','21407 Toban Trail','32 Pierstorff Street',108,136,136,'11/15/2022');
INSERT INTO "facture" ("id_facture","nom_client","code_client","adresse_livraison","adresse_facturation","montant_total_HT","montant_total_TVA","montant_total_TTC","date_commande") VALUES (18,'Tessington','client-rho74','82 Steensland Hill','2264 Stone Corner Circle',112,135,135,'8/10/2022');
INSERT INTO "facture" ("id_facture","nom_client","code_client","adresse_livraison","adresse_facturation","montant_total_HT","montant_total_TVA","montant_total_TTC","date_commande") VALUES (19,'Borlease','client-lzp08','0460 Erie Park','949 Union Trail',120,160,160,'6/8/2022');
INSERT INTO "facture" ("id_facture","nom_client","code_client","adresse_livraison","adresse_facturation","montant_total_HT","montant_total_TVA","montant_total_TTC","date_commande") VALUES (20,'Ketchaside','client-axo46','3 Kenwood Place','7 Boyd Park',140,180,180,'1/15/2022');
INSERT INTO "adresse" ("id_adresse","numero","type_voie","nom_voie","code_postal","id_liste_ville") VALUES (1,20,'Court','Armistice','31201 CEDEX 2',4);
INSERT INTO "adresse" ("id_adresse","numero","type_voie","nom_voie","code_postal","id_liste_ville") VALUES (2,84,'Drive','Lien','426 57',13);
INSERT INTO "adresse" ("id_adresse","numero","type_voie","nom_voie","code_postal","id_liste_ville") VALUES (3,599,'Way','New Castle','59495',3);
INSERT INTO "adresse" ("id_adresse","numero","type_voie","nom_voie","code_postal","id_liste_ville") VALUES (4,27894,'Crossing','Darwin','7012',1);
INSERT INTO "adresse" ("id_adresse","numero","type_voie","nom_voie","code_postal","id_liste_ville") VALUES (5,167,'Hill','Artisan','6812',5);
INSERT INTO "adresse" ("id_adresse","numero","type_voie","nom_voie","code_postal","id_liste_ville") VALUES (6,3,'Terrace','Kennedy','7012',2);
INSERT INTO "adresse" ("id_adresse","numero","type_voie","nom_voie","code_postal","id_liste_ville") VALUES (7,52,'Plaza','Debs','96000',7);
INSERT INTO "adresse" ("id_adresse","numero","type_voie","nom_voie","code_postal","id_liste_ville") VALUES (8,56063,'Court','Spenser','19570-000',8);
INSERT INTO "adresse" ("id_adresse","numero","type_voie","nom_voie","code_postal","id_liste_ville") VALUES (9,996,'Hill','Scoville','0460',9);
INSERT INTO "adresse" ("id_adresse","numero","type_voie","nom_voie","code_postal","id_liste_ville") VALUES (10,77204,'Plaza','Schmedeman','45922 CEDEX 9',10);
INSERT INTO "adresse" ("id_adresse","numero","type_voie","nom_voie","code_postal","id_liste_ville") VALUES (11,56859,'Lane','Forster','54663',11);
INSERT INTO "adresse" ("id_adresse","numero","type_voie","nom_voie","code_postal","id_liste_ville") VALUES (12,48,'Road','Fieldstone','13232 CEDEX 01',12);
INSERT INTO "adresse" ("id_adresse","numero","type_voie","nom_voie","code_postal","id_liste_ville") VALUES (13,0,'Crossing','Amoth','426 57',13);
INSERT INTO "adresse" ("id_adresse","numero","type_voie","nom_voie","code_postal","id_liste_ville") VALUES (14,8007,'Avenue','Oak','39304 CEDEX',14);
INSERT INTO "adresse" ("id_adresse","numero","type_voie","nom_voie","code_postal","id_liste_ville") VALUES (15,17,'Trail','Jana','55690',15);
INSERT INTO "personnel" ("id_personnel","date_embauche","id_superieur","mot_de_passe","Id_role","id_adresse","id_personne") VALUES (1,'05/09/2022',2,'67d552c790d3f372f178103f89921827',1,13,1);
INSERT INTO "personnel" ("id_personnel","date_embauche","id_superieur","mot_de_passe","Id_role","id_adresse","id_personne") VALUES (2,'26/10/2022',4,'811540339e834ce239bbd7854412a5be',1,13,2);
INSERT INTO "personnel" ("id_personnel","date_embauche","id_superieur","mot_de_passe","Id_role","id_adresse","id_personne") VALUES (3,'13/11/2022',5,'02605744ee460301b64582434bea8bfd',1,8,3);
INSERT INTO "personnel" ("id_personnel","date_embauche","id_superieur","mot_de_passe","Id_role","id_adresse","id_personne") VALUES (4,'11/09/2022',3,'2636971ede7bcaf6c47ba7a76c43db71',1,6,4);
INSERT INTO "personnel" ("id_personnel","date_embauche","id_superieur","mot_de_passe","Id_role","id_adresse","id_personne") VALUES (5,'29/12/2022',4,'dc9d46d486956302c1df7071eedf1b10',1,2,5);
INSERT INTO "personnel" ("id_personnel","date_embauche","id_superieur","mot_de_passe","Id_role","id_adresse","id_personne") VALUES (6,'24/11/2022',4,'c6fbc4f26e44ebd9806671ff3e3199ab',1,14,6);
INSERT INTO "personnel" ("id_personnel","date_embauche","id_superieur","mot_de_passe","Id_role","id_adresse","id_personne") VALUES (7,'30/10/2022',4,'6ec788de407ce9d5b419df332d75cecf',1,13,7);
INSERT INTO "personnel" ("id_personnel","date_embauche","id_superieur","mot_de_passe","Id_role","id_adresse","id_personne") VALUES (8,'28/11/2022',4,'336eb955df4010eb920e7e3f64533f3d',1,10,8);
INSERT INTO "personnel" ("id_personnel","date_embauche","id_superieur","mot_de_passe","Id_role","id_adresse","id_personne") VALUES (9,'16/10/2022',3,'c4e4b2ab7a0ed489617ee622c882047c',1,15,9);
INSERT INTO "personnel" ("id_personnel","date_embauche","id_superieur","mot_de_passe","Id_role","id_adresse","id_personne") VALUES (10,'21/12/2022',4,'8f23737d8e8735f1b2500d7df7789351',1,15,10);
INSERT INTO "client" ("id_client","date_naissance","id_adresse","id_adresse_1","id_personne") VALUES (1,'22/07/1963',11,4,10);
INSERT INTO "client" ("id_client","date_naissance","id_adresse","id_adresse_1","id_personne") VALUES (2,'04/08/1948',3,4,11);
INSERT INTO "client" ("id_client","date_naissance","id_adresse","id_adresse_1","id_personne") VALUES (3,'27/11/1980',10,2,12);
INSERT INTO "client" ("id_client","date_naissance","id_adresse","id_adresse_1","id_personne") VALUES (4,'16/07/1953',8,1,13);
INSERT INTO "client" ("id_client","date_naissance","id_adresse","id_adresse_1","id_personne") VALUES (5,'16/07/1996',15,11,14);
INSERT INTO "client" ("id_client","date_naissance","id_adresse","id_adresse_1","id_personne") VALUES (6,'06/10/1965',13,12,15);
INSERT INTO "client" ("id_client","date_naissance","id_adresse","id_adresse_1","id_personne") VALUES (7,'07/05/1965',13,5,16);
INSERT INTO "client" ("id_client","date_naissance","id_adresse","id_adresse_1","id_personne") VALUES (8,'06/09/1948',15,2,17);
INSERT INTO "client" ("id_client","date_naissance","id_adresse","id_adresse_1","id_personne") VALUES (9,'30/04/1984',3,3,18);
INSERT INTO "client" ("id_client","date_naissance","id_adresse","id_adresse_1","id_personne") VALUES (10,'28/10/1990',2,8,19);
INSERT INTO "client" ("id_client","date_naissance","id_adresse","id_adresse_1","id_personne") VALUES (11,'12/01/2005',10,11,20);
INSERT INTO "client" ("id_client","date_naissance","id_adresse","id_adresse_1","id_personne") VALUES (12,'18/11/1980',9,2,21);
INSERT INTO "client" ("id_client","date_naissance","id_adresse","id_adresse_1","id_personne") VALUES (13,'25/10/1995',6,13,22);
INSERT INTO "client" ("id_client","date_naissance","id_adresse","id_adresse_1","id_personne") VALUES (14,'26/03/1992',4,14,23);
INSERT INTO "client" ("id_client","date_naissance","id_adresse","id_adresse_1","id_personne") VALUES (15,'21/12/1967',12,14,24);
INSERT INTO "client" ("id_client","date_naissance","id_adresse","id_adresse_1","id_personne") VALUES (16,'04/01/1998',14,14,25);
INSERT INTO "client" ("id_client","date_naissance","id_adresse","id_adresse_1","id_personne") VALUES (17,'12/06/1981',8,2,26);
INSERT INTO "client" ("id_client","date_naissance","id_adresse","id_adresse_1","id_personne") VALUES (18,'03/11/1966',13,1,27);
INSERT INTO "client" ("id_client","date_naissance","id_adresse","id_adresse_1","id_personne") VALUES (19,'08/02/1981',14,11,28);
INSERT INTO "client" ("id_client","date_naissance","id_adresse","id_adresse_1","id_personne") VALUES (20,'01/10/1955',3,3,29);
INSERT INTO "commande" ("id_commande","reference","date_emission","date_livraison","id_client") VALUES (1,'ref-2786o','20/09/2022','29/05/2022',6);
INSERT INTO "commande" ("id_commande","reference","date_emission","date_livraison","id_client") VALUES (2,'ref-1135y','23/02/2022','10/12/2021',16);
INSERT INTO "commande" ("id_commande","reference","date_emission","date_livraison","id_client") VALUES (3,'ref-8139a','30/04/2022','15/05/2022',3);
INSERT INTO "commande" ("id_commande","reference","date_emission","date_livraison","id_client") VALUES (4,'ref-6990v','11/05/2022','20/12/2021',12);
INSERT INTO "commande" ("id_commande","reference","date_emission","date_livraison","id_client") VALUES (5,'ref-8214p','11/11/2022','15/08/2022',9);
INSERT INTO "commande" ("id_commande","reference","date_emission","date_livraison","id_client") VALUES (6,'ref-6533r','11/07/2022','28/08/2022',3);
INSERT INTO "commande" ("id_commande","reference","date_emission","date_livraison","id_client") VALUES (7,'ref-3830k','04/03/2022','09/04/2022',18);
INSERT INTO "commande" ("id_commande","reference","date_emission","date_livraison","id_client") VALUES (8,'ref-5833j','25/12/2021','23/11/2022',10);
INSERT INTO "commande" ("id_commande","reference","date_emission","date_livraison","id_client") VALUES (9,'ref-4559f','18/07/2022','07/09/2022',1);
INSERT INTO "commande" ("id_commande","reference","date_emission","date_livraison","id_client") VALUES (10,'ref-9424y','11/12/2021','16/06/2022',19);
INSERT INTO "commande" ("id_commande","reference","date_emission","date_livraison","id_client") VALUES (11,'ref-1106y','27/07/2022','01/12/2021',15);
INSERT INTO "commande" ("id_commande","reference","date_emission","date_livraison","id_client") VALUES (12,'ref-9124h','19/04/2022','01/07/2022',9);
INSERT INTO "commande" ("id_commande","reference","date_emission","date_livraison","id_client") VALUES (13,'ref-7359w','27/12/2021','31/08/2022',9);
INSERT INTO "commande" ("id_commande","reference","date_emission","date_livraison","id_client") VALUES (14,'ref-5930h','21/04/2022','13/09/2022',6);
INSERT INTO "commande" ("id_commande","reference","date_emission","date_livraison","id_client") VALUES (15,'ref-5494v','21/06/2022','20/02/2022',19);
INSERT INTO "commande" ("id_commande","reference","date_emission","date_livraison","id_client") VALUES (16,'ref-0782z','12/06/2022','28/01/2022',20);
INSERT INTO "commande" ("id_commande","reference","date_emission","date_livraison","id_client") VALUES (17,'ref-8922z','26/02/2022','30/12/2021',20);
INSERT INTO "commande" ("id_commande","reference","date_emission","date_livraison","id_client") VALUES (18,'ref-3939z','13/12/2021','21/11/2022',1);
INSERT INTO "commande" ("id_commande","reference","date_emission","date_livraison","id_client") VALUES (19,'ref-9496n','12/02/2022','27/06/2022',1);
INSERT INTO "commande" ("id_commande","reference","date_emission","date_livraison","id_client") VALUES (20,'ref-0044z','06/12/2021','19/09/2022',12);
INSERT INTO "commande" ("id_commande","reference","date_emission","date_livraison","id_client") VALUES (21,'ref-1758u','21/09/2022','15/04/2022',6);
INSERT INTO "commande" ("id_commande","reference","date_emission","date_livraison","id_client") VALUES (22,'ref-1152r','30/03/2022','16/10/2022',17);
INSERT INTO "commande" ("id_commande","reference","date_emission","date_livraison","id_client") VALUES (23,'ref-7304t','16/07/2022','09/10/2022',3);
INSERT INTO "commande" ("id_commande","reference","date_emission","date_livraison","id_client") VALUES (24,'ref-6477g','25/02/2022','11/08/2022',14);
INSERT INTO "commande" ("id_commande","reference","date_emission","date_livraison","id_client") VALUES (25,'ref-1816b','25/04/2022','15/11/2022',15);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (1,'item-20902s','Souris','€47,80',277,47,0,1,14);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (2,'item-28525n','Moniteur','€14,44',213,32,1,3,11);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (3,'item-23240z','Carte fille','€87,47',313,52,1,4,5);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (4,'item-96135r','Tablette à stylet','€126,54',138,35,0,3,4);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (5,'item-53944b','Modem analogique','€72,90',252,34,1,6,2);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (6,'item-64141f','Webcam','€154,58',282,60,1,1,1);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (7,'item-92635f','Câble d''alimentation','€80,33',277,55,0,6,4);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (8,'item-22245x','Manette','€136,14',157,66,1,5,7);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (9,'item-03982t','Carte d''interface réseau','€255,46',260,58,1,3,6);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (10,'item-74052j','Lecteur optique','€115,47',128,49,1,1,11);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (11,'item-17588h','Microphone','€203,19',110,31,1,1,10);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (12,'item-96709j','Dissipateur de chaleur','€200,20',317,54,1,3,5);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (13,'item-21326v','Lecteur de carte','€15,33',186,36,1,2,6);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (14,'item-76110s','Carte son','€103,50',217,61,0,1,9);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (15,'item-56597f','Carte d''interface réseau','€71,39',255,42,0,4,2);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (16,'item-27093a','Carte fille','€163,59',88,48,1,1,8);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (17,'item-07344u','Projecteur','€176,70',169,51,0,4,4);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (18,'item-64864l','Lecteur Flash','€228,24',200,68,1,6,5);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (19,'item-47972f','Modem analogique','€209,78',147,45,1,6,3);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (20,'item-71901x','Imprimante','€298,67',169,31,1,1,14);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (21,'item-84072g','Souris','€110,26',128,61,0,1,1);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (22,'item-04227m','Manette','€86,87',289,55,1,1,6);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (23,'item-03351a','Lecteur de carte','€109,53',81,40,0,4,2);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (24,'item-36503q','Clavier','€249,89',250,61,0,2,12);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (25,'item-02186y','Batterie CMOS','€195,23',170,56,0,6,8);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (26,'item-68813v','Carte fille','€15,47',275,70,1,4,3);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (27,'item-04459o','Manette','€238,53',265,34,0,5,5);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (28,'item-96337s','Lecteur de disquette','€161,33',102,59,1,1,6);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (29,'item-29615t','Souris','€235,32',84,47,0,3,1);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (30,'item-24572b','Carte fille','€141,51',174,54,0,3,9);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (31,'item-68485g','Lecteur optique','€24,06',244,31,0,1,5);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (32,'item-20702c','Moniteur','€129,65',84,33,0,1,6);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (33,'item-61458x','Scanner','€266,64',170,48,1,1,1);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (34,'item-48011v','Lecteur Flash','€297,12',117,55,0,2,12);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (35,'item-76642s','Moniteur','€272,97',232,45,0,3,15);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (36,'item-48593x','Ventilateur','€140,28',185,31,0,4,9);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (37,'item-37618r','Disque dur externe','€130,58',104,61,0,1,5);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (38,'item-18262t','Haut-parleurs','€226,17',92,34,1,5,3);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (39,'item-42445q','Dissipateur de chaleur','€219,00',218,34,1,1,10);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (40,'item-44677t','Batterie CMOS','€55,50',127,64,1,3,15);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (41,'item-06394h','Disque dur','€144,61',158,49,1,2,3);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (42,'item-45372u','Lecteur de disquette','€150,02',186,43,0,5,12);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (43,'item-11526r','Scanner','€15,32',118,62,0,2,13);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (44,'item-88345w','Ventilateur','€270,72',94,64,1,1,6);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (45,'item-87656d','Disque SSD','€165,48',232,55,0,2,15);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (46,'item-66695t','Lecteur de carte','€183,52',111,45,0,1,9);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (47,'item-18856c','Carte contrôleur de disque dur','€153,05',186,34,0,1,1);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (48,'item-04748t','Carte mère','€99,62',140,69,1,6,7);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (49,'item-22457h','Carte mère','€82,15',213,62,1,1,2);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (50,'item-27900w','Lecteur optique','€126,87',142,48,1,2,14);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (51,'item-99728p','Carte vidéo','€290,13',316,52,1,2,3);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (52,'item-32967a','Souris','€32,88',99,43,0,1,15);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (53,'item-86066t','Carte d''extension','€217,15',136,44,1,1,12);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (54,'item-77939p','Imprimante','€281,03',246,35,1,3,6);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (55,'item-30416w','Carte contrôleur de disque dur','€133,20',296,39,1,2,2);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (56,'item-20722l','Carte son','€177,08',175,40,0,3,5);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (57,'item-57175z','Lecteur de disquette','€27,10',271,50,0,2,8);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (58,'item-35401a','Microphone','€174,59',187,56,1,5,9);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (59,'item-69519z','Carte d''extension','€76,93',326,60,0,2,6);
INSERT INTO "article" ("id_article","reference","designation","prix_ht","quantite_stock","seuil_reapprovisionnement","reduc_nombre","id_unite","id_couleur") VALUES (60,'item-37253k','Carte d''interface réseau','€85,67',289,63,1,6,3);
INSERT INTO "couleur" ("id_couleur","nom_couleur") VALUES (1,'blanc');
INSERT INTO "couleur" ("id_couleur","nom_couleur") VALUES (2,'noir');
INSERT INTO "couleur" ("id_couleur","nom_couleur") VALUES (3,'pourpre');
INSERT INTO "couleur" ("id_couleur","nom_couleur") VALUES (4,'rouge');
INSERT INTO "couleur" ("id_couleur","nom_couleur") VALUES (5,'orange');
INSERT INTO "couleur" ("id_couleur","nom_couleur") VALUES (6,'jaune');
INSERT INTO "couleur" ("id_couleur","nom_couleur") VALUES (7,'vert');
INSERT INTO "couleur" ("id_couleur","nom_couleur") VALUES (8,'bleu');
INSERT INTO "couleur" ("id_couleur","nom_couleur") VALUES (9,'violet');
INSERT INTO "couleur" ("id_couleur","nom_couleur") VALUES (10,'ivoire');
INSERT INTO "couleur" ("id_couleur","nom_couleur") VALUES (11,'crème');
INSERT INTO "couleur" ("id_couleur","nom_couleur") VALUES (12,'beige');
INSERT INTO "couleur" ("id_couleur","nom_couleur") VALUES (13,'rose');
INSERT INTO "couleur" ("id_couleur","nom_couleur") VALUES (14,'kaki');
INSERT INTO "couleur" ("id_couleur","nom_couleur") VALUES (15,'brun');
INSERT INTO "unite" ("id_unite","nom_unite") VALUES (1,'cm');
INSERT INTO "unite" ("id_unite","nom_unite") VALUES (2,'m');
INSERT INTO "unite" ("id_unite","nom_unite") VALUES (3,'L');
INSERT INTO "unite" ("id_unite","nom_unite") VALUES (4,'kg');
INSERT INTO "unite" ("id_unite","nom_unite") VALUES (5,'pc');
INSERT INTO "unite" ("id_unite","nom_unite") VALUES (6,'lot');
INSERT INTO "nature" ("id_nature","nom_nature") VALUES (1,'Auto et Moto');
INSERT INTO "nature" ("id_nature","nom_nature") VALUES (2,'High-Tech');
INSERT INTO "nature" ("id_nature","nom_nature") VALUES (3,'Jeux vidéo');
INSERT INTO "nature" ("id_nature","nom_nature") VALUES (4,'Luminaires et Eclairage');
INSERT INTO "nature" ("id_nature","nom_nature") VALUES (5,'Fournitures de bureau');
INSERT INTO "nature" ("id_nature","nom_nature") VALUES (6,'Informatique');
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (1,2);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (2,3);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (3,5);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (4,3);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (5,3);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (6,1);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (7,5);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (8,6);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (9,4);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (10,2);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (11,3);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (12,6);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (13,1);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (14,5);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (15,1);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (16,3);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (17,6);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (18,3);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (19,4);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (20,3);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (21,5);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (22,2);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (23,6);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (24,3);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (25,6);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (26,5);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (27,3);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (28,1);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (29,4);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (30,1);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (31,5);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (32,4);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (33,3);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (34,2);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (35,3);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (36,1);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (37,5);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (38,4);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (39,4);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (40,5);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (41,3);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (42,4);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (43,1);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (44,4);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (45,2);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (46,5);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (47,3);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (48,2);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (49,4);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (50,4);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (51,4);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (52,3);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (53,5);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (54,2);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (55,5);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (56,4);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (57,1);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (58,1);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (59,5);
INSERT INTO "caracterise" ("id_article","id_nature") VALUES (60,4);
INSERT INTO "payement" ("id_payement","date_reglement","montant","moyen","id_commande") VALUES (1,'14/08/2022','€891,52','Cheque',1);
INSERT INTO "payement" ("id_payement","date_reglement","montant","moyen","id_commande") VALUES (2,'02/03/2022','€581,89','Cheque',2);
INSERT INTO "payement" ("id_payement","date_reglement","montant","moyen","id_commande") VALUES (3,'02/10/2022','€457,74','SEPA',3);
INSERT INTO "payement" ("id_payement","date_reglement","montant","moyen","id_commande") VALUES (4,'23/02/2022','€163,80','Espece',4);
INSERT INTO "payement" ("id_payement","date_reglement","montant","moyen","id_commande") VALUES (5,'12/04/2022','€361,15','Cheque',5);
INSERT INTO "payement" ("id_payement","date_reglement","montant","moyen","id_commande") VALUES (6,'13/07/2022','€478,19','Cheque',6);
INSERT INTO "payement" ("id_payement","date_reglement","montant","moyen","id_commande") VALUES (7,'15/04/2022','€84,08','CB',7);
INSERT INTO "payement" ("id_payement","date_reglement","montant","moyen","id_commande") VALUES (8,'27/07/2022','€298,04','SEPA',8);
INSERT INTO "payement" ("id_payement","date_reglement","montant","moyen","id_commande") VALUES (9,'21/07/2022','€861,09','Espece',9);
INSERT INTO "payement" ("id_payement","date_reglement","montant","moyen","id_commande") VALUES (10,'09/12/2021','€582,66','CB',10);
INSERT INTO "payement" ("id_payement","date_reglement","montant","moyen","id_commande") VALUES (11,'21/09/2022','€644,97','SEPA',11);
INSERT INTO "payement" ("id_payement","date_reglement","montant","moyen","id_commande") VALUES (12,'14/10/2022','€349,47','SEPA',12);
INSERT INTO "payement" ("id_payement","date_reglement","montant","moyen","id_commande") VALUES (13,'11/10/2022','€598,44','Espece',13);
INSERT INTO "payement" ("id_payement","date_reglement","montant","moyen","id_commande") VALUES (14,'28/06/2022','€658,08','SEPA',14);
INSERT INTO "payement" ("id_payement","date_reglement","montant","moyen","id_commande") VALUES (15,'23/12/2021','€67,51','SEPA',15);
INSERT INTO "payement" ("id_payement","date_reglement","montant","moyen","id_commande") VALUES (16,'10/03/2022','€704,35','SEPA',16);
INSERT INTO "payement" ("id_payement","date_reglement","montant","moyen","id_commande") VALUES (17,'14/03/2022','€521,29','Espece',17);
INSERT INTO "payement" ("id_payement","date_reglement","montant","moyen","id_commande") VALUES (18,'24/01/2022','€747,51','Espece',18);
INSERT INTO "payement" ("id_payement","date_reglement","montant","moyen","id_commande") VALUES (19,'03/02/2022','€102,92','Espece',19);
INSERT INTO "payement" ("id_payement","date_reglement","montant","moyen","id_commande") VALUES (20,'13/04/2022','€136,42','SEPA',20);
INSERT INTO "payement" ("id_payement","date_reglement","montant","moyen","id_commande") VALUES (21,'15/06/2022','€793,67','Cheque',21);
INSERT INTO "payement" ("id_payement","date_reglement","montant","moyen","id_commande") VALUES (22,'08/06/2022','€780,18','Espece',22);
INSERT INTO "payement" ("id_payement","date_reglement","montant","moyen","id_commande") VALUES (23,'12/05/2022','€834,66','CB',23);
INSERT INTO "payement" ("id_payement","date_reglement","montant","moyen","id_commande") VALUES (24,'14/01/2022','€694,10','Espece',24);
INSERT INTO "payement" ("id_payement","date_reglement","montant","moyen","id_commande") VALUES (25,'14/07/2022','€368,05','Espece',25);
INSERT INTO "s_applique" ("id_commande","id_remise","id_remise_1") VALUES (1,2,4);
INSERT INTO "s_applique" ("id_commande","id_remise","id_remise_1") VALUES (2,2,3);
INSERT INTO "s_applique" ("id_commande","id_remise","id_remise_1") VALUES (3,2,5);
INSERT INTO "s_applique" ("id_commande","id_remise","id_remise_1") VALUES (4,2,5);
INSERT INTO "s_applique" ("id_commande","id_remise","id_remise_1") VALUES (5,2,NULL);
INSERT INTO "s_applique" ("id_commande","id_remise","id_remise_1") VALUES (6,2,1);
INSERT INTO "s_applique" ("id_commande","id_remise","id_remise_1") VALUES (7,2,NULL);
INSERT INTO "s_applique" ("id_commande","id_remise","id_remise_1") VALUES (8,2,5);
INSERT INTO "s_applique" ("id_commande","id_remise","id_remise_1") VALUES (9,2,5);
INSERT INTO "s_applique" ("id_commande","id_remise","id_remise_1") VALUES (10,2,NULL);
INSERT INTO "s_applique" ("id_commande","id_remise","id_remise_1") VALUES (11,2,5);
INSERT INTO "s_applique" ("id_commande","id_remise","id_remise_1") VALUES (12,2,4);
INSERT INTO "s_applique" ("id_commande","id_remise","id_remise_1") VALUES (13,2,4);
INSERT INTO "s_applique" ("id_commande","id_remise","id_remise_1") VALUES (14,2,NULL);
INSERT INTO "s_applique" ("id_commande","id_remise","id_remise_1") VALUES (15,2,1);
INSERT INTO "s_applique" ("id_commande","id_remise","id_remise_1") VALUES (16,2,5);
INSERT INTO "s_applique" ("id_commande","id_remise","id_remise_1") VALUES (17,2,NULL);
INSERT INTO "s_applique" ("id_commande","id_remise","id_remise_1") VALUES (18,2,5);
INSERT INTO "s_applique" ("id_commande","id_remise","id_remise_1") VALUES (19,2,NULL);
INSERT INTO "s_applique" ("id_commande","id_remise","id_remise_1") VALUES (20,2,NULL);
INSERT INTO "s_applique" ("id_commande","id_remise","id_remise_1") VALUES (21,2,NULL);
INSERT INTO "s_applique" ("id_commande","id_remise","id_remise_1") VALUES (22,2,3);
INSERT INTO "s_applique" ("id_commande","id_remise","id_remise_1") VALUES (23,2,5);
INSERT INTO "s_applique" ("id_commande","id_remise","id_remise_1") VALUES (24,2,5);
INSERT INTO "s_applique" ("id_commande","id_remise","id_remise_1") VALUES (25,2,5);
INSERT INTO "conteneur" ("id_conteneur","quantite","remise_unitaire_exceptionel","remise_unitaire_nombre","id_commande","id_article") VALUES (1,14,0,NULL,1,40);
INSERT INTO "conteneur" ("id_conteneur","quantite","remise_unitaire_exceptionel","remise_unitaire_nombre","id_commande","id_article") VALUES (2,4,15,5,2,42);
INSERT INTO "conteneur" ("id_conteneur","quantite","remise_unitaire_exceptionel","remise_unitaire_nombre","id_commande","id_article") VALUES (3,1,0,NULL,3,49);
INSERT INTO "conteneur" ("id_conteneur","quantite","remise_unitaire_exceptionel","remise_unitaire_nombre","id_commande","id_article") VALUES (4,9,0,NULL,4,7);
INSERT INTO "conteneur" ("id_conteneur","quantite","remise_unitaire_exceptionel","remise_unitaire_nombre","id_commande","id_article") VALUES (5,11,0,NULL,5,31);
INSERT INTO "conteneur" ("id_conteneur","quantite","remise_unitaire_exceptionel","remise_unitaire_nombre","id_commande","id_article") VALUES (6,13,10,NULL,6,54);
INSERT INTO "conteneur" ("id_conteneur","quantite","remise_unitaire_exceptionel","remise_unitaire_nombre","id_commande","id_article") VALUES (7,6,0,NULL,7,6);
INSERT INTO "conteneur" ("id_conteneur","quantite","remise_unitaire_exceptionel","remise_unitaire_nombre","id_commande","id_article") VALUES (8,9,0,5,8,31);
INSERT INTO "conteneur" ("id_conteneur","quantite","remise_unitaire_exceptionel","remise_unitaire_nombre","id_commande","id_article") VALUES (9,10,0,NULL,9,42);
INSERT INTO "conteneur" ("id_conteneur","quantite","remise_unitaire_exceptionel","remise_unitaire_nombre","id_commande","id_article") VALUES (10,8,0,NULL,10,31);
INSERT INTO "conteneur" ("id_conteneur","quantite","remise_unitaire_exceptionel","remise_unitaire_nombre","id_commande","id_article") VALUES (11,8,0,NULL,11,57);
INSERT INTO "conteneur" ("id_conteneur","quantite","remise_unitaire_exceptionel","remise_unitaire_nombre","id_commande","id_article") VALUES (12,5,0,20,12,1);
INSERT INTO "conteneur" ("id_conteneur","quantite","remise_unitaire_exceptionel","remise_unitaire_nombre","id_commande","id_article") VALUES (13,4,0,20,13,43);
INSERT INTO "conteneur" ("id_conteneur","quantite","remise_unitaire_exceptionel","remise_unitaire_nombre","id_commande","id_article") VALUES (14,1,0,NULL,14,32);
INSERT INTO "conteneur" ("id_conteneur","quantite","remise_unitaire_exceptionel","remise_unitaire_nombre","id_commande","id_article") VALUES (15,1,0,5,15,37);
INSERT INTO "conteneur" ("id_conteneur","quantite","remise_unitaire_exceptionel","remise_unitaire_nombre","id_commande","id_article") VALUES (16,15,0,NULL,16,3);
INSERT INTO "conteneur" ("id_conteneur","quantite","remise_unitaire_exceptionel","remise_unitaire_nombre","id_commande","id_article") VALUES (17,14,15,50,17,18);
INSERT INTO "conteneur" ("id_conteneur","quantite","remise_unitaire_exceptionel","remise_unitaire_nombre","id_commande","id_article") VALUES (18,15,20,5,18,22);
INSERT INTO "conteneur" ("id_conteneur","quantite","remise_unitaire_exceptionel","remise_unitaire_nombre","id_commande","id_article") VALUES (19,9,0,NULL,19,16);
INSERT INTO "conteneur" ("id_conteneur","quantite","remise_unitaire_exceptionel","remise_unitaire_nombre","id_commande","id_article") VALUES (20,13,0,NULL,20,6);
INSERT INTO "conteneur" ("id_conteneur","quantite","remise_unitaire_exceptionel","remise_unitaire_nombre","id_commande","id_article") VALUES (21,12,15,20,21,10);
INSERT INTO "conteneur" ("id_conteneur","quantite","remise_unitaire_exceptionel","remise_unitaire_nombre","id_commande","id_article") VALUES (22,12,0,NULL,22,54);
INSERT INTO "conteneur" ("id_conteneur","quantite","remise_unitaire_exceptionel","remise_unitaire_nombre","id_commande","id_article") VALUES (23,7,0,NULL,23,37);
INSERT INTO "conteneur" ("id_conteneur","quantite","remise_unitaire_exceptionel","remise_unitaire_nombre","id_commande","id_article") VALUES (24,6,0,NULL,24,56);
INSERT INTO "conteneur" ("id_conteneur","quantite","remise_unitaire_exceptionel","remise_unitaire_nombre","id_commande","id_article") VALUES (25,14,0,NULL,1,51);
INSERT INTO "conteneur" ("id_conteneur","quantite","remise_unitaire_exceptionel","remise_unitaire_nombre","id_commande","id_article") VALUES (26,13,0,NULL,2,13);
INSERT INTO "conteneur" ("id_conteneur","quantite","remise_unitaire_exceptionel","remise_unitaire_nombre","id_commande","id_article") VALUES (27,3,0,5,3,9);
INSERT INTO "conteneur" ("id_conteneur","quantite","remise_unitaire_exceptionel","remise_unitaire_nombre","id_commande","id_article") VALUES (28,9,10,NULL,4,37);
INSERT INTO "conteneur" ("id_conteneur","quantite","remise_unitaire_exceptionel","remise_unitaire_nombre","id_commande","id_article") VALUES (29,5,0,NULL,5,12);
INSERT INTO "conteneur" ("id_conteneur","quantite","remise_unitaire_exceptionel","remise_unitaire_nombre","id_commande","id_article") VALUES (30,3,15,5,6,53);
INSERT INTO "conteneur" ("id_conteneur","quantite","remise_unitaire_exceptionel","remise_unitaire_nombre","id_commande","id_article") VALUES (31,1,0,NULL,7,35);
INSERT INTO "conteneur" ("id_conteneur","quantite","remise_unitaire_exceptionel","remise_unitaire_nombre","id_commande","id_article") VALUES (32,1,0,NULL,8,50);
INSERT INTO "conteneur" ("id_conteneur","quantite","remise_unitaire_exceptionel","remise_unitaire_nombre","id_commande","id_article") VALUES (33,6,0,NULL,9,36);
INSERT INTO "conteneur" ("id_conteneur","quantite","remise_unitaire_exceptionel","remise_unitaire_nombre","id_commande","id_article") VALUES (34,7,0,50,10,18);
INSERT INTO "conteneur" ("id_conteneur","quantite","remise_unitaire_exceptionel","remise_unitaire_nombre","id_commande","id_article") VALUES (35,5,0,NULL,11,15);
INSERT INTO "conteneur" ("id_conteneur","quantite","remise_unitaire_exceptionel","remise_unitaire_nombre","id_commande","id_article") VALUES (36,15,0,NULL,12,13);
INSERT INTO "conteneur" ("id_conteneur","quantite","remise_unitaire_exceptionel","remise_unitaire_nombre","id_commande","id_article") VALUES (37,9,0,50,13,8);
INSERT INTO "conteneur" ("id_conteneur","quantite","remise_unitaire_exceptionel","remise_unitaire_nombre","id_commande","id_article") VALUES (38,3,20,NULL,14,34);
INSERT INTO "conteneur" ("id_conteneur","quantite","remise_unitaire_exceptionel","remise_unitaire_nombre","id_commande","id_article") VALUES (39,1,0,NULL,15,29);
INSERT INTO "conteneur" ("id_conteneur","quantite","remise_unitaire_exceptionel","remise_unitaire_nombre","id_commande","id_article") VALUES (40,11,0,20,16,51);
INSERT INTO "conteneur" ("id_conteneur","quantite","remise_unitaire_exceptionel","remise_unitaire_nombre","id_commande","id_article") VALUES (41,1,0,NULL,17,3);
INSERT INTO "conteneur" ("id_conteneur","quantite","remise_unitaire_exceptionel","remise_unitaire_nombre","id_commande","id_article") VALUES (42,6,15,NULL,18,55);
INSERT INTO "conteneur" ("id_conteneur","quantite","remise_unitaire_exceptionel","remise_unitaire_nombre","id_commande","id_article") VALUES (43,9,0,20,19,39);
INSERT INTO "conteneur" ("id_conteneur","quantite","remise_unitaire_exceptionel","remise_unitaire_nombre","id_commande","id_article") VALUES (44,6,0,NULL,20,14);
INSERT INTO "conteneur" ("id_conteneur","quantite","remise_unitaire_exceptionel","remise_unitaire_nombre","id_commande","id_article") VALUES (45,10,0,NULL,21,32);
INSERT INTO "conteneur" ("id_conteneur","quantite","remise_unitaire_exceptionel","remise_unitaire_nombre","id_commande","id_article") VALUES (46,10,0,NULL,22,32);
INSERT INTO "conteneur" ("id_conteneur","quantite","remise_unitaire_exceptionel","remise_unitaire_nombre","id_commande","id_article") VALUES (47,8,20,NULL,23,29);
INSERT INTO "conteneur" ("id_conteneur","quantite","remise_unitaire_exceptionel","remise_unitaire_nombre","id_commande","id_article") VALUES (48,10,0,NULL,24,43);
INSERT INTO "conteneur" ("id_conteneur","quantite","remise_unitaire_exceptionel","remise_unitaire_nombre","id_commande","id_article") VALUES (49,9,0,NULL,1,14);
INSERT INTO "conteneur" ("id_conteneur","quantite","remise_unitaire_exceptionel","remise_unitaire_nombre","id_commande","id_article") VALUES (50,5,0,NULL,2,60);
COMMIT;
