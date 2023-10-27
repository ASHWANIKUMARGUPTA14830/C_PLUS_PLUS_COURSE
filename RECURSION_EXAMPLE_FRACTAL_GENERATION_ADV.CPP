#include <SFML/Graphics.hpp>

void drawKochSnowflake(sf::RenderWindow& window, sf::Vector2f p1, sf::Vector2f p2, int depth) {
    if (depth == 0) {
        sf::Vertex line[] = {p1, p2};
        window.draw(line, 2, sf::Lines);
    } else {
        sf::Vector2f v = (p2 - p1) / 3.0f;
        sf::Vector2f pA = p1 + v;
        sf::Vector2f pB = p1 + 2.0f * v;
        sf::Vector2f pC = pA + sf::Vector2f(cos(M_PI / 3), sin(M_PI / 3)) * v;

        drawKochSnowflake(window, p1, pA, depth - 1);
        drawKochSnowflake(window, pA, pC, depth - 1);
        drawKochSnowflake(window, pC, pB, depth - 1);
        drawKochSnowflake(window, pB, p2, depth - 1);
    }
}

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Koch Snowflake");
    window.clear();

    sf::Vector2f p1(100, 300);
    sf::Vector2f p2(700, 300);

    int depth = 4; // Adjust the depth for more or less detail

    drawKochSnowflake(window, p1, p2, depth);

    window.display();

    sf::Event event;
    while (window.isOpen()) {
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
    }

    return 0;
}
