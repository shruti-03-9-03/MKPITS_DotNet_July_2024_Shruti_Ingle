-- Table for District
CREATE TABLE District (
    id INT PRIMARY KEY,
    state_id INT,
    name VARCHAR(50) NOT NULL,
    code INT,
    FOREIGN KEY (state_id) REFERENCES State(id)
);