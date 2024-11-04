-- Table for City
CREATE TABLE City (
    id INT PRIMARY KEY,
    district_id INT,
    name VARCHAR(50) NOT NULL,
    code INT,
    FOREIGN KEY (district_id) REFERENCES District(id)
);