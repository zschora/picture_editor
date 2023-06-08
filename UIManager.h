//
// Created by гиоргий on 16.05.2023.
//

#ifndef PICTURE_EDITOR_UIMANAGER_H
#define PICTURE_EDITOR_UIMANAGER_H

#include <SFML/Graphics.hpp>
#include "ImageEditor.h"

class UIManager {
private:
    sf::RenderWindow& window; // Ссылка на окно SFML
    sf::Font font; // Шрифт для текстовых элементов интерфейса
    ImageEditor ie;
    const float sep = 200;
    const float up_boreder = 20;
    const float right_boreder = 20;

public:
    explicit UIManager(sf::RenderWindow &window);

    void drawUI(); // Метод для отображения элементов интерфейса
};


#endif //PICTURE_EDITOR_UIMANAGER_H
