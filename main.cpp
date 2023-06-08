#include <vector>
#include <SFML/Graphics.hpp>
#include <cmath>
#include <iostream>
#include <string>
#include <fstream>
#include "UIManager.h"

int main()
{
    // Создаем окно размером 800x600 с названием "Image Editor"
    sf::RenderWindow window(sf::VideoMode(1400, 800), "Image Editor");
    UIManager ui_manager(window);

    while (window.isOpen())
    {
        sf::Event event{};
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close(); // Закрываем окно при нажатии на кнопку закрытия
        }

        window.clear(sf::Color::White);

        ui_manager.drawUI();

        window.display();
    }
    return 0;
}
